#pragma once
#include <System/System.h>
#include <System/Console.h>
#include <System/Delegate.h>

using namespace System;
namespace CustomEvent {
	class CustomEventClass : public virtual Object
	{
		public:
			DELEGATE(void, int, float) CustomEventHandler;
		private:
			CustomEventClass::CustomEventHandler* myPrivateEvent;
		public:
			void addcustomEvent(CustomEventClass::CustomEventHandler* value);
		public:
			void removecustomEvent(CustomEventClass::CustomEventHandler* value);
		public:
			void RaiseEvent(int a, float b);
	};
}
