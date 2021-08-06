
#include "direct_r.h"

direct_r::direct_r(){};
direct_r::~direct_r(){};

string direct_r::get_path()
{
   char current_work_dir[FILENAME_MAX];
   _getcwd(current_work_dir, sizeof(current_work_dir));
   return string(current_work_dir)+ string("\\");

};

string direct_r::get_path(string folder_name)
{
   char current_work_dir[FILENAME_MAX];
   _getcwd(current_work_dir, sizeof(current_work_dir));
   return string(current_work_dir)+ string("\\")+ folder_name + string("\\");

};


char direct_r::get_drive()
{
   char result;
   std::string temp = this->get_path();

   result = temp[0];
   return result;
};


bool direct_r::check_file(std::string& value)
{
  	std::string temp;
	bool result;


	temp = value.c_str();
	ifstream f(temp);

	if (f.is_open())
	{
	 result = true;
	}
	else
	{
	 result = false;
	};

	return result;

};

bool direct_r::check_file(std::string&& value)
{
  	std::string temp;
	bool result;


	temp = value.c_str();
	ifstream f(temp);

	if (f.is_open())
	{
	 result = true;
	}
	else
	{
	 result = false;
	};

	return result;

};

bool direct_r::check_file(AnsiString&& value)
{
  	std::string temp;
	bool result;


	temp = value.c_str();
	ifstream f(temp);

	if (f.is_open())
	{
	 result = true;
	}
	else
	{
	 result = false;
	};

	return result;

};

void direct_r::create_folder_in_prog(std::string folder_name, bool __default)
{
	std::string path = "";
	if (__default == true)
	{
	path = this->get_path(folder_name);
	}
	else
	{
	path = folder_name;
	}


	if (!std::filesystem::is_directory(this->true_slesh(path)))
	{
	std::filesystem::create_directory(this->true_slesh(path));

	};
};

std::string direct_r::true_slesh(std::string folder_name)
{
  std::string result = "";



  for (int i = 0; i < folder_name.length(); i++)
  {
	 if ((folder_name[i] == 92) and (folder_name[i+1] == 92))
	 {
       continue;
	 }

	if (folder_name[i] == 92)
	{
	  result = result + '/';;
	  continue;
	}
	 result = result + folder_name[i];
  };

  return result;
};
