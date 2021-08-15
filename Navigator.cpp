#include "Navigator.h"

//-------------------Constructor-----------------------------------------------
 Navigator::Navigator()
 {
   this->Site_BOOL       = true;
   this->Mail_BOOL       = false;
   this->Mobile_BOOL     = false;
   this->ICloud_BOOL     = false;
   this->PlayMarket_BOOL = false;
   this->Computer_BOOL   = false;
   this->Paycard_BOOL    = false;
   this->Docfile_BOOL    = false;
 };

 //-------------------Destructor-----------------------------------------------
 Navigator::~Navigator()
 {

	 this->Site_NL        = 0;
	 this->Mail_NL        = 0;
	 this->Mobile_NL      = 0;
	 this->ICloud_NL      = 0;
	 this->PlayMarket_NL  = 0;
	 this->Computer_NL    = 0;
	 this->Paycard_NL     = 0;
	 this->Docfile_NL     = 0;

	 delete this->Site_NL;
	 delete this->Mail_NL;
	 delete this->Mobile_NL;
	 delete this->ICloud_NL;
	 delete this->PlayMarket_NL;
	 delete this->Computer_NL;
	 delete this->Paycard_NL;
	 delete this->Docfile_NL;

 };

 //---------------------------PUBLIC SECTION------------------------------------
 /////////////////////////////   SET    ////////////////////////////////////////
 void Navigator::set_Site_NL(TLabel* object)
 {
	this->Site_NL = object;
 };

  //-----------------------------------------------------------------------------
 void Navigator::set_Mail_NL(TLabel* object)
 {
	this->Mail_NL = object;
 };

 //-----------------------------------------------------------------------------
 void Navigator::set_Mobile_NL(TLabel* object)
 {
	this->Mobile_NL = object;
 };

 //-----------------------------------------------------------------------------
 void Navigator::set_ICloud_NL(TLabel* object)
 {
	this->ICloud_NL = object;
 };

 //-----------------------------------------------------------------------------
 void Navigator::set_PlayMarket_NL(TLabel* object)
 {
	this->PlayMarket_NL = object;
 };

 //-----------------------------------------------------------------------------
 void Navigator::set_Computer_NL(TLabel* object)
 {
	this->Computer_NL = object;
 };

 //-----------------------------------------------------------------------------
 void Navigator::set_Paycard_NL(TLabel* object)
 {
	this->Paycard_NL = object;
 };

  //-----------------------------------------------------------------------------
 void Navigator::set_Docfile_NL(TLabel* object)
 {
	this->Docfile_NL = object;
 };

 //-----------------------------------------------------------------------------

 void Navigator::object_click(const AnsiString& name_object)
 {
   this->ged_id_object_inside(this->ged_id_object(name_object));
 };

 //-----------------------------------------------------------------------------
 /////////////////////////////   GET    ////////////////////////////////////////
 bool Navigator::get_Site_BOOL()
 {
	return this->Site_BOOL;
 };

  //-----------------------------------------------------------------------------
 bool Navigator::get_Mail_BOOL()
 {
	 return this->Mail_BOOL;
 };

 //-----------------------------------------------------------------------------
 bool Navigator::get_Mobile_BOOL()
 {
	 return this->Mobile_BOOL;
 };

 //-----------------------------------------------------------------------------
 bool Navigator::get_ICloud_BOOL()
 {
	 return this->ICloud_BOOL;
 };

 //-----------------------------------------------------------------------------
 bool Navigator::get_PlayMarket_BOOL()
 {
	 return this->PlayMarket_BOOL;
 };

 //-----------------------------------------------------------------------------
 bool Navigator::get_Computer_BOOL()
 {
	 return this->Computer_BOOL;
 };

 //-----------------------------------------------------------------------------
 bool Navigator::get_Paycard_BOOL()
 {
	 return this->Paycard_BOOL;
 };

  //-----------------------------------------------------------------------------
 bool Navigator::get_Docfile_BOOL()
 {
	 return this->Docfile_BOOL;
 };

//------------------------------------------------------------------------------
//---------------------------PRIVATE SECTION------------------------------------

 int  Navigator::ged_id_object(const AnsiString& name_object)noexcept
 {
   int result = 0;

   result++; //1
   if (name_object == "Site_NL")
   {
	return result;
   };

   result++; //2
   if (name_object == "Mail_NL")
   {
	return result;
   };

   result++; //3
   if (name_object == "Mobile_NL")
   {
	return result;
   };

   result++; //4
   if (name_object == "ICloud_NL")
   {
	return result;
   };

   result++; //5
   if (name_object == "PlayMarket_NL")
   {
	return result;
   };

   result++; //6
   if (name_object == "Computer_NL")
   {
	return result;
   };

   result++; //7
   if (name_object == "Paycard_NL")
   {
	return result;
   };

   result++; //8
   if (name_object == "Docfile_NL")
   {
	return result;
   };

   return result;
 };

 //------------------------------------------------------------------------------
 void Navigator::ged_id_object_inside(const int& set)
 {
   switch(set)
 {
  case 1: {
		   this->Site_BUTTON();
		   break;
		  };

 case 2:  {
		   this->Mail_BUTTON();
		   break;
		  };

  case 3: {
		   this->Mobile_BUTTON();
		   break;
		  };

  case 4: {
		   this->ICloud_BUTTON();
		   break;
		  };

  case 5: {
		   this->PlayMarket_BUTTON();
		   break;
		  };

  case 6: {
		   this->Computer_BUTTON();
		   break;
		  };

  case 7: {
		   this->Paycard_BUTTON();
		   break;
		  };

  case 8: {
		   this->Docfile_BUTTON();
		   break;
		  };

  default: {
		   ShowMessage("ERROR Navigator.cpp 223");
		   }
 }

 };

//------------------------------------------------------------------------------
 void Navigator::Site_BUTTON()
 {
  this->All_varrible_false();
  this->Site_BOOL = true;
  this->set_style_ALL();
 };

 //------------------------------------------------------------------------------
 void Navigator::Mail_BUTTON()
 {
  this->All_varrible_false();
  this->Mail_BOOL = true;
  this->set_style_ALL();
 };

//------------------------------------------------------------------------------
 void Navigator::Mobile_BUTTON()
 {
  this->All_varrible_false();
  this->Mobile_BOOL = true;
  this->set_style_ALL();
 };

//------------------------------------------------------------------------------
 void Navigator::ICloud_BUTTON()
 {
  this->All_varrible_false();
  this->ICloud_BOOL = true;
  this->set_style_ALL();
 };

//------------------------------------------------------------------------------
 void Navigator::PlayMarket_BUTTON()
 {
  this->All_varrible_false();
  this->PlayMarket_BOOL = true;
  this->set_style_ALL();
 };

//------------------------------------------------------------------------------
 void Navigator::Computer_BUTTON()
 {
  this->All_varrible_false();
  this->Computer_BOOL = true;
  this->set_style_ALL();
 };

//------------------------------------------------------------------------------
 void Navigator::Paycard_BUTTON()
 {
  this->All_varrible_false();
  this->Paycard_BOOL = true;
  this->set_style_ALL();
 };

 //------------------------------------------------------------------------------
 void Navigator::Docfile_BUTTON()
 {
  this->All_varrible_false();
  this->Docfile_BOOL = true;
  this->set_style_ALL();
 };

//------------------------------------------------------------------------------
void Navigator::All_varrible_false()
 {
	 this->Site_BOOL        = false;
	 this->Mail_BOOL        = false;
	 this->Mobile_BOOL      = false;
	 this->ICloud_BOOL      = false;
	 this->PlayMarket_BOOL  = false;
	 this->Computer_BOOL    = false;
	 this->Paycard_BOOL     = false;
	 this->Docfile_BOOL     = false;
 };


//------------------------------------------------------------------------------
void Navigator::set_style_ALL()
{
  if (this->Site_BOOL == true)
  {
   this->Site_NL->Font->Size  = this->true_varrible_int;
   this->Site_NL->Font->Style = this->Site_NL->Font->Style<<fsUnderline;
  }
  else
  {
   this->Site_NL->Font->Size  = this->false_varrible_int;
   this->Site_NL->Font->Style = this->Site_NL->Font->Style>>fsUnderline;
  };

  if (this->Mail_BOOL == true)
  {
   this->Mail_NL->Font->Size  = this->true_varrible_int;
   this->Mail_NL->Font->Style = this->Mail_NL->Font->Style<<fsUnderline;
  }
  else
  {
   this->Mail_NL->Font->Size  = this->false_varrible_int;
   this->Mail_NL->Font->Style = this->Mail_NL->Font->Style>>fsUnderline;
  };

  if (this->Mobile_BOOL == true)
  {
   this->Mobile_NL->Font->Size  = this->true_varrible_int;
   this->Mobile_NL->Font->Style = this->Mobile_NL->Font->Style<<fsUnderline;
  }
  else
  {
   this->Mobile_NL->Font->Size  = this->false_varrible_int;
   this->Mobile_NL->Font->Style = this->Mobile_NL->Font->Style>>fsUnderline;
  };

  if (this->ICloud_BOOL == true)
  {
   this->ICloud_NL->Font->Size  = this->true_varrible_int;
   this->ICloud_NL->Font->Style = this->ICloud_NL->Font->Style<<fsUnderline;
  }
  else
  {
   this->ICloud_NL->Font->Size  = this->false_varrible_int;
   this->ICloud_NL->Font->Style = this->ICloud_NL->Font->Style>>fsUnderline;
  };

  if (this->PlayMarket_BOOL == true)
  {
   this->PlayMarket_NL->Font->Size  = this->true_varrible_int;
   this->PlayMarket_NL->Font->Style = this->PlayMarket_NL->Font->Style<<fsUnderline;
  }
  else
  {
   this->PlayMarket_NL->Font->Size  = this->false_varrible_int;
   this->PlayMarket_NL->Font->Style = this->PlayMarket_NL->Font->Style>>fsUnderline;
  };


  if (this->Computer_BOOL == true)
  {
   this->Computer_NL->Font->Size  = this->true_varrible_int;
   this->Computer_NL->Font->Style = this->Computer_NL->Font->Style<<fsUnderline;
  }
  else
  {
   this->Computer_NL->Font->Size  = this->false_varrible_int;
   this->Computer_NL->Font->Style = this->Computer_NL->Font->Style>>fsUnderline;
  };

  if (Paycard_BOOL == true)
  {
   this->Paycard_NL->Font->Size  = this->true_varrible_int;
   this->Paycard_NL->Font->Style = this->Paycard_NL->Font->Style<<fsUnderline;
  }
  else
  {
   this->Paycard_NL->Font->Size  = this->false_varrible_int;
   this->Paycard_NL->Font->Style = this->Paycard_NL->Font->Style>>fsUnderline;
  };

  if (Docfile_BOOL == true)
  {
   this->Docfile_NL->Font->Size  = this->true_varrible_int;
   this->Docfile_NL->Font->Style = this->Docfile_NL->Font->Style<<fsUnderline;
  }
  else
  {
   this->Docfile_NL->Font->Size  = this->false_varrible_int;
   this->Docfile_NL->Font->Style = this->Docfile_NL->Font->Style>>fsUnderline;
  };

};

//------------------------------------------------------------------------------
