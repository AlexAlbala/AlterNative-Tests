#pragma once
#include "System/System.h"
#include "CustomEventClass.h"
#include "System/Console.h"

using namespace System;
namespace CustomEvent {
	class Program : public virtual Object
	{
		public:
			static void Main(String* args[]);
		private:
			void Run();
		private:
			void cec_customEvent(int a, float b);
		private:
			void cec_customEvent2(int a, float b);
	};
}
