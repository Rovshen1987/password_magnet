
#include "TGadjet.h"

TGadjet::TGadjet()
{
this->Registration_date = TDate();
};

TGadjet::~TGadjet()
{

};

//---------------------------SET section----------------------------------------
void TGadjet::set_Login(const AnsiString& Login)
{
  this->Login = Login;
};

//------------------------------------------------------------------------------
void TGadjet::set_Password(const AnsiString& Password)
{
  this->Password = Password;
};

//------------------------------------------------------------------------------
void TGadjet::set_Registration_date(const TDate& Registration_date)
{
   this->Registration_date = Registration_date;
};

//------------------GET section-------------------------------------------------
AnsiString TGadjet::get_Login()
{
  return this->Login;
};

//------------------------------------------------------------------------------
AnsiString TGadjet::get_Password()
{
  return this->Password;
};
