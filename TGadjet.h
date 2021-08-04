#pragma once
#include <vcl.h>

class TGadjet
{
public:

	 TGadjet();
	 TGadjet(const AnsiString& Login, const AnsiString& Password, const TDate& Registration_date)
			:Login(Login), Password(Password), Registration_date(Registration_date){};
	 ~TGadjet();
	 AnsiString get_Login();
	 AnsiString get_Password();
	 TDate get_Registration_date();

	 void set_Login(const AnsiString& Login);
	 void set_Password(const AnsiString& Password);
	 void set_Registration_date(const TDate& Registration_date);

private:
	 AnsiString Login;
	 AnsiString Password;
	 TDate      Registration_date;
};
