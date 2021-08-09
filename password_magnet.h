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
#include "TSite.h"
#include <memory>
//---------------------------------------------------------------------------
class TPassword_magnet_F : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TToolBar *ToolBar;
	TStatusBar *StatusBar;
	TMenuItem *File1;
	TMenuItem *Open1;
	TMenuItem *N1;
	TMenuItem *Exit1;
	TPanel *Navigator_P;
	TSplitter *Splitter1;
	TPanel *Client_P;
	TPanel *DBGrid_P;
	TSplitter *Splitter2;
	TDBGrid *DBGrid;
	TSplitter *Splitter3;
	TADOConnection *ADOConnection;
	TADOQuery *ADOQuery;
	TDataSource *DataSource;
	TDBNavigator *DBNavigator;
	TLabel *Site_NL;
	TLabel *Mobile_NL;
	TLabel *Computer_NL;
	TPanel *Date_navigator_P;
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
	TPanel *Person_P;
	TSplitter *Splitter4;
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
	TDBEdit *Address_registration_DBE;
	TDBEdit *Place_of_resindece_DBE;
	TDBEdit *Home_telephone_DBE;
	TDBEdit *Mobile_telephone_DBE;
	TLabel *ICloud_NL;
	TLabel *PlayMarker_NL;
	TLabel *Paycard_NL;
	TButton *Button1;
	TButton *Button2;
	TLabel *Host_L;
	TDBEdit *Host_DBE;
	TLabel *Mail_NL;
	TLabel *Docfile_NL;
	void __fastcall EditCopy1Execute(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Site_NLClick(TObject *Sender);
	void __fastcall Mobile_NLClick(TObject *Sender);
	void __fastcall ICloud_NLClick(TObject *Sender);
	void __fastcall PlayMarker_NLClick(TObject *Sender);
	void __fastcall Computer_NLClick(TObject *Sender);
	void __fastcall Paycard_NLClick(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall Exit1Click(TObject *Sender);
	void __fastcall Mail_NLClick(TObject *Sender);
	void __fastcall Docfile_NLClick(TObject *Sender);
private:	// User declarations
	void initilisation();
    void Password_magnet_F_RESIZE();
public:		// User declarations
	__fastcall TPassword_magnet_F(TComponent* Owner);
														  //columns_run
	std::unique_ptr<Navigator> password_magnet_navigator;
    std::unique_ptr<TSite>     password_magnet_site;

	void Site_NL_initilisation();
	void Mail_NL_initilisation();
	void Mobile_NL_initilisation();
	void ICloud_NL_initilisation();
	void PlyMarker_NL_initilisation();
	void Computer_NL_initilisation();
	void Paycard_NL_initilisation();
	void Docfile_NL_initilisation();


};
//---------------------------------------------------------------------------
extern PACKAGE TPassword_magnet_F *Password_magnet_F;
//---------------------------------------------------------------------------
#endif
