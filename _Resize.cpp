
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
_Resize::_Resize(const int& min_width, const int& max_width, const int& value, TPanel* object_panel)
{
  this->min_width     = min_width;
  this->max_width     = max_width;
  this->min_width_P   = value;
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
int width, width_plus, temp;
width = 0;

   temp  = Panel_width - 230;
//   temp  = Panel_width - this->min_width_P;
   width_plus = temp;

  if ((this->max_width >= width_plus) and (this->min_width <= width_plus))
  {
   width = width_plus;
  };

  if (this->min_width > width_plus)
  {
   width = this->min_width;
  };

  if (this->max_width < width_plus) {
   width = this->max_width;
  }

  this->Automatic_inside(width);
};

//------------------------------------------------------------------------------
void _Resize::set_min_width_P(const int& value)
{
   this->min_width_P = value;
};

//------------------------------------------------------------------------------
bool _Resize::get_active()
{
   return this->active;
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
