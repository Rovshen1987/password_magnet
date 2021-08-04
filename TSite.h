#pragma once
#include "TPerson.h"
#include "TGajet.h"

class TSite:: public TGadjet, public TPerson
{
  public:
		 TSite();
		 ~TSite();

 private:
		 AnsiString Host;
};
