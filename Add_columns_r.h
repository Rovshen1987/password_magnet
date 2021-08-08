#pragma once
#include <Vcl.DBGrids.hpp>
#include <memory>


class Add_columns_r
{
 public:
		 Add_columns_r(TDBGrid* object);
		 Add_columns_r();
		~Add_columns_r();

		void new_col(const AnsiString& FieldName, const AnsiString& Title_Caption, const int& Width );
		void edit_col(const int& id, const AnsiString& FieldName, const AnsiString& Title_Caption, const int& Width );
		void clear_item();

		void set_Grid(TDBGrid* object);
		void un_set_Grid(TDBGrid* object);

 private:
		 TDBGrid* Grid;

};
