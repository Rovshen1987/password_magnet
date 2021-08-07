#pragma once
#include <vcl.h>

class Navigator
{
public:
	 Navigator();
	~Navigator();

     void set_Sait_L(TLabel* object);
	 void set_Mobile_L(TLabel* object);
	 void set_ICloud_L(TLabel* object);
	 void set_PlayMarker_L(TLabel* object);
	 void set_Computer_L(TLabel* object);
	 void set_Pay_card_L(TLabel* object);

	 void object_click(const AnsiString& name_object);

	 bool get_Sait_BOOL();
	 bool get_Mobile_BOOL();
	 bool get_ICloud_BOOL();
	 bool get_PlayMarker_BOOL();
	 bool get_Computer_BOOL();
	 bool get_Pay_card_BOOL();


private:
	 TLabel* Sait_L;
	 TLabel* Mobile_L;
	 TLabel* ICloud_L;
	 TLabel* PlayMarker_L;
	 TLabel* Computer_L;
	 TLabel* Pay_card_L;

	 bool Sait_BOOL;
	 bool Mobile_BOOL;
	 bool ICloud_BOOL;
	 bool PlayMarker_BOOL;
	 bool Computer_BOOL;
	 bool Pay_card_BOOL;

	 int  ged_id_object(const AnsiString& name_object);
	 void ged_id_object_inside();

	 void Sait_BUTTON();
	 void Mobile_BUTTON();
	 void ICloud_BUTTON();
	 void PlayMarker_BUTTON();
	 void Computer_BUTTON();
	 void Pay_card_BUTTON();


};
