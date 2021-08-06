//---------------------------------------------------------------------------

#ifndef password_magnetH
#define password_magnetH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.StdActns.hpp>
#include <Data.DB.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TPassword_magnet_F : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TToolBar *ToolBar1;
	TStatusBar *StatusBar1;
	TMenuItem *File1;
	TMenuItem *Open1;
	TMenuItem *N1;
	TMenuItem *Exit1;
	TPanel *Panel1;
	TSplitter *Splitter1;
	TPanel *Panel2;
	TPanel *Panel3;
	TSplitter *Splitter2;
	TDBGrid *DBGrid1;
	TSplitter *Splitter3;
	void __fastcall EditCopy1Execute(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TPassword_magnet_F(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPassword_magnet_F *Password_magnet_F;
//---------------------------------------------------------------------------
#endif
