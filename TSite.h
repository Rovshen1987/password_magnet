#pragma once
#include "TPerson.h"
#include "TGajet.h"

class TSite:: public TGadjet, public TPerson
{
  public:
		  TSite();
		 ~TSite();

		 AnsiString get_path_name();
		 void       set_host(const AnsiString& set);
		 AnsiString get_host();

 protected:
		 AnsiString Host;

 private:
		const AnsiString Path_name = "TSite";
};
