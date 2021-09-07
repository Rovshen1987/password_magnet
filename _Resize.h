#pragma once
#include <vector>
#include <memory>
#include <Vcl.DBGrids.hpp>


class _Resize
{
public:
	_Resize();
    _Resize(const int& min_width, const int& max_width, const int& value, TPanel* object_panel);
	~_Resize();
	void Add(TDBEdit* obj);
	void Clear();
	void Connect();
	void Disconnect();
	void Automatic(const int& Panel_width);
	void set_min_width();
	void set_max_width();
	void set_min_width_P(const int& value);
    bool get_active();

private:
   std::unique_ptr<std::vector<TDBEdit*>> object_dbedit;

   TPanel*        object_panel;
   int            min_width;
   int            max_width;
   int            min_width_P;
   bool           active;

   void  Automatic_inside(const int& width);
};
