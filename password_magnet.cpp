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

void __fastcall TPassword_magnet_F::Button2Click(TObject *Sender)
{
// const AnsiString jek = "ID";
//
// this->ID_DBE->DataField = jek;
}
//---------------------------------------------------------------------------

 void TPassword_magnet_F::initilisation()
 {
   this->password_magnet_navigator = std::make_unique<Navigator>();
   this->password_magnet_site      = std::make_unique<TSite>();

   //----------------------------------------Navigator--------------------------
   this->password_magnet_navigator->set_Site_NL(this->Site_NL);
   this->password_magnet_navigator->set_Mail_NL(this->Mail_NL);
   this->password_magnet_navigator->set_Mobile_NL(this->Mobile_NL);
   this->password_magnet_navigator->set_ICloud_NL(this->ICloud_NL);
   this->password_magnet_navigator->set_PlayMarker_NL(this->PlayMarker_NL);
   this->password_magnet_navigator->set_Computer_NL(this->Computer_NL);
   this->password_magnet_navigator->set_Paycard_NL(this->Paycard_NL);

   this->password_magnet_navigator->object_click(this->Site_NL->GetNamePath());
   this->Site_L_initilisation();

   Password_magnet_F->Height = Password_magnet_F->Constraints->MinHeight;
   Password_magnet_F->Width = Password_magnet_F->Constraints->MinWidth;
 };

 /*	 TLabel* Mobile_L;
	 TLabel* ICloud_L;
	 TLabel* PlayMarker_L;
	 TLabel* Computer_L;
	 TLabel* Pay_card_L;*/
void __fastcall TPassword_magnet_F::FormCreate(TObject *Sender)
{
this->initilisation();
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::Site_NLClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->Site_NL->GetNamePath());
this->Site_L_initilisation();
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::Mobile_NLClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->Mobile_NL->GetNamePath());
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::ICloud_NLClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->ICloud_NL->GetNamePath());
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::PlayMarker_NLClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->PlayMarker_NL->GetNamePath());
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::Computer_NLClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->Computer_NL->GetNamePath());
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::Paycard_NLClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->Paycard_NL->GetNamePath());
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
Password_magnet_F_RESIZE();

Password_magnet_F->Caption = AnsiString("x = ")+ Password_magnet_F->Width +
                             AnsiString("y = ")+ Password_magnet_F->Height;
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::Exit1Click(TObject *Sender)
{
Password_magnet_F->Close();
}

//---------------------------------------------------------------------------
void TPassword_magnet_F::Site_L_initilisation()
{


if ((this->password_magnet_site->get_Active_object() == true) and
   (this->password_magnet_site->get_selected_all_object() == false))
  {
   this->password_magnet_site->set_ADO_query_o(this->ADOQuery);
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

  };

  if (this->password_magnet_site->get_Active_object_columns_run() == false)
  {
   this->password_magnet_site->columns_run();
  };

}

//---------------------------------------------------------------------------
void TPassword_magnet_F::Mobile_L_initilisation()
{

};

//---------------------------------------------------------------------------
void TPassword_magnet_F::ICloud_L_initilisation()
{

};

//---------------------------------------------------------------------------
void TPassword_magnet_F::PlyMarker_L_initilisation()
{

};

//---------------------------------------------------------------------------
void TPassword_magnet_F::Computer_L_initilisation()
{

};

//---------------------------------------------------------------------------
void TPassword_magnet_F::Paycard_initilisation()
{

};


void __fastcall TPassword_magnet_F::Mail_NLClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->Mail_NL->GetNamePath());
}
//---------------------------------------------------------------------------

