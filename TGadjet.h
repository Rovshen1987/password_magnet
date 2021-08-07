#pragma once
#include <vcl.h>
#include <memory>

class TGadjet
{
public:

	 TGadjet(const AnsiString& Login, const AnsiString& Password, const AnsiString mail, const TDate Registration_date);
     TGadjet();
//	 TGadjet(const AnsiString& Login, const AnsiString& Password, const TDate& Registration_date)
//			:Login(Login), Password(Password), Registration_date(Registration_date){};
	 TGadjet(const TGadjet& object) = delete;
     TGadjet& operator=(TGadjet& objetc);
	 ~TGadjet();

	 bool operator==(const TGadjet& object);



	 void set_Login(const AnsiString& Login);
	 void set_Password(const AnsiString& Password);
	 void set_Registration_date(const TDate& Registration_date);
	 void set_Mail(const AnsiString& set);

	 AnsiString get_Login();
	 AnsiString get_Password();
	 TDate      get_Registration_date();
	 AnsiString get_Mail();

private:
	 std::unique_ptr<AnsiString>   Login;
	 std::unique_ptr<AnsiString>   Password;
	 std::unique_ptr<AnsiString>   Mail;
	 std::unique_ptr<TDate>        Registration_date;

};
