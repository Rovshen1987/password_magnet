#include "Add_columns_r.h"


Add_columns_r::Add_columns_r(TDBGrid* object)
{
 this->Grid = object;
};

Add_columns_r::Add_columns_r()
{

};

Add_columns_r::~Add_columns_r()
{
  this->Grid = 0;

  delete this->Grid;
};


//------------------------------------------------------------------------------
void Add_columns_r::new_col(const AnsiString& FieldName, const AnsiString& Title_Caption, const int& Width )
{
   int id = 0;
   this->Grid->Columns->Add();

   id = this->Grid->Columns->Count;
   id--;
   this->Grid->Columns->Items[id]->FieldName = FieldName;
   this->Grid->Columns->Items[id]->Title->Caption = Title_Caption;
   this->Grid->Columns->Items[id]->Width = Width;
};


//------------------------------------------------------------------------------
void Add_columns_r::edit_col(const int& id, const AnsiString& FieldName, const AnsiString& Title_Caption, const int& Width )
{
   this->Grid->Columns->Items[id]->FieldName = FieldName;
   this->Grid->Columns->Items[id]->Title->Caption = Title_Caption;
   this->Grid->Columns->Items[id]->Width = Width;
};

//------------------------------------------------------------------------------
void Add_columns_r::clear_item()
{
  int count = this->Grid->Columns->Count;

  for (int i = count; i > 0; i--)
  {
   this->Grid->Columns->Delete((count-1));
  };
};

//------------------------------------------------------------------------------
void Add_columns_r::set_Grid(TDBGrid* object)
{
   this->Grid = object;
};

//------------------------------------------------------------------------------
void Add_columns_r::un_set_Grid(TDBGrid* object)
{
   this->Grid = 0;
};
