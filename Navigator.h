#pragma once
#include <vcl.h>

class Navigator
{
public:
	 Navigator();
	~Navigator();

	 void set_Site_NL(TLabel* object);
	 void set_Mail_NL(TLabel* object);
	 void set_Mobile_NL(TLabel* object);
	 void set_ICloud_NL(TLabel* object);
	 void set_PlayMarket_NL(TLabel* object);
	 void set_Computer_NL(TLabel* object);
	 void set_Paycard_NL(TLabel* object);
	 void set_Docfile_NL(TLabel* object);

	 void object_click(const AnsiString& name_object);

	 bool get_Site_BOOL();
	 bool get_Mail_BOOL();
	 bool get_Mobile_BOOL();
	 bool get_ICloud_BOOL();
	 bool get_PlayMarket_BOOL();
	 bool get_Computer_BOOL();
	 bool get_Paycard_BOOL();
	 bool get_Docfile_BOOL();

     int  get_id_object(const AnsiString& name_object) noexcept;
private:
	 TLabel* Site_NL;
	 TLabel* Mail_NL;
	 TLabel* Mobile_NL;
	 TLabel* ICloud_NL;
	 TLabel* PlayMarket_NL;
	 TLabel* Computer_NL;
	 TLabel* Paycard_NL;
	 TLabel* Docfile_NL;

	 const int true_varrible_int      = 18;
	 const int false_varrible_int     = 14;

	 bool Site_BOOL;
	 bool Mail_BOOL;
	 bool Mobile_BOOL;
	 bool ICloud_BOOL;
	 bool PlayMarket_BOOL;
	 bool Computer_BOOL;
	 bool Paycard_BOOL;
	 bool Docfile_BOOL;


	 void get_id_object_inside(const int& set);
	 void get_id_object_inside_2(const int& set);
     void get_id_object_inside_3(const int& set);

	 void Site_BUTTON();
	 void Mail_BUTTON();
	 void Mobile_BUTTON();
	 void ICloud_BUTTON();
	 void PlayMarket_BUTTON();
	 void Computer_BUTTON();
	 void Paycard_BUTTON();
     void Docfile_BUTTON();

	 void All_varrible_false();

	 void set_style_ALL();
	 void set_style_ALL_inside(TLabel* obj, const bool& visible);


};
