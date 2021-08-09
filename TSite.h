#pragma once
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include "Add_columns_r.h"
#include <memory>



class TSite
{
  public:
//		 TSite() = delete;
		 TSite();
		~TSite();

		 void          set_ADO_query_o(TADOQuery* object);
		 void          set_DB_grid_o(TDBGrid* object);

         void          set_ID_DBE(TDBEdit* object);
		 void          set_Host_DBE(TDBEdit* object);
		 void          set_Login_DBE(TDBEdit* object);
		 void          set_Password_DBE(TDBEdit* object);
		 void          set_Mail_DBE(TDBEdit* object);
		 void          set_Registration_date_DBE(TDBEdit* object);

		 void          set_First_name_DBE(TDBEdit* object);
		 void          set_Last_name_DBE(TDBEdit* object);
		 void          set_Year_of_birth_DBE(TDBEdit* object);
		 void          set_Gender_of_person_DBE(TDBEdit* object);
		 void          set_Place_of_birth_DBE(TDBEdit* object);
		 void          set_Country_DBE(TDBEdit* object);
		 void          set_City_DBE(TDBEdit* object);
		 void          set_Address_registration_DBE(TDBEdit* object);
		 void          set_Place_of_resindece_DBE(TDBEdit* object);
		 void          set_Home_telephone_DBE(TDBEdit* object);
		 void          set_Mobile_telephone_DBE(TDBEdit* object);

         void          set_Active_object(const bool& set);

		 AnsiString    get_path_name();
		 bool          get_Active_object();
		 bool          get_Active_object_columns_run();
         bool          get_selected_all_object();

		 void          null_all_object_point();
		 void          columns_run();

//		 AnsiString    get_Host();

 protected:

		 TADOQuery*    ADO_query_o;
		 TDBGrid*      DB_grid_o;
//----------------------------------------------
		 TDBEdit*      ID_DBE;
		 TDBEdit*      Host_DBE;
		 TDBEdit*      Login_DBE;
		 TDBEdit*      Password_DBE;
		 TDBEdit*      Mail_DBE;
		 TDBEdit*      Registration_date_DBE;
//----------------------------------------------
		 TDBEdit*      First_name_DBE;
		 TDBEdit*      Last_name_DBE;
		 TDBEdit*      Year_of_birth_DBE;
		 TDBEdit*      Gender_of_person_DBE;
		 TDBEdit*      Place_of_birth_DBE;
		 TDBEdit*      Country_DBE;
		 TDBEdit*      City_DBE;
		 TDBEdit*      Address_registration_DBE;
		 TDBEdit*      Place_of_resindece_DBE;
		 TDBEdit*      Home_telephone_DBE;
		 TDBEdit*      Mobile_telephone_DBE;
//-------------------------------------------

 private:
		const AnsiString Path_name = "TSite";

		bool           Active_object;
		bool           Active_object_columns_run;

		std::unique_ptr<Add_columns_r> columns;

        void           Selected_field();


};
