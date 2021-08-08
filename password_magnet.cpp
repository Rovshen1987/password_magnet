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

this->PlayMarker_L->Font->Style = this->PlayMarker_L->Font->Style>>fsUnderline;
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::Button2Click(TObject *Sender)
{
//DBGrid1->Columns->Delete(1);
//
//Button2->
//Password_magnet_F->Caption = this->Sait_L->GetNamePath();
this->PlayMarker_L->Font->Style = this->PlayMarker_L->Font->Style<<fsUnderline;
}
//---------------------------------------------------------------------------

 void TPassword_magnet_F::initilisation()
 {
   this->password_magnet_navigator = std::make_unique<Navigator>();
   this->password_magnet_navigator->set_Site_L(this->Site_L);
   this->password_magnet_navigator->set_Mobile_L(this->Mobile_L);
   this->password_magnet_navigator->set_ICloud_L(this->ICloud_L);
   this->password_magnet_navigator->set_PlayMarker_L(this->PlayMarker_L);
   this->password_magnet_navigator->set_Computer_L(this->Computer_L);
   this->password_magnet_navigator->set_Pay_card_L(this->Pay_card_L);

   this->password_magnet_navigator->object_click(this->Site_L->GetNamePath());

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

void __fastcall TPassword_magnet_F::Site_LClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->Site_L->GetNamePath());
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::Mobile_LClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->Mobile_L->GetNamePath());
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::ICloud_LClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->ICloud_L->GetNamePath());
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::PlayMarker_LClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->PlayMarker_L->GetNamePath());
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::Computer_LClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->Computer_L->GetNamePath());
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::Pay_card_LClick(TObject *Sender)
{
this->password_magnet_navigator->object_click(this->Pay_card_L->GetNamePath());
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

};

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


