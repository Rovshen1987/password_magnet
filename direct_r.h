
#pragma once
#include <iostream>
#include <string>
#include <direct.h>
#include <fstream>
#include <System.hpp>
#include <filesystem>
#include <vcl.h>
#include <Vcl.ComCtrls.hpp>


using string = std::string;

class direct_r
{

   public:
		 direct_r();
		 ~direct_r();

   string get_path();
   string get_path(string folder_name);
   char get_drive();

   template<class T>
   std::string operator=(const T& value)
   {
	std::string s = value.c_str();
    return s;
   };

   bool check_file(std::string& value);
   bool check_file(std::string&& value);
   bool check_file(AnsiString&& value);


   void  create_folder_in_prog(std::string folder_name, bool __default);
   private:
   std::string true_slesh(std::string folder_name);



};