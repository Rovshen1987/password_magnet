
#pragma once
#include <vcl.h>
#include "enumeration.h"
#include <memory>

class TPerson
{
  public:
		  TPerson();
		 ~TPerson();

		 void   set_First_name(const AnsiString& set);
		 void   set_Last_name(const AnsiString& set);
		 void   set_Year_of_birth(TDate set);
		 void   set_Gender_of_person(gender& set);
		 void   set_Place_of_birth(const AnsiString& set = "No");
		 void   set_Country(const AnsiString& set = "Turkmenistan");
		 void   set_City(const AnsiString& set = "Ashgabat");
		 void	set_Andress_registration(const AnsiString& set);
		 void   set_Place_of_resindece(const AnsiString& set);
		 void   set_Home_telephone(const AnsiString& set);
		 void   set_Mobile_telephone(const AnsiString& set);
		 void   set_Mail(const AnsiString& set);

		 AnsiString   get_First_name();
		 AnsiString   get_Last_name();
		 TDate        get_Year_of_birth();
		 gender       get_Gender_of_person();
		 AnsiString   get_Place_of_birth();
		 AnsiString   get_Country();
		 AnsiString   get_City();
		 AnsiString	  get_Andress_registration();
		 AnsiString   get_Place_of_resindece();
		 AnsiString   get_Home_telephone();
		 AnsiString   get_Mobile_telephone();
		 AnsiString   get_Mail();

         AnsiString   GetPathName();

  protected:

		 std::unique_ptr<AnsiString>   First_name;
		 std::unique_ptr<AnsiString>   Last_name;
		 std::unique_ptr<TDate>        Year_of_birth;
		 std::unique_ptr<gender>       Gender_of_person;
		 std::unique_ptr<AnsiString>   Place_of_birth;
		 std::unique_ptr<AnsiString>   Country;
		 std::unique_ptr<AnsiString>   City;
		 std::unique_ptr<AnsiString>   Andress_registration;
		 std::unique_ptr<AnsiString>   Place_of_resindece;
		 std::unique_ptr<AnsiString>   Home_telephone;
		 std::unique_ptr<AnsiString>   Mobile_telephone;
		 std::unique_ptr<AnsiString>   Mail;

  private:
		 const AnsiString      PathName = "TPerson";
};
