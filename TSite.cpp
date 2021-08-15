#include "TSite.h"
//
// TSite::TSite()
// {
//
// };

 TSite::TSite()
 {
	this->Active_object             = true;
	this->Active_object_columns_run = false;
	this->columns       = std::make_unique<Add_columns_r>();
 };

 TSite::~TSite()
 {
	this->null_all_object_point();

	delete this->ADO_query_o;
	delete this->DB_grid_o;

	delete this->ID_DBE;
	delete this->Host_DBE;
	delete this->Login_DBE;
	delete this->Password_DBE;
	delete this->Mail_DBE;
	delete this->Registration_date_DBE;
	delete this->First_name_DBE;
	delete this->Last_name_DBE;
	delete this->Year_of_birth_DBE;
	delete this->Gender_of_person_DBE;
	delete this->Place_of_birth_DBE;
	delete this->Country_DBE;
	delete this->City_DBE;
	delete this->Address_registration_DBE;
	delete this->Place_of_resindece_DBE;
	delete this->Home_telephone_DBE;
	delete this->Mobile_telephone_DBE;
 };

//                             PUBLIC SECTION
//*************************************************************************--//
//*************************************************************************--//
//*************************************************************************--//

//-----------------------SET--------------------------------------------------//
 void TSite::set_DB_grid_o(TDBGrid* object)
 {
 this->DB_grid_o = object;
 };

//------------------------------------------------------------------------------
 void TSite::set_ADO_query_o(TADOQuery* object)
 {
   this->ADO_query_o = object;
 };

 //------------------------------------------------------------------------------
void TSite::set_ID_DBE(TDBEdit* object)
{
  this->ID_DBE = object;
};

//------------------------------------------------------------------------------
void TSite::set_Host_DBE(TDBEdit* object)
{
  this->Host_DBE = object;
};

//------------------------------------------------------------------------------
void TSite::set_Login_DBE(TDBEdit* object)
{
  this->Login_DBE = object;
};

//------------------------------------------------------------------------------
void TSite::set_Password_DBE(TDBEdit* object)
{
   this->Password_DBE = object;
};

//------------------------------------------------------------------------------
void TSite::set_Mail_DBE(TDBEdit* object)
{
   this->Mail_DBE = object;
};

//------------------------------------------------------------------------------
void TSite::set_Registration_date_DBE(TDBEdit* object)
{
   this->Registration_date_DBE = object;
};

//------------------------------------------------------------------------------
void TSite::set_First_name_DBE(TDBEdit* object)
{
   this->First_name_DBE = object;
};

//------------------------------------------------------------------------------
void TSite::set_Last_name_DBE(TDBEdit* object)
{
   this->Last_name_DBE = object;
};

//------------------------------------------------------------------------------
void TSite::set_Year_of_birth_DBE(TDBEdit* object)
{
   this->Year_of_birth_DBE = object;
};

//------------------------------------------------------------------------------
void TSite::set_Gender_of_person_DBE(TDBEdit* object)
{
   this->Gender_of_person_DBE = object;
};

//------------------------------------------------------------------------------
void TSite::set_Place_of_birth_DBE(TDBEdit* object)
{
   this->Place_of_birth_DBE = object;
};

//------------------------------------------------------------------------------
void TSite::set_Country_DBE(TDBEdit* object)
{
   this->Country_DBE = object;
};

//------------------------------------------------------------------------------
void TSite::set_City_DBE(TDBEdit* object)
{
   this->City_DBE = object;
};

//------------------------------------------------------------------------------
void TSite::set_Address_registration_DBE(TDBEdit* object)
{
   this->Address_registration_DBE = object;
};

//------------------------------------------------------------------------------
void TSite::set_Place_of_resindece_DBE(TDBEdit* object)
{
   this->Place_of_resindece_DBE = object;
};

//------------------------------------------------------------------------------
void TSite::set_Home_telephone_DBE(TDBEdit* object)
{
   this->Home_telephone_DBE = object;
};

//------------------------------------------------------------------------------
void TSite::set_Mobile_telephone_DBE(TDBEdit* object)
{
   this->Mobile_telephone_DBE = object;
};

//------------------------------------------------------------------------------
void TSite::set_Active_object(const bool& set)
{
  this->Active_object = set;
};


//------------------------------------------------------------------------------
//-----------------------GET--------------------------------------------------//
//------------------------------------------------------------------------------
 AnsiString TSite::get_path_name()
 {
	return this->Path_name;
 };

 bool TSite::get_Active_object()
 {
	if (this->Active_object == true)
	{
	 return true;
	}
	else
	{
     return false;
	}
 };



//------------------------------------------------------------------------------
bool TSite::get_Active_object_columns_run()
{
  return this->Active_object_columns_run;
};

//------------------------------------------------------------------------------
bool TSite::get_selected_all_object()
{
	 if (this->ADO_query_o == 0)
	 {
	  return false;
	 };

	 if (this->DB_grid_o == 0)
	 {
	  return false;
	 };

	 if (this->ID_DBE == 0)
	 {
	  return false;
	 };

	 if (this->Host_DBE == 0)
	 {
	  return false;
	 };

	 if (this->Login_DBE == 0)
	 {
	  return false;
	 };

	 if (this->Password_DBE == 0)
	 {
	  return false;
	 };

	 if (this->Mail_DBE == 0)
	 {
	  return false;
	 };

	 if (this->Registration_date_DBE == 0)
	 {
	  return false;
	 };

	 if (this->First_name_DBE == 0)
	 {
	  return false;
	 };

	 if (this->Last_name_DBE == 0)
	 {
	  return false;
	 };

	 if (this->Year_of_birth_DBE == 0)
	 {
	  return false;
	 };

	 if (this->Gender_of_person_DBE == 0)
	 {
	  return false;
	 };

	 if (this->Place_of_birth_DBE == 0)
	 {
	  return false;
	 };

	 if (this->Country_DBE == 0)
	 {
	  return false;
	 };

	 if (this->City_DBE == 0)
	 {
	  return false;
	 };

	 if (this->Address_registration_DBE == 0)
	 {
	  return false;
	 };

	 if (this->Place_of_resindece_DBE == 0)
	 {
	  return false;
	 };

	 if (this->Home_telephone_DBE == 0)
	 {
	  return false;
	 };

	 if (this->Mobile_telephone_DBE == 0)
	 {
	  return false;
	 };

     return true;
};

//******************************************************************************
//------------------------------------------------------------------------------
void TSite::null_all_object_point()
{
	this->ID_DBE->DataField                     = "";
	this->Host_DBE->DataField                   = "";
	this->Login_DBE->DataField                  = "";
	this->Password_DBE->DataField               = "";
	this->Mail_DBE->DataField                   = "";
	this->Registration_date_DBE->DataField      = "";
	this->First_name_DBE->DataField             = "";
	this->Last_name_DBE->DataField              = "";
	this->Year_of_birth_DBE->DataField          = "";
	this->Gender_of_person_DBE->DataField       = "";
	this->Place_of_birth_DBE->DataField         = "";
	this->Country_DBE->DataField                = "";
	this->City_DBE->DataField                   = "";
	this->Address_registration_DBE->DataField   = "";
	this->Place_of_resindece_DBE->DataField     = "";
	this->Home_telephone_DBE->DataField         = "";
	this->Mobile_telephone_DBE->DataField       = "";

	this->ADO_query_o                           = 0;
	this->DB_grid_o                             = 0;

    this->ID_DBE                                = 0;
	this->Host_DBE                              = 0;
	this->Login_DBE                             = 0;
	this->Password_DBE                          = 0;
	this->Mail_DBE                              = 0;
	this->Registration_date_DBE                 = 0;
	this->First_name_DBE                        = 0;
	this->Last_name_DBE                         = 0;
	this->Year_of_birth_DBE                     = 0;
	this->Gender_of_person_DBE                  = 0;
	this->Place_of_birth_DBE                    = 0;
	this->Country_DBE                           = 0;
	this->City_DBE                              = 0;
	this->Address_registration_DBE              = 0;
	this->Place_of_resindece_DBE                = 0;
	this->Home_telephone_DBE                    = 0;
	this->Mobile_telephone_DBE                  = 0;

	this->Active_object                         = false;
	this->Active_object_columns_run             = false;
};

//------------------------------------------------------------------------------
void TSite::columns_run()
{
  this->columns->set_Grid(this->DB_grid_o);
  this->columns->clear_item();
  this->columns->new_col("ID", "ИД", 100);
  this->columns->new_col("Host", "Имя сайта", 250);
  this->columns->new_col("Login", "Логин", 200);
  this->columns->new_col("Password", "Пароль", 200);
  this->columns->new_col("Mail", "Электронная почта", 200);
  this->columns->new_col("Registration_date", "Дата регистрации", 150);

  this->columns->new_col("First_name", "Фамилия", 150);
  this->columns->new_col("Last_name", "Имя", 150);
  this->columns->new_col("Year_of_birth", "Место рождения", 150);
  this->columns->new_col("Gender_of_person", "Пол", 100);
  this->columns->new_col("Place_of_birth", "Год рождения", 150);
  this->columns->new_col("Country", "Страна", 150);
  this->columns->new_col("City", "Город", 150);
  this->columns->new_col("Address_registration", "Место прописки", 350);
  this->columns->new_col("Place_of_resindece", "Место жительство", 350);
  this->columns->new_col("Home_telephone", "№ Домашнего тел", 150);
  this->columns->new_col("Mobile_telephone", "№ Мобильного", 150);
  this->Active_object_columns_run      = true;
  this->Selected_field();
};

//                             PRIVATE SECTION
//*************************************************************************--//
//*************************************************************************--//
//*************************************************************************--//
void TSite::Selected_field()
{
	this->ID_DBE->DataField                     = "ID";
	this->Host_DBE->DataField                   = "Host";
	this->Login_DBE->DataField                  = "Login";
	this->Password_DBE->DataField               = "Password";
	this->Mail_DBE->DataField                   = "Mail";
	this->Registration_date_DBE->DataField      = "Registration_date";
	this->First_name_DBE->DataField             = "First_name";
	this->Last_name_DBE->DataField              = "Last_name";
	this->Year_of_birth_DBE->DataField          = "Year_of_birth";
	this->Gender_of_person_DBE->DataField       = "Gender_of_person";
	this->Place_of_birth_DBE->DataField         = "Place_of_birth";
	this->Country_DBE->DataField                = "Country";
	this->City_DBE->DataField                   = "City";
	this->Address_registration_DBE->DataField   = "Address_registration";
	this->Place_of_resindece_DBE->DataField     = "Place_of_resindece";
	this->Home_telephone_DBE->DataField         = "Home_telephone";
	this->Mobile_telephone_DBE->DataField       = "Mobile_telephone";
};

void new_position()
{

};

void old_position()
{

};
