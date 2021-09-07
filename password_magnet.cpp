//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "password_magnet.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPassword_magnet_F *Password_magnet_F;
//---------------------------------------------------------------------------
__fastcall TPassword_magnet_F::TPassword_magnet_F(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::EditCopy1Execute(TObject *Sender)
{
ShowMessage("Close Windows");
}
//---------------------------------------------------------------------------



void __fastcall TPassword_magnet_F::Button1Click(TObject *Sender)
{

//Password_magnet_F->Caption = DBGrid1->Columns->Count;

//this->PlayMarker_NL->Font->Style = this->PlayMarker_NL->Font->Style>>fsUnderline;
}
//---------------------------------------------------------------------------


 void TPassword_magnet_F::initilisation()
 {
//   {
//   ADOQuery->SQL->Clear();
////   TDate date{"01-01-2021"};
//   AnsiString  s = "SELECT * FROM TSite WHERE Registration_date BETWEEN #01/01/2017# AND #01/01/2022#";
////   AnsiString  s = "SELECT * FROM TSite WHERE Registration_date BETWEEN \'"+DateToStr(date)+("\' AND \'")+ DateToStr(date)+"\'";
//   ADOQuery->SQL->Add(s);
//   ADOQuery->Active = true;
//
//   }


   this->password_magnet_navigator   = std::make_unique<Navigator>();
   this->password_magnet_site        = std::make_unique<TSite>();
   this->password_SQL_site           = std::make_unique<_SQL>(ADOQuery_site, "TSite", true);
   this->password_Resize_site        = std::make_unique<_Resize>(220,440,908, this->Gadjet_P);



   this->Site_TSh->TabVisible  = false;
   this->visible_TSh(this->Site_TSh);


   //----------------------------------------Navigator--------------------------
   this->password_magnet_navigator->set_Site_NL(this->Site_NL);
   this->password_magnet_navigator->set_Mail_NL(this->Mail_NL);
   this->password_magnet_navigator->set_Mobile_NL(this->Mobile_NL);
   this->password_magnet_navigator->set_ICloud_NL(this->ICloud_NL);
   this->password_magnet_navigator->set_PlayMarket_NL(this->PlayMarket_NL);
   this->password_magnet_navigator->set_Computer_NL(this->Computer_NL);
   this->password_magnet_navigator->set_Paycard_NL(this->Paycard_NL);
   this->password_magnet_navigator->set_Docfile_NL(this->Docfile_NL);

   this->password_magnet_navigator->object_click(this->Site_NL->GetNamePath());
   this->Site_NL_initilisation();

   Password_magnet_F->Height = Password_magnet_F->Constraints->MinHeight;
   Password_magnet_F->Width = Password_magnet_F->Constraints->MinWidth;
 };


void __fastcall TPassword_magnet_F::FormCreate(TObject *Sender)
{
this->initilisation();
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::Site_NLClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->Site_NL->GetNamePath());
this->Site_NL_initilisation();
this->visible_TSh(this->Site_TSh);
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::Mobile_NLClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->Mobile_NL->GetNamePath());
this->visible_TSh(this->Mobile_TSh);
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::ICloud_NLClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->ICloud_NL->GetNamePath());
this->visible_TSh(this->ICloud_TSh);
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::PlayMarket_NLClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->PlayMarket_NL->GetNamePath());
this->visible_TSh(this->PlayMarket_TSh);
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::Computer_NLClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->Computer_NL->GetNamePath());
this->visible_TSh(this->Computer_TSh);
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::Paycard_NLClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->Paycard_NL->GetNamePath());
this->visible_TSh(this->Paycard_TSh);
}
//---------------------------------------------------------------------------

void TPassword_magnet_F::Password_magnet_F_RESIZE()
{
  const int diffences = 35;

  int Form_width      = Password_magnet_F->Width;
  int Navigator_width = this->Navigator_P->Width;
  int result          = 0;

  result = Form_width - Navigator_width;
  this->Date_navigator_P->Width = result;


  result = result / 2;
  this->Gadjet_P->Width = result-diffences;
  this->Person_P->Width = result+(diffences-25);

  int Form_height = (Password_magnet_F->Height - (this->ToolBar->Height + this->DBGrid_P->Height
					 + this->DBNavigator->Width + this->StatusBar->Height));

 // this->Date_navigator_P->Height = Form_height;
  this->Gadjet_P->Height         = Form_height;
  this->Person_P->Height         = Form_height;
};


void __fastcall TPassword_magnet_F::FormResize(TObject *Sender)
{
  int fwidth = Password_magnet_F->Width;

  if (Control_TSh->ActivePage == Site_TSh)
  {
  int pwidth = 0;
  pwidth = (fwidth-153)/2;
  Gadjet_P->Width = pwidth;
  password_Resize_site->Automatic(pwidth);
  };

  Password_magnet_F->Caption = ID_DBE->Width;

}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::Exit1Click(TObject *Sender)
{
Password_magnet_F->Close();
}

//---------------------------------------------------------------------------
void TPassword_magnet_F::Site_NL_initilisation()
{


if ((this->password_magnet_site->get_Active_object() == true) and
   (this->password_magnet_site->get_selected_all_object() == false))
  {
   this->password_magnet_site->set_ADO_query_o(this->ADOQuery_site);
   this->password_magnet_site->set_DB_grid_o(this->DBGrid);
   this->password_magnet_site->set_ID_DBE(this->ID_DBE);
   this->password_magnet_site->set_Host_DBE(this->Host_DBE);
   this->password_magnet_site->set_Login_DBE(this->Login_DBE);
   this->password_magnet_site->set_Password_DBE(this->Password_DBE);
   this->password_magnet_site->set_Mail_DBE(this->Mail_DBE);
   this->password_magnet_site->set_Registration_date_DBE(this->Registration_date_DBE);
   this->password_magnet_site->set_First_name_DBE(this->First_name_DBE);
   this->password_magnet_site->set_Last_name_DBE(this->Last_name_DBE);
   this->password_magnet_site->set_Year_of_birth_DBE(this->Year_of_birth_DBE);
   this->password_magnet_site->set_Gender_of_person_DBE(this->Gender_of_person_DBE);
   this->password_magnet_site->set_Place_of_birth_DBE(this->Place_of_birth_DBE);
   this->password_magnet_site->set_Country_DBE(this->Country_DBE);
   this->password_magnet_site->set_City_DBE(this->City_DBE);
   this->password_magnet_site->set_Address_registration_DBE(this->Address_registration_DBE);
   this->password_magnet_site->set_Place_of_resindece_DBE(this->Place_of_resindece_DBE);
   this->password_magnet_site->set_Home_telephone_DBE(this->Home_telephone_DBE);
   this->password_magnet_site->set_Mobile_telephone_DBE(this->Mobile_telephone_DBE);
   this->Site_SQL_initilisation();
   this->Site_Resize_initilisation();
   this->password_Resize_site->Connect();
  };

  if (this->password_magnet_site->get_Active_object_columns_run() == false)
  {
   this->password_magnet_site->columns_run();
  };

}

//---------------------------------------------------------------------------
void TPassword_magnet_F::Mail_NL_initilisation()
{

};

//---------------------------------------------------------------------------
void TPassword_magnet_F::Mobile_NL_initilisation()
{

};

//---------------------------------------------------------------------------
void TPassword_magnet_F::ICloud_NL_initilisation()
{

};

//---------------------------------------------------------------------------
void TPassword_magnet_F::PlyMarker_NL_initilisation()
{

};

//---------------------------------------------------------------------------
void TPassword_magnet_F::Computer_NL_initilisation()
{

};

//---------------------------------------------------------------------------
void TPassword_magnet_F::Paycard_NL_initilisation()
{

};

//---------------------------------------------------------------------------
void TPassword_magnet_F::Docfile_NL_initilisation()
{

};


void __fastcall TPassword_magnet_F::Mail_NLClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->Mail_NL->GetNamePath());
this->visible_TSh(this->Mail_TSh);
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::Docfile_NLClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->Docfile_NL->GetNamePath());
this->visible_TSh(this->Docfile_TSh);
}


//---------------------------------------------------------------------------
void TPassword_magnet_F::visible_TSh(TTabSheet* object)
{

  if (object->TabVisible == false)
  {
   this->Site_TSh->TabVisible       = false;
   this->Mail_TSh->TabVisible       = false;
   this->Mobile_TSh->TabVisible     = false;
   this->ICloud_TSh->TabVisible     = false;
   this->PlayMarket_TSh->TabVisible = false;
   this->Computer_TSh->TabVisible   = false;
   this->Paycard_TSh->TabVisible    = false;
   this->Docfile_TSh->TabVisible    = false;

   object->TabVisible               = true;
  }

};

void __fastcall TPassword_magnet_F::DBGridColEnter(TObject *Sender)
{

Password_magnet_F->Caption = "Delta";
}
//---------------------------------------------------------------------------


void __fastcall TPassword_magnet_F::DBGridTitleClick(TColumn *Column)
{
Password_magnet_F->password_SQL_site->Sort_field_run(Column->FieldName);
}
//---------------------------------------------------------------------------
 void TPassword_magnet_F::Site_SQL_initilisation()
 {
   this->password_SQL_site->Add("ID");
   this->password_SQL_site->Add("Host");
   this->password_SQL_site->Add("Login");
   this->password_SQL_site->Add("Password");
   this->password_SQL_site->Add("Mail");
   this->password_SQL_site->Add("Registration_date");
   this->password_SQL_site->Add("First_name");
   this->password_SQL_site->Add("Last_name");
   this->password_SQL_site->Add("Year_of_birth");
   this->password_SQL_site->Add("Gender_of_person");
   this->password_SQL_site->Add("Place_of_birth");
   this->password_SQL_site->Add("Country");
   this->password_SQL_site->Add("City");
   this->password_SQL_site->Add("Address_registration");
   this->password_SQL_site->Add("Place_of_resindece");
   this->password_SQL_site->Add("Home_telephone");
   this->password_SQL_site->Add("Mobile_telephone");

   this->password_SQL_site->Add(std::tuple<AnsiString, int, int, bool, bool>("ID",0,10,true,false));
   this->password_SQL_site->Add(std::tuple<AnsiString, AnsiString, bool, bool>("Host","*",false,false));
   this->password_SQL_site->Add(std::tuple<AnsiString, AnsiString, bool, bool>("Login","*",false,false));
   this->password_SQL_site->Add(std::tuple<AnsiString, AnsiString, bool, bool>("Password","*",false,false));
   this->password_SQL_site->Add(std::tuple<AnsiString, AnsiString, bool, bool>("Mail","*",false,false));
   this->password_SQL_site->Add(std::tuple<AnsiString, TDate, TDate, bool, bool>("Registration_date",TDate("01.01.2010"),
								TDate("31.12.2022"),false,true));
   this->password_SQL_site->Order_general();
 };

 void TPassword_magnet_F::Site_Resize_initilisation()
 {
   this->password_Resize_site->Add(this->ID_DBE);
   this->password_Resize_site->Add(this->Host_DBE);
   this->password_Resize_site->Add(this->Login_DBE);
   this->password_Resize_site->Add(this->Password_DBE);
   this->password_Resize_site->Add(this->Mail_DBE);
   this->password_Resize_site->Add(this->Registration_date_DBE);
   this->password_Resize_site->Add(this->First_name_DBE);
   this->password_Resize_site->Add(this->Last_name_DBE);
   this->password_Resize_site->Add(this->Year_of_birth_DBE);
   this->password_Resize_site->Add(this->Gender_of_person_DBE);
   this->password_Resize_site->Add(this->Place_of_birth_DBE);
   this->password_Resize_site->Add(this->Country_DBE);
   this->password_Resize_site->Add(this->City_DBE);
   this->password_Resize_site->Add(this->Address_registration_DBE);
   this->password_Resize_site->Add(this->Place_of_resindece_DBE);
   this->password_Resize_site->Add(this->Home_telephone_DBE);
   this->password_Resize_site->Add(this->Mobile_telephone_DBE);
 };

// void TPassword_magnet_F::Password_magnet_F_RESIZE()
//{
//  const int diffences = 35;
//
//  int Form_width      = Password_magnet_F->Width;
//  int Navigator_width = this->Navigator_P->Width;
//  int result          = 0;
//
//  result = Form_width - Navigator_width;
//  this->Date_navigator_P->Width = result;
//
//
//  result = result / 2;
//  this->Gadjet_P->Width = result-diffences;
//  this->Person_P->Width = result+(diffences-25);
//
//  int Form_height = (Password_magnet_F->Height - (this->ToolBar->Height + this->DBGrid_P->Height
//					 + this->DBNavigator->Width + this->StatusBar->Height));
//
// // this->Date_navigator_P->Height = Form_height;
//  this->Gadjet_P->Height         = Form_height;
//  this->Person_P->Height         = Form_height;
//};









