#pragma once
#include <vector>
#include "_Resize_inside.h"

template<class T>
class _Resize
{
  public:
		 _Resize()
		  {
		   this->date = new std::vector<_Resize_inside<T>*>;
		  };
		 ~_Resize()
		 {
		  if (this->date->empty()== false)
		  {
		   for (auto y : this->date)
		   {
			delete y;
		   }
		   this->date->clear();
		  }
		 };


  void add_object(T* object, const int& new_left, const int& new_top,
					const int& new_width, const int& new_height, const bool visible)
  {
   this->date->push_back(object, new_left, new_top, new_width, new_height, true);
  }

  void visible_true_position()
  {
	if (this->date->empty() == false)
	{
	  for (auto y : this->date)
	  {
	   y->visible_true_position();
	  };
	};
  };

  void visible_false_position()
  {
	if (this->date->empty() == false)
	{
	  for (auto y : this->date)
	  {
	   y->visible_false_position();
	  };
	};
  };

  private:

  std::vector<_Resize_inside<T>*>* date;
};
