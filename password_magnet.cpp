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

Password_magnet_F->Caption = DBGrid1->Columns->Count;


}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::Button2Click(TObject *Sender)
{
//DBGrid1->Columns->Delete(1);
}
//---------------------------------------------------------------------------

