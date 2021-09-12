#include "_SQL.h"

//---------------------------------Constructor---------------------------------
_SQL::_SQL(TADOQuery* ADOQuery, const AnsiString& Table_name, const bool& Sort_up)
{
	this->Field          = std::make_unique<std::vector<AnsiString>>();
	this->Temp_last_sql  = std::make_unique<std::vector<AnsiString>>();

	this->ADOQuery        = ADOQuery;
	this->Table_name      = Table_name;
	this->Sort_up         = Sort_up;
	this->Active          = true;
	this->_SQL_command    = "";


};

//---------------------------------Destructor---------------------------------
_SQL::~_SQL()
{
	this->ADOQuery   = 0;
    this->Field->clear();

	delete this->ADOQuery;

};
						   //PUBLIC Section
//------------------------------------------------------------------------------
void _SQL::Add(const AnsiString& field)
{
 this->Field->push_back(field);
}

//------------------------------------------------------------------------------
void _SQL::Add(const std::tuple<AnsiString, AnsiString, bool, bool>& value)
{
//touple: 0 = Field name(AnsiString); 1 = value(AnsiString);
// 2 = First Field(bool); 3 = the sorting will be based on this field(bool true == BY ORDER ASC);

   if (this->check_tuple_string(AnsiString(std::get<0>(value))) == true)
   {
	   AnsiString temp = std::get<1>(value);
	   temp            = this->check_normal_AnsiString(temp, '*', '%');
	   temp            = this->check_normal_AnsiString(temp, '?', '_');

	   if (std::get<2>(value) == true)
	   {
		this->Temp_last_sql->push_back(AnsiString(" WHERE "+std::get<0>(value)+" LIKE \'"+temp+"\' "));
	   }
	   else
	   {
		this->Temp_last_sql->push_back(AnsiString(" AND "+std::get<0>(value)+" LIKE \'"+temp+"\' "));
	   }



		if (std::get<3>(value) == true)
		{
		this->Sort_field = std::get<0>(value);
		}

//		AnsiString sort = (this->Sort_up == true)?" ASC ":" DESC ";
//		if (std::get<3>(value) == true)
//		{
//		this->Temp_last_sql->push_back(AnsiString(" ORDER BY "+std::get<0>(value)+ " "+sort));
//		}
   }
};

//------------------------------------------------------------------------------
void _SQL::Add(const std::tuple<AnsiString, int, int, bool, bool>& value)
//touple: 0 = Field name(AnsiString); 1 = First value(AnsiString); 2 = Last value(AnsiString);
// 3 = First Field(bool); 4 = the sorting will be based on this field(bool true == BY ORDER ASC);
{

   if (this->check_tuple_string(std::get<0>(value)) == true)
   {
	   if (std::get<3>(value) == true)
	   {
		this->Temp_last_sql->push_back(AnsiString(" WHERE "+std::get<0>(value)+" BETWEEN "
									   +std::get<1>(value)+" AND "+std::get<2>(value)+" "));
	   }
	   else
	   {
		this->Temp_last_sql->push_back(AnsiString(" AND "+std::get<0>(value)+" BETWEEN "
									   +std::get<1>(value)+" AND "+std::get<2>(value)+" "));
	   }


		if (std::get<4>(value) == true)
		{
		this->Sort_field = std::get<0>(value);
		}
   }


};

//------------------------------------------------------------------------------
void _SQL::Add(const std::tuple<AnsiString, TDate, TDate, bool, bool>& value)
//touple: 0 = Field name(AnsiString); 1 = First value(AnsiString); 2 = Last value(AnsiString);
// 3 = First Field(bool); 4 = the sorting will be based on this field(bool true == BY ORDER ASC);
{
   if (this->check_tuple_string(std::get<0>(value)) == true)
   {
		TDate first_date = std::get<1>(value);
		TDate last_date = std::get<2>(value);

	   if (std::get<3>(value) == true)
	   {

		this->Temp_last_sql->push_back(AnsiString(" WHERE "+std::get<0>(value)+" BETWEEN " +this->check_normal_date(first_date)
									   +" AND "+this->check_normal_date(last_date)+" "));
	   }
	   else
	   {
		this->Temp_last_sql->push_back(AnsiString(" AND "+std::get<0>(value)+" BETWEEN " +this->check_normal_date(first_date)
									   +" AND "+this->check_normal_date(last_date)+" "));
	   }


		if (std::get<4>(value) == true)
		{
		this->Sort_field = std::get<0>(value);
		}
   }

};

//------------------------------------------------------------------------------
void _SQL::set_Sort_field(const bool& Sort_up)
{
   this->Sort_up  = Sort_up;
};

bool _SQL::Field_not_null()
{
	 if (this->Field->empty() == true)
	 {
	  return false;
	 }
	 else
	 {
	  return true;
	 }
};

//------------------------------------------------------------------------------
void _SQL::Order_general()
{
 if (this->Active == true)
 {
   this->order_part_one();
   this->order_part_ORDER_BY();
   this->Sql_text_rewrite();	 
 }

   AnsiString temp = "";

   for (auto i = this->Temp_last_sql->begin(); i != this->Temp_last_sql->end(); i++)
   {
	temp+= *i;
   };
   
};

//------------------------------------------------------------------------------
void _SQL::Order_clear()
{
  this->Temp_last_sql->clear();
};

//------------------------------------------------------------------------------
void _SQL::Sort_field_run(const AnsiString& Field)
{
   if (this->Sort_field == Field)
   {
	this->Sort_up = this->swap_places(this->Sort_up);
   }
   else
   {
	this->Sort_field = Field;
	this->Sort_up    = true;
   };

   if (this->Sort_field != "")
   {
   this->Temp_last_sql->pop_back();
   }

   this->order_part_ORDER_BY();
   this->Sql_text_rewrite();
};

//------------------------------------------------------------------------------
void _SQL::set_Active(const bool& value)
{
  if (value != true)
  {
   this->Order_clear();
   this->ADOQuery->Active = value;
  }

  this->Active = value;
};

//------------------------------------------------------------------------------
bool _SQL::get_Active()
{
   return this->Active;
};
						   //PRIVATE Section
//------------------------------------------------------------------------------
bool _SQL::check_tuple_string(const AnsiString& value)
{
  bool temp = false;
  for ( std::vector<AnsiString>::iterator i = this->Field->begin(); i != this->Field->end(); i++)
  {


	if ((*i)==value)
	{
	 temp = true;
	 return  temp;
	};

	if (i == this->Field->end())
	{
	 temp = false;
	 return temp;
	}


  };

  return temp;
};
//------------------------------------------------------------------------------
void _SQL::order_part_one()
{
	AnsiString temp = "";
	int Field_size = this->Field->size();
	this->order_part_one_toxiciity_1(Field_size, temp);
};

void _SQL::order_part_one_toxiciity_1(const int& Field_size, AnsiString& temp)
{

	switch(Field_size)
	{
	 case 0: {
			  return;
			 };

	 case 1: {
			  temp = "SELECT "+*this->Field->begin()+" FROM "+this->Table_name+" ";
			  break;
			 };

	 default: {
				 for (std::vector<AnsiString>::iterator i = this->Field->begin(); i != this->Field->end(); i++)
				{
					if (i == this->Field->begin())
					{
					 temp = "SELECT "+(*i)+", ";
					continue;
					};

						if ((--this->Field->end()) == i)
						{
							temp = temp+ (*i);
						}
						else
						{
							temp = temp+ (*i)+", ";
						};
				};

				temp = temp + " FROM "+this->Table_name;

			  }
	};
   this->Temp_last_sql->insert(this->Temp_last_sql->begin(), temp);

};

//------------------------------------------------------------------------------
void _SQL::order_part_ORDER_BY()
{
  AnsiString sort = (this->Sort_up == true)?" ASC ":" DESC ";

 if (this->Sort_field==AnsiString(""))
 {
  this->Temp_last_sql->push_back(AnsiString("  "));
 } 
 else
 {
 this->Temp_last_sql->push_back(AnsiString(" ORDER BY "+ this->Sort_field + sort));
 }
};

//-----------------------------------------------------------------------------

AnsiString _SQL::check_normal_date(TDate& date)
{
  AnsiString temp = DateToStr(date);

  temp = this->check_normal_AnsiString(temp, '.', '/');
  temp = this->past_slesh_for_date(temp);
  return temp;

};

std::string& _SQL::check_normal_char(std::string& obj, const char& value, const char& past)
{
	auto obj_itterator = obj.begin();
	do
	{
	obj_itterator = std::find(obj.begin(), obj.end(),value);
		if (obj_itterator != obj.end())
		{
		*obj_itterator = past;
		}

	}
	while(obj_itterator != obj.end());
	return obj;

};

AnsiString& _SQL::check_normal_AnsiString(AnsiString& obj, const char& value, const char& past)
{
  std::string temp = obj.c_str();
  temp             = this->check_normal_char(temp, value, past);

  return obj = temp.c_str();

};

AnsiString& _SQL::past_slesh_for_date(AnsiString& obj)
{

  std::string temp = obj.c_str();
  auto it          = temp.begin();
  temp.insert(it,'#');
  it               = temp.end();
  temp.insert(it,'#');

  return obj = temp.c_str();

};

bool& _SQL::swap_places(bool& value)
{
	if (value == true)
	{
	 value = false;
	}
	else
	{
	 value = true;
	};

	return value;
};

void _SQL::Sql_text_rewrite()
{
   this->ADOQuery->SQL->Clear();
  for (auto i = this->Temp_last_sql->begin(); i != this->Temp_last_sql->end(); i++)
  {
   this->ADOQuery->SQL->Add(*i);
  }
  this->ADOQuery->Active = true;
};

