#pragma once
#include <System/System.h>
#include <System/Threading/Thread.h>
#include <System/Console.h>

using namespace System::Threading;
using namespace System;
namespace Threads {
	class Program : public virtual Object
	{
		public:
			static void Main(String* args[]);
		public:
			void Run();
		public:
			void target1();
		public:
			void target2();
	};
}
