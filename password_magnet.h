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
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
#include "Navigator.h"
#include <memory>
#include "TSite.h"
#include "_SQL.h"
#include "direct_r.h"
#include "_Resize.h"
#include "_Active_database_and_Language.h"
#include "Selection.h"
//---------------------------------------------------------------------------
class TPassword_magnet_F : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TToolBar *ToolBar;
	TStatusBar *StatusBar;
	TMenuItem *File_M;
	TMenuItem *Open_M;
	TMenuItem *N1;
	TMenuItem *Exit_M;
	TPanel *Navigator_P;
	TSplitter *Splitter1;
	TSplitter *Splitter3;
	TADOConnection *ADOConnection;
	TADOQuery *ADOQuery_site;
	TDataSource *DataSource_site;
	TLabel *Site_NL;
	TLabel *Mobile_NL;
	TLabel *Computer_NL;
	TLabel *ICloud_NL;
	TLabel *PlayMarket_NL;
	TLabel *Paycard_NL;
	TLabel *Mail_NL;
	TLabel *Docfile_NL;
	TPageControl *Control_TSh;
	TTabSheet *Site_TSh;
	TPanel *Client_P;
	TSplitter *Splitter2;
	TPanel *DBGrid_P;
	TDBGrid *DBGrid;
	TDBNavigator *DBNavigator;
	TPanel *Date_navigator_P;
	TSplitter *Splitter4;
	TPanel *Gadjet_P;
	TLabel *ID_L;
	TLabel *Login_L;
	TLabel *Password_L;
	TLabel *Mail_L;
	TLabel *Registration_date_L;
	TLabel *Host_L;
	TDBEdit *ID_DBE;
	TDBEdit *Login_DBE;
	TDBEdit *Password_DBE;
	TDBEdit *Mail_DBE;
	TDBEdit *Registration_date_DBE;
	TDBEdit *Host_DBE;
	TTabSheet *Mail_TSh;
	TTabSheet *Mobile_TSh;
	TTabSheet *ICloud_TSh;
	TTabSheet *PlayMarket_TSh;
	TTabSheet *Computer_TSh;
	TTabSheet *Paycard_TSh;
	TTabSheet *Docfile_TSh;
	TPanel *Person_P;
	TLabel *First_name_L;
	TLabel *Last_name_L;
	TLabel *Year_of_birth_L;
	TLabel *Gender_of_person_L;
	TLabel *Place_of_birth_L;
	TLabel *Country_L;
	TLabel *City_L;
	TLabel *Address_registration_L;
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
	TButton *Button1;
	TButton *Button2;
	TMenuItem *Window_M;
	TMenuItem *Language_M;
	TMenuItem *Russian_M;
	TMenuItem *English1;
	TMenuItem *English_M;
	void __fastcall EditCopy1Execute(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Site_NLClick(TObject *Sender);
	void __fastcall Mobile_NLClick(TObject *Sender);
	void __fastcall ICloud_NLClick(TObject *Sender);
	void __fastcall PlayMarket_NLClick(TObject *Sender);
	void __fastcall Computer_NLClick(TObject *Sender);
	void __fastcall Paycard_NLClick(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall Exit_MClick(TObject *Sender);
	void __fastcall Mail_NLClick(TObject *Sender);
	void __fastcall Docfile_NLClick(TObject *Sender);
	void __fastcall DBGridColEnter(TObject *Sender);
	void __fastcall DBGridTitleClick(TColumn *Column);
	void __fastcall English_MClick(TObject *Sender);
	void __fastcall Russian_MClick(TObject *Sender);

private:	// User declarations
	void initilisation();
	void Password_magnet_F_RESIZE();

	void Site_NL_initilisation();
	void Site_SQL_initilisation();
	void Site_Resize_initilisation();

	void Mail_NL_initilisation();
	void Mobile_NL_initilisation();
	void ICloud_NL_initilisation();
	void PlyMarker_NL_initilisation();
	void Computer_NL_initilisation();
	void Paycard_NL_initilisation();
	void Docfile_NL_initilisation();

	void Language_rus();
	void Language_eng();

	void Switching(const AnsiString& value);
	void All_object_power_off();

	void Language_click_Site();
	void Language_click_Mial();
	void Language_click_Mobile();
	void Language_click_ICloud();
	void Language_click_PlayMarket();
	void Language_click_Computer();
	void Language_click_Paycard();
	void Language_click_Docfile();

//	AnsiString         Language_active;

public:		// User declarations
	__fastcall TPassword_magnet_F(TComponent* Owner);
														  //columns_run
	std::unique_ptr<Navigator> password_magnet_navigator;

	std::unique_ptr<TSite>             password_magnet_site;
	std::unique_ptr<_SQL>              password_magnet_SQL_site;
	std::unique_ptr<_Resize>           password_magnet_Resize_site;
	std::unique_ptr<_Active_database_and_Language>  password_magnet_Active_database_and_Language;



	void visible_TSh(TTabSheet* object);


	void Reaname_obj(TLabel* obj,    const AnsiString& caption);
	void Reaname_obj(TMenuItem* obj, const AnsiString& caption);
	void Reaname_obj(TTabSheet* obj, const AnsiString& caption);

	void Language_click();
};
//---------------------------------------------------------------------------
extern PACKAGE TPassword_magnet_F *Password_magnet_F;
//---------------------------------------------------------------------------
#endif
