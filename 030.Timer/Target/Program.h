#pragma once
#include "System/System.h"
#include "System/Threading/Timer.h"
#include "System/Console.h"
#include "System/DateTime.h"
#include "System/Threading/Thread.h"

using namespace System::Threading;
using namespace System;
namespace TimerTest {
	class Program : public virtual Object
	{
		public:
			static void Main(String* args[]);
		public:
			void Run();
		public:
			void timer_elapsed(Object* state);
	};
}
