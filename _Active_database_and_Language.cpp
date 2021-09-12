#include "_Active_database_and_Language.h"

//--------------------------------CONSTRUCTOR-----------------------------------
_Active_database_and_Language::_Active_database_and_Language()
{
  this->Language = AnsiString("RUS");
};

//------------------------------------------------------------------------------
_Active_database_and_Language::_Active_database_and_Language(const AnsiString& Language)
{
   this->Language = Language;
   this->Site     = false;
};

//--------------------------------DESTRUCTOR------------------------------------
_Active_database_and_Language::~_Active_database_and_Language(){};

//--------------------------------PUBLIC SECTION--------------------------------
void _Active_database_and_Language::set_Site(const bool& value)
{
   this->_false_all();
   this->Site = value;
};

//------------------------------------------------------------------------------
void _Active_database_and_Language::set_Mail(const bool& value)
{
   this->_false_all();
   this->Mail = value;
};

//------------------------------------------------------------------------------
void _Active_database_and_Language::set_Mobile(const bool& value)
{
   this->_false_all();
   this->Mobile = value;
};

//------------------------------------------------------------------------------
void _Active_database_and_Language::set_ICloud(const bool& value)
{
   this->_false_all();
   this->ICloud = value;
};

//------------------------------------------------------------------------------
void _Active_database_and_Language::set_PlayMarket(const bool& value)
{
   this->_false_all();
   this->PlayMarket = value;
};

//------------------------------------------------------------------------------
void _Active_database_and_Language::set_Computer(const bool& value)
{
   this->_false_all();
   this->Computer = value;
};

//------------------------------------------------------------------------------
void _Active_database_and_Language::set_Paycard(const bool& value)
{
   this->_false_all();
   this->Paycard = value;
};

//------------------------------------------------------------------------------
void _Active_database_and_Language::set_Docfile(const bool& value)
{
   this->_false_all();
   this->Docfile = value;
};

//------------------------------------------------------------------------------
void _Active_database_and_Language::set_Language(const AnsiString& Language)
{
   this->Language = Language;
};

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
bool _Active_database_and_Language::get_Site()
{
   return this->Site;
};

//------------------------------------------------------------------------------
bool _Active_database_and_Language::get_Mail()
{
   return this->Mail;
};

//------------------------------------------------------------------------------
bool _Active_database_and_Language::get_Mobile()
{
   return this->Mobile;
};

//------------------------------------------------------------------------------
bool _Active_database_and_Language::get_ICloud()
{
   return this->ICloud;
};

//------------------------------------------------------------------------------
bool _Active_database_and_Language::get_PlayMarket()
{
   return this->PlayMarket;
};

//------------------------------------------------------------------------------
bool _Active_database_and_Language::get_Computer()
{
   return this->Computer;
};

//------------------------------------------------------------------------------
bool _Active_database_and_Language::get_Paycard()
{
   return this->Paycard;
};

//------------------------------------------------------------------------------
bool _Active_database_and_Language::get_Docfile()
{
   return this->Docfile;
};

//------------------------------------------------------------------------------
AnsiString _Active_database_and_Language::get_Language()
{
   return this->Language;
};

//------------------------------------------------------------------------------

int _Active_database_and_Language::get_active_index()
{
 int result = 0;

{
 std::vector<bool> test;
 test.push_back(this->Site);
 test.push_back(this->Mail);
 test.push_back(this->Mobile);
 test.push_back(this->ICloud);
 test.push_back(this->PlayMarket);
 test.push_back(this->Computer);
 test.push_back(this->Paycard);
 test.push_back(this->Docfile);

 for (auto i : test)
 {
  result++;
  if (i == true)
  {
   return result;
  }
 }
}

 return result;

};

//------------------------------------------------------------------------------
void _Active_database_and_Language::_false_all()
{
this->Site        = false;
this->Mail        = false;
this->Mobile      = false;
this->ICloud      = false;
this->PlayMarket  = false;
this->Computer    = false;
this->Paycard     = false;
this->Docfile     = false;
};

//------------------------------------------------------------------------------
//--------------------------------PRIVATE SECTION-------------------------------
