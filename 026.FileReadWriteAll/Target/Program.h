#pragma once
#include "System/System.h"
#include "System/IO/File.h"
#include "System/Console.h"

using namespace System::IO;
using namespace System;
namespace FileReadWriteAll {
	class Program : public virtual Object
	{
		public:
			static void Main(String* args[]);
		private:
			void Run();
	};
}
