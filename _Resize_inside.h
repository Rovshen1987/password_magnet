#pragma once

template <class T>
class _Resize_inside
{
 public:
 //-----------------------------Constructor-------------------------------------
		_Resize_inside() = delete;
		_Resize_inside(const _Resize_inside& object) = delete;
		_Resize_inside(T* object, const int& new_left, const int& new_top,
					   const int& new_width, const int& new_height, const bool visible)
		{
		 this->T          = object;
		 this->new_left   = new_left;
		 this->new_top    = new_top;
		 this->new_width  = new_width;
		 this->new_height = new_height;
		 this->visable    = visible;
		};

//----------------------------------Destructor----------------------------------
		~_Resize_inside()
		{
		 this->T            = 0;
		 this->new_left     = 0;
		 this->new_top      = 0;
		 this->new_width    = 0;
		 this->new_height   = 0;
		 this->visible      = 0;
		}

//---------------------------------Set------------------------------------------
 void set_visable(const bool& visible)
 {
   this->visible = visible;
 };

 //------------------------------------------------------------------------------
 bool get_visable()
 {
  return this->visable;
 };

 //------------------------------------------------------------------------------
void visible_true_position(bool visible = true)
{
	this->T->Left   = this->new_left;
	this->T->Top    = this->new_top;
	this->T->Width  = this->new_width;
	this->T->Height = this->new_height;

	if (visible)
	{
	 this->T->Visible = true;
	}
	else
	{
	 this->T->Visible = false;
	}
};

 //------------------------------------------------------------------------------

void visible_false_position(bool visible = false)
{
	this->T->Left   = this->old_left;
	this->T->Top    = this->old_top;
	this->T->Width  = this->old_width;
	this->T->Height = this->old_height;

	if (visible)
	{
	 this->T->Visible = true;
	}
	else
	{
	 this->T->Visible = false;
	}
};

//---------------------------------PRIVATE--------------------------------------
 private:

		T*         object;
  const int        old_left   = -100;
  const	int        old_top    = -100;
  const	int        old_width  = 10;
  const	int        old_height = 10;
		int        new_left;
		int        new_top;
		int        new_width;
		int        new_height;
		bool       visible;


};
