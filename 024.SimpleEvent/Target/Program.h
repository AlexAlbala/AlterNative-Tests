#pragma once
#include "System/System.h"
#include "SimpleEventClass.h"
#include "System/Console.h"

using namespace System;
namespace SimpleEvent {
	class Program : public virtual Object
	{
		public:
			static void Main(String* args[]);
		public:
			void Run();
		private:
			void se_simpleEvent(int a, float b);
	};
}
