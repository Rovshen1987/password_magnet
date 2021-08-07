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

 int  Navigator::ged_id_object(const AnsiString& name_object)
 {
   int result = 0;

   result++; //1
   if (name_object == "Sait_L")
   {
	return result;
   };

   result++; //1
   if (name_object == "Mobile_L")
   {
	return result;
   };

   result++; //1
   if (name_object == "ICloud_L")
   {
	return result;
   };

   result++; //1
   if (name_object == "PlayMarker_L")
   {
	return result;
   };

   result++; //1
   if (name_object == "Computer_L")
   {
	return result;
   };

   result++; //1
   if (name_object == "Pay_card_L")
   {
	return result;
   };
   return result;
 };

 //------------------------------------------------------------------------------
 void Navigator::ged_id_object_inside()
 {

 };

//------------------------------------------------------------------------------
 void Navigator::Sait_BUTTON()
 {

 };

//------------------------------------------------------------------------------
 void Navigator::Mobile_BUTTON()
 {

 };

//------------------------------------------------------------------------------
 void Navigator::ICloud_BUTTON()
 {

 };

//------------------------------------------------------------------------------
 void Navigator::PlayMarker_BUTTON()
 {

 };

//------------------------------------------------------------------------------
 void Navigator::Computer_BUTTON()
 {

 };

//------------------------------------------------------------------------------
 void Navigator::Pay_card_BUTTON()
 {

 };

//------------------------------------------------------------------------------
