#pragma once
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>



class TSite
{
  public:
//		 TSite() = delete;
		 TSite();
		~TSite();

		 void          set_ADO_query_o(TADOQuery* object);
		 void          set_DB_grid_o(TDBGrid* object);
		 void          set_Host(const AnsiString& set);

         void          ste_Host_DBE();
		 void          set_Login_DBE();
		 void          set_Password_DBE();
		 void          set_Mail_DBE();
		 void          set_Registration_date_DBE();

		 void          set_First_name_DBE();
		 void          set_Last_name_DBE();
		 void          set_Year_of_birth_DBE();
		 void          set_Gender_of_person_DBE();
		 void          set_Place_of_birth_DBE();
		 void          set_Country_DBE();
		 void          set_City_DBE();
		 void          set_Andress_registration_DBE();
		 void          set_Place_of_resindece_DBE();
		 void          set_Home_telephone_DBE();
		 void          set_Mobile_telephone_DBE();

		 AnsiString    get_path_name();

//		 AnsiString    get_Host();

 protected:

		 TADOQuery*    ADO_query_o;
		 TDBGrid*      DB_grid_o;

		 TDBEdit*      Host_DBE;
		 TDBEdit*      Login_DBE;
		 TDBEdit*      Password_DBE;
		 TDBEdit*      Mail_DBE;
		 TDBEdit*      Registration_date_DBE;

		 TDBEdit*      First_name_DBE;
		 TDBEdit*      Last_name_DBE;
		 TDBEdit*      Year_of_birth_DBE;
		 TDBEdit*      Gender_of_person_DBE;
		 TDBEdit*      Place_of_birth_DBE;
		 TDBEdit*      Country_DBE;
		 TDBEdit*      City_DBE;
		 TDBEdit*      Andress_registration_DBE;
		 TDBEdit*      Place_of_resindece_DBE;
		 TDBEdit*      Home_telephone_DBE;
		 TDBEdit*      Mobile_telephone_DBE;


 private:
		const AnsiString Path_name = "TSite";
        bool           Active_object;



};
