/***********************************************************************************
          _ _            _   _       _   _           
    /\   | | |          | \ | |     | | (_)          
   /  \  | | |_ ___ _ __|  \| | __ _| |_ ___   _____ 
  / /\ \ | | __/ _ \ '__| . ` |/ _` | __| \ \ / / _ \
 / ____ \| | ||  __/ |  | |\  | (_| | |_| |\ V /  __/
/_/    \_\_|\__\___|_|  |_| \_|\__,_|\__|_| \_/ \___|
-----------------------------------------------------

This code has been generated by AlterNative translator

Permission is hereby granted, free of charge, to any person obtaining a copy of this
code.

   contact: alejandro.albala@upc.edu
   web: http://alexalbala.github.io/Alter-Native/
   github: https://github.com/AlexAlbala/Alter-Native
   
AlterNative @ 2014

***********************************************************************************/

#pragma once
#include <System/System.h>
#include <System/Console.h>
#include "MyClassB.h"

using namespace System;
namespace Properties {
	class MyClassA : public virtual Object
	{
		private:
			int _data;
		public:
			int getdata();
		public:
			void setdata(int value);
		public:
			int getEmptyProperty();
		public:
			void setEmptyProperty(int value);
		public:
			void CallProperties();
		public:
			int EmptyProperty_var;
		public:
			MyClassA();
	};
}
