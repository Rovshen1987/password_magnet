#include "TPerson.h"

TPerson::TPerson()
{

};

TPerson::~TPerson()
{

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

//------------------------------------------------------------------------------
void TPerson::set_Mail(const AnsiString& set)
{
	*this->Mail = set;
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

//------------------------------------------------------------------------------
AnsiString TPerson::get_Mail()
{
   return *this->Mail;
};

//************************GET END Section***************************************


AnsiString TPerson::GetPathName()
{
	return this->PathName;
}


//************************PRIVATE Section***************************************};
