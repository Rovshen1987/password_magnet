#pragma once
#include <vcl.h>
#include <vector>

class _Active_database_and_Language
{
 public:
		  _Active_database_and_Language();
		  _Active_database_and_Language(const AnsiString& Language);
		 ~_Active_database_and_Language();

		 void       set_Site(const bool& value);
		 void       set_Mail(const bool& value);
		 void       set_Mobile(const bool& value);
		 void       set_ICloud(const bool& value);
		 void       set_PlayMarket(const bool& value);
		 void       set_Computer(const bool& value);
		 void       set_Paycard(const bool& value);
		 void       set_Docfile(const bool& value);
		 void       set_Language(const AnsiString& Language);

		 bool       get_Site();
		 bool       get_Mail();
		 bool       get_Mobile();
		 bool       get_ICloud();
		 bool       get_PlayMarket();
		 bool       get_Computer();
		 bool       get_Paycard();
		 bool       get_Docfile();
		 AnsiString get_Language();

		 int        get_active_index();

		 void       _false_all();




 private:
		 bool   Site;
		 bool   Mail;
		 bool   Mobile;
		 bool   ICloud;
		 bool   PlayMarket;
		 bool   Computer;
		 bool   Paycard;
		 bool   Docfile;

		 AnsiString Language;
};
