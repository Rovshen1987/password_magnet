#pragma once
#include "vector"
#include <Data.Win.ADODB.hpp>
#include <memory>

class _SQL
{
public:
		_SQL() = delete;
		_SQL(TADOQuery* ADOQuery, const AnsiString& Table_name, const bool& Sort_up = true);
		~_SQL();

		void Add(const AnsiString& field);
		void Add(const std::tuple<AnsiString, AnsiString, bool, bool>& value);
		//touple: 0 = Field name(AnsiString); 1 = value(AnsiString);
		// 2 = First Field(bool); 3 = the sorting will be based on this field(bool true == BY ORDER ASC);

		void Add(const std::tuple<AnsiString, int, int, bool, bool>& value);
		//touple: 0 = Field name(AnsiString); 1 = First value(AnsiString); 2 = Last value(AnsiString);
		// 3 = First Field(bool); 4 = the sorting will be based on this field(bool true == BY ORDER ASC);

		void Add(const std::tuple<AnsiString, TDate, TDate, bool, bool>& value);
		//touple: 0 = Field name(AnsiString); 1 = First value(AnsiString); 2 = Last value(AnsiString);
		// 3 = First Field(bool); 4 = the sorting will be based on this field(bool true == BY ORDER ASC);

		void set_Sort_field(const bool& Sort_up);

		void set_Active(const bool& value);
		bool get_Active();

		void Order_general();

		void Order_clear();

		void Sort_field_run(const AnsiString& Field);

        bool Field_not_null();

private:
//Varrible
		TADOQuery*               								ADOQuery;
		std::unique_ptr<std::vector<AnsiString>>  				Field;
		AnsiString               								Table_name;
		AnsiString               								Sort_field;
		bool                     								Sort_up;
		AnsiString               								_SQL_command;
		bool                                                    Active;

		std::unique_ptr<std::vector<AnsiString>>                Temp_last_sql;

//Function

		bool check_tuple_string(const AnsiString& value);
		void order_part_one();
		void order_part_one_toxiciity_1(const int& Field_size, AnsiString& temp);
		void order_part_ORDER_BY();

		AnsiString check_normal_date(TDate& date);


		std::string& check_normal_char(std::string& obj, const char& value, const char& past);
		AnsiString& check_normal_AnsiString(AnsiString& obj, const char& value, const char& past);
		AnsiString& past_slesh_for_date(AnsiString& obj);

		bool& swap_places(bool& value);
		void Sql_text_rewrite();



};
