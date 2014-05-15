#pragma once
#include <System/System.h>
#include "MyDepth1Class.h"
#include <System/Console.h>

using namespace Depth1;
using namespace System;
namespace RecursiveAssemblies {
	class Program : public virtual Object
	{
		public:
			static void Main(String* args[]);
	};
}
