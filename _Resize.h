#pragma once
#include <vector>
#include <memory>
#include <Vcl.DBGrids.hpp>


class _Resize
{
public:
	_Resize();
	_Resize(const int& min_width, const int& max_width, const int& indent, TPanel* object_panel);
	~_Resize();
	void Add(TDBEdit* obj);
	void Clear();
	void Connect();
	void Disconnect();
	void Automatic(const int& Panel_width);
	void set_min_width(const int& min_width);
	void set_max_width(const int& max_width);
	void set_indent(const int& indent);
	bool get_active();
	bool all_point_true();

private:
   std::unique_ptr<std::vector<TDBEdit*>> object_dbedit;

   TPanel*        object_panel;
   int            min_width;
   int            max_width;
   int            indent;
   bool           active;


   void  Automatic_inside(const int& width);
};
