#include "TPerson.h"

TPerson::TPerson()
{
		 this->First_name             = std::make_unique<AnsiString>();
		 this->Last_name              = std::make_unique<AnsiString>();;
		 this->Year_of_birth          = std::make_unique<TDate>();
		 this->Gender_of_person       = std::make_unique<gender>();
		 this->Place_of_birth         = std::make_unique<AnsiString>();
		 this->Country                = std::make_unique<AnsiString>();
		 this->City                   = std::make_unique<AnsiString>();
		 this->Andress_registration   = std::make_unique<AnsiString>();
		 this->Place_of_resindece     = std::make_unique<AnsiString>();
		 this->Home_telephone         = std::make_unique<AnsiString>();
		 this->Mobile_telephone       = std::make_unique<AnsiString>();
//
};

TPerson& TPerson::operator=(const TPerson& object)
{
	if (*this == object)
	{
	  return *this;
	}
};

TPerson::~TPerson()
{

};

bool TPerson::operator==(const TPerson& object)
{
   if (!(this->First_name == object.First_name))
   {
	 return false;
   };

   if (!(this->Last_name == object.Last_name))
   {
	return false;
   };

   if (!(this->Year_of_birth == object.Year_of_birth))
   {
	return false;
   };

   if (!(this->Gender_of_person == object.Gender_of_person))
   {
	return false;
   };

   if (!(this->Place_of_birth == object.Place_of_birth))
   {
	return false;
   };

   if (!(this->Country == object.Country))
   {
	return false;
   };

   if (!(this->City == object.City))
   {
	return false;
   };

   if (!(this->Andress_registration == object.Andress_registration))
   {
	return false;
   };

   if (!(this->Place_of_resindece == object.Place_of_resindece))
   {
	return false;
   }

   if (!(this->Home_telephone == object.Home_telephone))
   {
	return false;
   }

   if (!(this->Mobile_telephone == object.Mobile_telephone))
   {
	return false;
   }

   if (!(this->Mobile_telephone == object.Mobile_telephone))
   {
	return false;
   }

   return true;
};


//************************SET Section*******************************************
//------------------------------------------------------------------------------
void TPerson::set_First_name(const AnsiString& set)
{
   *this->First_name = set;
};

//------------------------------------------------------------------------------
void TPerson::set_Last_name(const AnsiString& set)
{
	*this->Last_name = set;
};

//------------------------------------------------------------------------------
void TPerson::set_Year_of_birth(TDate set)
{
	*this->Year_of_birth = set;
};

//------------------------------------------------------------------------------
void TPerson::set_Gender_of_person(gender& set)
{
	*this->Gender_of_person = set;
};

//------------------------------------------------------------------------------
void TPerson::set_Place_of_birth(const AnsiString& set)
{
	 *this->Place_of_birth = set;
};

//------------------------------------------------------------------------------
void TPerson::set_Country(const AnsiString& set)
{
	*this->Country = set;
};

//------------------------------------------------------------------------------
void TPerson::set_City(const AnsiString& set)
{
	*this->City = set;
};

//------------------------------------------------------------------------------
void TPerson::set_Andress_registration(const AnsiString& set)
{
	*this->Andress_registration = set;
};

//------------------------------------------------------------------------------
void TPerson::set_Place_of_resindece(const AnsiString& set)
{
	*this->Place_of_resindece = set;
};

//------------------------------------------------------------------------------
void TPerson::set_Home_telephone(const AnsiString& set)
{
	*this->Home_telephone = set;
};

//------------------------------------------------------------------------------
void TPerson::set_Mobile_telephone(const AnsiString& set)
{
	*this->Mobile_telephone = set;
};


//************************SET END Section***************************************


//************************GET Section*******************************************

AnsiString TPerson::get_First_name()
{
  return  *this->First_name;
};

//------------------------------------------------------------------------------
AnsiString TPerson::get_Last_name()
{
  return *this->Last_name;
};

//------------------------------------------------------------------------------
TDate      TPerson::get_Year_of_birth()
{
  return *this->Year_of_birth;
};

//------------------------------------------------------------------------------
gender     TPerson::get_Gender_of_person()
{
  return *this->Gender_of_person;
};

//------------------------------------------------------------------------------
AnsiString TPerson::get_Place_of_birth()
{
   return *this->Place_of_birth;
};

//------------------------------------------------------------------------------
AnsiString TPerson::get_Country()
{
   return *this->Country;
};

//------------------------------------------------------------------------------
AnsiString TPerson::get_City()
{
   return *this->City;
};

//------------------------------------------------------------------------------
AnsiString TPerson::get_Andress_registration()
{
   return *this->Andress_registration;
};

//------------------------------------------------------------------------------
AnsiString TPerson::get_Place_of_resindece()
{
   return *this->Place_of_resindece;
};

//------------------------------------------------------------------------------
AnsiString TPerson::get_Home_telephone()
{
   return *this->Home_telephone;
};

//------------------------------------------------------------------------------
AnsiString TPerson::get_Mobile_telephone()
{
   return *this->Mobile_telephone;
};


//************************GET END Section***************************************


AnsiString TPerson::GetPathName()
{
	return this->PathName;
}


//************************PRIVATE Section***************************************};
