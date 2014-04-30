#pragma once
#include "System/System.h"
#include "System/Collections/Generic/Dictionary.h"
#include "System/Console.h"
#include "A.h"
#include "B.h"

using namespace System::Collections::Generic;
using namespace System;
namespace Dictionary {
	class Program : public virtual Object
	{
		public:
			static void Main(String* args[]);
		private:
			void Run();
	};
}
