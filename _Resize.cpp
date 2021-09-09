
#include "_Resize.h"

//---------------------------Constructor---------------------------------------
_Resize::_Resize()
{
  this->min_width = 0;
  this->max_width = 0;
  this->active    = false;
  this->object_dbedit    = std::make_unique<std::vector<TDBEdit*>>();
};

//---------------------------Constructor- 2 ------------------------------------
_Resize::_Resize(const int& min_width, const int& max_width, const int& indent, TPanel* object_panel)
{
  this->min_width     = min_width;
  this->max_width     = max_width;
  this->indent        = indent;
  this->active        = false;
  this->object_panel  = object_panel;
  this->object_dbedit      = std::make_unique<std::vector<TDBEdit*>>();
};

//---------------------------Destructor---------------------------------------
_Resize::~_Resize()
{
  Clear();
};
							   //PUBLIC SECTION
//------------------------------------------------------------------------------
void _Resize::Add(TDBEdit* obj)
{
	this->object_dbedit->push_back(obj);
};

//------------------------------------------------------------------------------
void _Resize::Clear()
{

   for (auto i = this->object_dbedit->begin(); i != this->object_dbedit->end(); i++)
   {
	 *i = 0;
   };

   this->object_panel = 0;
   delete this->object_panel;
   this->object_dbedit->clear();
};

//------------------------------------------------------------------------------
void _Resize::Connect()
{
   if (this->active == true)
   {
	return;
   }
   else
   {
	this->active = true;
   };
};

//------------------------------------------------------------------------------
void _Resize::Disconnect()
{
   if (this->active == false)
   {
	return;
   }
   else
   {
	this->active = false;
   };
};

//------------------------------------------------------------------------------
void _Resize::Automatic(const int& Panel_width)
{
   if (this->active == false)
   {
	return;
   }

int width, temp;
width = 0;

   temp  = Panel_width - this->indent;

  if ((this->max_width >= temp) and (this->min_width <= temp))
  {
   width = temp;
  };

  if (this->min_width > temp)
  {
   width = this->min_width;
  };

  if (this->max_width < temp) {
   width = this->max_width;
  }

  this->Automatic_inside(width);
};

//------------------------------------------------------------------------------
void _Resize::set_indent(const int& indent)
{
   this->indent = indent;
};

//------------------------------------------------------------------------------
void _Resize::set_min_width(const int& min_width)
{
   this->min_width = min_width;
};

//------------------------------------------------------------------------------
void _Resize::set_max_width(const int& max_width)
{
    this->min_width = max_width;
};

//------------------------------------------------------------------------------
bool _Resize::get_active()
{
   return this->active;
};

bool _Resize::all_point_true()
{
  if ((this->object_dbedit->empty() != false) or (this->object_panel != 0))
  {
	return true;
  }
  else
  {
	return false;
  }
};


							//PRIVATE SECTION
//------------------------------------------------------------------------------
void _Resize::Automatic_inside(const int& width)
{
  for (auto i = this->object_dbedit->begin(); i != this->object_dbedit->end(); i++)
  {
   (*i)->Width = width;
  };
};

//------------------------------------------------------------------------------

