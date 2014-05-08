#pragma once
#include <System/System.h>
#include <System/events.h>

using namespace System;
namespace SimpleEvent {
	class SimpleEventClass : public virtual Object
	{
		public:
			DELEGATE(void, int, float) SimpleEventHandler;
		public:
			EVENT(simpleEvent, void, int, float);
		public:
			void Start();
		public:
			SimpleEventClass();
	};
}
