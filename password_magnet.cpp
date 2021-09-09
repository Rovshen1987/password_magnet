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




   this->password_magnet_navigator   = std::make_unique<Navigator>();

   this->password_magnet_site        = std::make_unique<TSite>();
   this->password_SQL_site           = std::make_unique<_SQL>(ADOQuery_site, "TSite", true);
   this->password_Resize_site        = std::make_unique<_Resize>(220, 440, 230, this->Gadjet_P);



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
   //this->Language_rus();

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
this->Switching(this->Site_NL->GetNamePath());
this->password_magnet_navigator->object_click(this->Site_NL->GetNamePath());
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



}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::Exit_MClick(TObject *Sender)
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
	if (this->password_SQL_site->Field_not_null() == false)
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
   }

//   this->password_SQL_site->Add(std::tuple<AnsiString, int, int, bool, bool>("ID",0,10,true,false));
//   this->password_SQL_site->Add(std::tuple<AnsiString, AnsiString, bool, bool>("Host","*",false,false));
//   this->password_SQL_site->Add(std::tuple<AnsiString, AnsiString, bool, bool>("Login","*",false,false));
//   this->password_SQL_site->Add(std::tuple<AnsiString, AnsiString, bool, bool>("Password","*",false,false));
//   this->password_SQL_site->Add(std::tuple<AnsiString, AnsiString, bool, bool>("Mail","*",false,false));
//   this->password_SQL_site->Add(std::tuple<AnsiString, TDate, TDate, bool, bool>("Registration_date",TDate("01.01.2010"),
//								TDate("31.12.2022"),false,true));
   this->password_SQL_site->Order_general();
 };

 void TPassword_magnet_F::Site_Resize_initilisation()
 {
	if (this->password_Resize_site->all_point_true() == true)
	{
     return;
	}
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


//------------------------------------------------------------------------------
void __fastcall TPassword_magnet_F::Button2Click(TObject *Sender)
{
password_magnet_site->Language_eng();
}

//-----------------------------------------------------------------------------
void TPassword_magnet_F::Language_rus()
{
  if (this->Language_active == AnsiString("rus"))
  {
   return;

  }

//---------------NAVIGATOR-----------------------
  this->Reaname_obj(this->Site_NL, AnsiString("Сайты"));
  this->Reaname_obj(this->Mail_NL, AnsiString("Почта"));
  this->Reaname_obj(this->Mobile_NL, AnsiString("Мобильники"));
  this->Reaname_obj(this->ICloud_NL, AnsiString("Ай клауд"));
  this->Reaname_obj(this->PlayMarket_NL, AnsiString("Плай маркет"));
  this->Reaname_obj(this->Computer_NL, AnsiString("Компьютеры"));
  this->Reaname_obj(this->Paycard_NL, AnsiString("Платежи"));
  this->Reaname_obj(this->Docfile_NL, AnsiString("Документы"));

//---------------TabSheet------------------------------
  this->Reaname_obj(this->Site_TSh, AnsiString("Сайты"));
  this->Reaname_obj(this->Mail_TSh, AnsiString("Почта"));
  this->Reaname_obj(this->Mobile_TSh, AnsiString("Мобильники"));
  this->Reaname_obj(this->ICloud_TSh, AnsiString("I Cloud"));
  this->Reaname_obj(this->PlayMarket_TSh, AnsiString("PlayMarket"));
  this->Reaname_obj(this->Computer_TSh, AnsiString("Компьютеры"));
  this->Reaname_obj(this->Paycard_TSh, AnsiString("Электронная платежная система"));
  this->Reaname_obj(this->Docfile_TSh, AnsiString("За пароленные документы"));

//---------------Menu------------------------------
  this->Reaname_obj(this->File_M, AnsiString("Файл"));
  this->Reaname_obj(this->Open_M, AnsiString("Открыть"));
  this->Reaname_obj(this->Exit_M, AnsiString("Выход"));
  this->Reaname_obj(this->Window_M, AnsiString("Окна"));
  this->Reaname_obj(this->Language_M, AnsiString("Языки"));
  this->Reaname_obj(this->Russian_M, AnsiString("Русский"));
  this->Reaname_obj(this->English_M, AnsiString("Англиский"));

//---------------TSite-----------------------
  this->Reaname_obj(this->ID_L, AnsiString("* ИД"));
  this->Reaname_obj(this->Host_L, AnsiString("* Адресс"));
  this->Reaname_obj(this->Login_L, AnsiString("* Логин"));
  this->Reaname_obj(this->Password_L, AnsiString("* Пароль"));
  this->Reaname_obj(this->Mail_L, AnsiString("* Почта"));
  this->Reaname_obj(this->Registration_date_L, AnsiString("* Дата регистрации"));
  this->Reaname_obj(this->First_name_L, AnsiString("Фамилия"));
  this->Reaname_obj(this->Last_name_L, AnsiString("Имя"));
  this->Reaname_obj(this->Year_of_birth_L, AnsiString("Дата рождения"));
  this->Reaname_obj(this->Gender_of_person_L, AnsiString("Пол"));
  this->Reaname_obj(this->Place_of_birth_L, AnsiString("Место рождения"));
  this->Reaname_obj(this->Country_L, AnsiString("Страна"));
  this->Reaname_obj(this->City_L, AnsiString("Город"));
  this->Reaname_obj(this->Address_registration_L, AnsiString("Адресс регистрации"));
  this->Reaname_obj(this->Place_of_resindece_L, AnsiString("Место жительство"));
  this->Reaname_obj(this->Home_telephone_L, AnsiString("Домашний телефон"));
  this->Reaname_obj(this->Mobile_telephone_L, AnsiString("Мобильник"));

  this->password_magnet_site->Language_rus();

  this->Language_active = "rus";

};

//------------------------------------------------------------------------------
void TPassword_magnet_F::Language_eng()
{
  if (this->Language_active == AnsiString("eng"))
  {
   return;
  }

//---------------NAVIGATOR-----------------------
  this->Reaname_obj(this->Site_NL, AnsiString("Sites"));
  this->Reaname_obj(this->Mail_NL, AnsiString("Mail"));
  this->Reaname_obj(this->Mobile_NL, AnsiString("Mobile"));
  this->Reaname_obj(this->ICloud_NL, AnsiString("I Cloud"));
  this->Reaname_obj(this->PlayMarket_NL, AnsiString("PlayMarket"));
  this->Reaname_obj(this->Computer_NL, AnsiString("Computer"));
  this->Reaname_obj(this->Paycard_NL, AnsiString("PayPal"));
  this->Reaname_obj(this->Docfile_NL, AnsiString("Doc file"));

//---------------TabSheet------------------------------
  this->Reaname_obj(this->Site_TSh, AnsiString("Sites"));
  this->Reaname_obj(this->Mail_TSh, AnsiString("Mail"));
  this->Reaname_obj(this->Mobile_TSh, AnsiString("Mobile"));
  this->Reaname_obj(this->ICloud_TSh, AnsiString("I Cloud"));
  this->Reaname_obj(this->PlayMarket_TSh, AnsiString("PlayMarket"));
  this->Reaname_obj(this->Computer_TSh, AnsiString("Computer"));
  this->Reaname_obj(this->Paycard_TSh, AnsiString("Electronic payment system (PayPal)"));
  this->Reaname_obj(this->Docfile_TSh, AnsiString("Flooded documents"));

//---------------Menu------------------------------
  this->Reaname_obj(this->File_M, AnsiString("File"));
  this->Reaname_obj(this->Open_M, AnsiString("Open"));
  this->Reaname_obj(this->Exit_M, AnsiString("Exit"));
  this->Reaname_obj(this->Window_M, AnsiString("Window"));
  this->Reaname_obj(this->Language_M, AnsiString("Language"));
  this->Reaname_obj(this->Russian_M, AnsiString("Russian"));
  this->Reaname_obj(this->English_M, AnsiString("English"));

//---------------TSite-----------------------
  this->Reaname_obj(this->ID_L, AnsiString("* ID"));
  this->Reaname_obj(this->Host_L, AnsiString("* Host"));
  this->Reaname_obj(this->Login_L, AnsiString("* Login"));
  this->Reaname_obj(this->Password_L, AnsiString("* Password"));
  this->Reaname_obj(this->Mail_L, AnsiString("* Mail"));
  this->Reaname_obj(this->Registration_date_L, AnsiString("* Registration_date"));
  this->Reaname_obj(this->First_name_L, AnsiString("Firstname"));
  this->Reaname_obj(this->Last_name_L, AnsiString("Lastname"));
  this->Reaname_obj(this->Year_of_birth_L, AnsiString("Year of birth"));
  this->Reaname_obj(this->Gender_of_person_L, AnsiString("Gender of person"));
  this->Reaname_obj(this->Place_of_birth_L, AnsiString("Place of birth"));
  this->Reaname_obj(this->Country_L, AnsiString("Country"));
  this->Reaname_obj(this->City_L, AnsiString("City"));
  this->Reaname_obj(this->Address_registration_L, AnsiString("Address registration"));
  this->Reaname_obj(this->Place_of_resindece_L, AnsiString("Place of resindece"));
  this->Reaname_obj(this->Home_telephone_L, AnsiString("Home telephone"));
  this->Reaname_obj(this->Mobile_telephone_L, AnsiString("Mobile telephone"));

  this->password_magnet_site->Language_eng();

  this->Language_active = "eng";
};

//------------------------------------------------------------------------------
void TPassword_magnet_F::Reaname_obj(TLabel* obj, const AnsiString& caption)
{
  obj->Caption = caption;
};

//------------------------------------------------------------------------------
void TPassword_magnet_F::Reaname_obj(TMenuItem* obj, const AnsiString& caption)
{
  obj->Caption = caption;
};

//------------------------------------------------------------------------------
void TPassword_magnet_F::Reaname_obj(TTabSheet* obj, const AnsiString& caption)
{
  obj->Caption = caption;
};

//------------------------------------------------------------------------------
void __fastcall TPassword_magnet_F::English_MClick(TObject *Sender)
{
this->Language_eng();
}
//---------------------------------------------------------------------------

void __fastcall TPassword_magnet_F::Russian_MClick(TObject *Sender)
{
this->Language_rus();
}
//---------------------------------------------------------------------------

void TPassword_magnet_F::Switching(const AnsiString& value)
{
  int i_NL = this->password_magnet_navigator->get_id_object(value);

  switch (i_NL)
  {
  case 1 : {
			this->password_magnet_site->this_active(true);
			this->password_SQL_site->set_Active(true);
			this->password_Resize_site->Connect();
			this->Site_NL_initilisation();
            break;
		   }
  default:
	  ;
  }

};

void TPassword_magnet_F::All_object_power_off()
{
//-------------Site---------------------------
  this->password_magnet_site->this_active(false);
  this->password_SQL_site->set_Active(false);
  this->password_Resize_site->Disconnect();
//*******************************************
};
