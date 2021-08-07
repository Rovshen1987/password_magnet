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
#include "direct_r.h"
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
#include "Navigator.h"
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
	TPanel *Navigator_P;
	TSplitter *Splitter1;
	TPanel *Client_P;
	TPanel *DBGrid_P;
	TSplitter *Splitter2;
	TDBGrid *DBGrid1;
	TSplitter *Splitter3;
	TADOConnection *ADOConnection;
	TADOQuery *ADOQuery;
	TDataSource *DataSource;
	TDBNavigator *DBNavigator1;
	TLabel *Sait_L;
	TLabel *Mobile_L;
	TLabel *Computer_L;
	TPanel *Person_P;
	TPanel *Gadjet_P;
	TLabel *ID_L;
	TLabel *Login_L;
	TLabel *Password_L;
	TLabel *Mail_L;
	TLabel *Registration_date_L;
	TDBEdit *ID_DBE;
	TDBEdit *Login_DBE;
	TDBEdit *Password_DBE;
	TDBEdit *Mail_DBE;
	TDBEdit *Registration_date_DBE;
	TPanel *Site_P;
	TSplitter *Splitter4;
	TSplitter *Splitter5;
	TLabel *First_name_L;
	TLabel *Last_name_L;
	TLabel *Year_of_birth_L;
	TLabel *Gender_of_person_L;
	TLabel *Place_of_birth_L;
	TLabel *Country_L;
	TLabel *City_L;
	TLabel *Andress_registration_L;
	TLabel *Place_of_resindece_L;
	TLabel *Home_telephone_L;
	TLabel *Mobile_telephone_L;
	TDBEdit *First_name_DBE;
	TDBEdit *Last_name_DBE;
	TDBEdit *Year_of_birth_DBE;
	TDBEdit *Gender_of_person_DBE;
	TDBEdit *Place_of_birth_DBE;
	TDBEdit *Country_DBE;
	TDBEdit *City_DBE;
	TDBEdit *Andress_registration_DBE;
	TDBEdit *Place_of_resindece_DBE;
	TDBEdit *Home_telephone_DBE;
	TDBEdit *Mobile_telephone_DBE;
	TLabel *ICloud_L;
	TLabel *PlayMarker_L;
	TLabel *Pay_card_L;
	TButton *Button1;
	TButton *Button2;
	void __fastcall EditCopy1Execute(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TPassword_magnet_F(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPassword_magnet_F *Password_magnet_F;
//---------------------------------------------------------------------------
#endif
