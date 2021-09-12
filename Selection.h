//---------------------------------------------------------------------------

#ifndef SelectionH
#define SelectionH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TSelection_F : public TForm
{
__published:	// IDE-managed Components
	TPanel *Selection_P;
	TPageControl *Control_TSh;
	TTabSheet *Site_TSh;
	TTabSheet *Mail_TSh;
	TTabSheet *Mobile_TSh;
	TTabSheet *ICloud_TSh;
	TTabSheet *PlayMarket_TSh;
	TTabSheet *Computer_TSh;
	TTabSheet *Paycard;
	TTabSheet *Docfile_TSh;
private:	// User declarations
public:		// User declarations
	__fastcall TSelection_F(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSelection_F *Selection_F;
//---------------------------------------------------------------------------
#endif
