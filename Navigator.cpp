#include "Navigator.h"

//-------------------Constructor-----------------------------------------------
 Navigator::Navigator()
 {
   this->Sait_BOOL       = true;
   this->Mobile_BOOL     = false;
   this->ICloud_BOOL     = false;
   this->PlayMarker_BOOL = false;
   this->Computer_BOOL   = false;
   this->Pay_card_BOOL   = false;
 };

 //-------------------Destructor-----------------------------------------------
 Navigator::~Navigator()
 {

	 this->Sait_L       = 0;
	 this->Mobile_L     = 0;
	 this->ICloud_L     = 0;
	 this->PlayMarker_L = 0;
	 this->Computer_L   = 0;
	 this->Pay_card_L     = 0;

	 delete this->Sait_L;
	 delete this->Mobile_L;
	 delete this->ICloud_L;
	 delete this->PlayMarker_L;
	 delete this->Computer_L;
	 delete this->Pay_card_L;

 };

 //---------------------------PUBLIC SECTION------------------------------------
 /////////////////////////////   SET    ////////////////////////////////////////
 void Navigator::set_Sait_L(TLabel* object)
 {
	this->Sait_L = object;
 };

 //-----------------------------------------------------------------------------
 void Navigator::set_Mobile_L(TLabel* object)
 {
	this->Mobile_L = object;
 };

 //-----------------------------------------------------------------------------
 void Navigator::set_ICloud_L(TLabel* object)
 {
	this->ICloud_L = object;
 };

 //-----------------------------------------------------------------------------
 void Navigator::set_PlayMarker_L(TLabel* object)
 {
	this->PlayMarker_L = object;
 };

 //-----------------------------------------------------------------------------
 void Navigator::set_Computer_L(TLabel* object)
 {
	this->Computer_L = object;
 };

 //-----------------------------------------------------------------------------
 void Navigator::set_Pay_card_L(TLabel* object)
 {
	this->Pay_card_L = object;
 };

 //-----------------------------------------------------------------------------

 void Navigator::object_click(const AnsiString& name_object)
 {
   this->ged_id_object_inside(this->ged_id_object(name_object));
 };

 //-----------------------------------------------------------------------------
 /////////////////////////////   GET    ////////////////////////////////////////
 bool Navigator::get_Sait_BOOL()
 {
	return this->Sait_BOOL;
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
 bool Navigator::get_PlayMarker_BOOL()
 {
	 return this->PlayMarker_BOOL;
 };

 //-----------------------------------------------------------------------------
 bool Navigator::get_Computer_BOOL()
 {
	 return this->Computer_BOOL;
 };

 //-----------------------------------------------------------------------------
 bool Navigator::get_Pay_card_BOOL()
 {
	 return this->Pay_card_BOOL;
 };

//------------------------------------------------------------------------------
//---------------------------PRIVATE SECTION------------------------------------

 int  Navigator::ged_id_object(const AnsiString& name_object)noexcept
 {
   int result = 0;

   result++; //1
   if (name_object == "Sait_L")
   {
	return result;
   };

   result++; //2
   if (name_object == "Mobile_L")
   {
	return result;
   };

   result++; //3
   if (name_object == "ICloud_L")
   {
	return result;
   };

   result++; //4
   if (name_object == "PlayMarker_L")
   {
	return result;
   };

   result++; //5
   if (name_object == "Computer_L")
   {
	return result;
   };

   result++; //6
   if (name_object == "Pay_card_L")
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
		   this->Sait_BUTTON();
		   break;
		  };

  case 2: {
		   this->Mobile_BUTTON();
		   break;
		  };

  case 3: {
		   this->ICloud_BUTTON();
		   break;
		  };

  case 4: {
		   this->PlayMarker_BUTTON();
		   break;
		  };

  case 5: {
		   this->Computer_BUTTON();
		   break;
		  };

  case 6: {
		   this->Pay_card_BUTTON();
		   break;
		  };

  default: {
           ShowMessage("ERROR Navigator.cpp 197");
		   }
 }

 };

//------------------------------------------------------------------------------
 void Navigator::Sait_BUTTON()
 {
  this->All_varrible_false();
  this->Sait_BOOL = true;
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
 void Navigator::PlayMarker_BUTTON()
 {
  this->All_varrible_false();
  this->PlayMarker_BOOL = true;
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
 void Navigator::Pay_card_BUTTON()
 {
  this->All_varrible_false();
  this->Pay_card_BOOL = true;
  this->set_style_ALL();
 };

//------------------------------------------------------------------------------
void Navigator::All_varrible_false()
 {
	 this->Sait_BOOL        = false;
	 this->Mobile_BOOL      = false;
	 this->ICloud_BOOL      = false;
	 this->PlayMarker_BOOL  = false;
	 this->Computer_BOOL    = false;
	 this->Pay_card_BOOL    = false;
 };


//------------------------------------------------------------------------------
void Navigator::set_style_ALL()
{
  if (this->Sait_BOOL == true)
  {
   this->Sait_L->Font->Size  = this->true_varrible_int;
   this->Sait_L->Font->Style = this->Sait_L->Font->Style<<fsUnderline;
  }
  else
  {
   this->Sait_L->Font->Size = this->false_varrible_int;
   this->Sait_L->Font->Style = this->Sait_L->Font->Style>>fsUnderline;
  };

  if (this->Mobile_BOOL == true)
  {
   this->Mobile_L->Font->Size  = this->true_varrible_int;
   this->Mobile_L->Font->Style = this->Mobile_L->Font->Style<<fsUnderline;
  }
  else
  {
   this->Mobile_L->Font->Size = this->false_varrible_int;
   this->Mobile_L->Font->Style = this->Mobile_L->Font->Style>>fsUnderline;
  };

  if (this->ICloud_BOOL == true)
  {
   this->ICloud_L->Font->Size  = this->true_varrible_int;
   this->ICloud_L->Font->Style = this->ICloud_L->Font->Style<<fsUnderline;
  }
  else
  {
   this->ICloud_L->Font->Size = this->false_varrible_int;
   this->ICloud_L->Font->Style = this->ICloud_L->Font->Style>>fsUnderline;
  };

  if (this->PlayMarker_BOOL == true)
  {
   this->PlayMarker_L->Font->Size  = this->true_varrible_int;
   this->PlayMarker_L->Font->Style = this->PlayMarker_L->Font->Style<<fsUnderline;
  }
  else
  {
   this->PlayMarker_L->Font->Size = this->false_varrible_int;
   this->PlayMarker_L->Font->Style = this->PlayMarker_L->Font->Style>>fsUnderline;
  };


  if (this->Computer_BOOL == true)
  {
   this->Computer_L->Font->Size  = this->true_varrible_int;
   this->Computer_L->Font->Style = this->Computer_L->Font->Style<<fsUnderline;
  }
  else
  {
   this->Computer_L->Font->Size = this->false_varrible_int;
   this->Computer_L->Font->Style = this->Computer_L->Font->Style>>fsUnderline;
  };

  if (Pay_card_BOOL == true)
  {
   this->Pay_card_L->Font->Size  = this->true_varrible_int;
   this->Pay_card_L->Font->Style = this->Pay_card_L->Font->Style<<fsUnderline;
  }
  else
  {
   this->Pay_card_L->Font->Size = this->false_varrible_int;
   this->Pay_card_L->Font->Style = this->Pay_card_L->Font->Style>>fsUnderline;
  };

};

//------------------------------------------------------------------------------
