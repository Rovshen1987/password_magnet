#pragma once
#include "TPerson.h"
#include "TGadjet.h"
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>



class TSite: public TGadjet, public TPerson
{
  public:
		 TSite() = delete;
		 TSite(TForm* object);
		~TSite();

		 void set_ADO_query_o(TADOQuery* object);
		 void set_DB_grid_o(TDBGrid* object);
		 void set_Host(const AnsiString& set);

		 AnsiString  get_path_name();

		 AnsiString  get_Host();

 protected:
		 AnsiString   Host;
		 TADOQuery*   ADO_query_o;
		 TDBGrid*     DB_grid_o;

 private:
		const AnsiString Path_name = "TSite";




};
