
#include "TGadjet.h"

TGadjet::TGadjet(const AnsiString& Login, const AnsiString& Password, const AnsiString mail, const TDate Registration_date)
{
this->Login             = std::make_unique<AnsiString>(Login);
this->Password          = std::make_unique<AnsiString>(Password);
this->Mail              = std::make_unique<AnsiString>(mail);
this->Registration_date = std::make_unique<TDate>(Registration_date);
};

//TGadjet::TGadjet(const TGadjet& object)
//{
// this->Login = std::move(object.Login);
//};

TGadjet::TGadjet()
{

};

TGadjet& TGadjet::operator=(TGadjet& object)
{
  if (*this == object)
  {
   return *this;
  }

  this->Login             = std::move(object.Login);
  this->Password          = std::move(object.Password);
  this->Registration_date = std::move(object.Registration_date);

  return *this;
};

TGadjet::~TGadjet()
{

};

bool TGadjet::operator==(const TGadjet& object)
{
   if ((this->Login == object.Login))
   {
	return false;
   };

   if (!(this->Password == object.Password))
   {
	return false;
   };

   if (!(this->Registration_date == object.Registration_date))
   {
	return false;
   }

   return true;
};

//---------------------------SET section----------------------------------------
void TGadjet::set_Login(const AnsiString& Login)
{
  *this->Login = Login;
};

//------------------------------------------------------------------------------
void TGadjet::set_Password(const AnsiString& Password)
{
  *this->Password = Password;
};

//------------------------------------------------------------------------------
void TGadjet::set_Registration_date(const TDate& Registration_date)
{
   *this->Registration_date = Registration_date;
};

//------------------------------------------------------------------------------
void TGadjet::set_Mail(const AnsiString& set)
{
	*this->Mail = set;
};

//------------------GET section-------------------------------------------------
AnsiString TGadjet::get_Login()
{
  return *this->Login;
};

//------------------------------------------------------------------------------
AnsiString TGadjet::get_Password()
{
  return *this->Password;
};

//------------------------------------------------------------------------------
AnsiString TGadjet::get_Mail()
{
   return *this->Mail;
};

