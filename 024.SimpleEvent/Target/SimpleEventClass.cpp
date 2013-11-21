#include "SimpleEventClass.h"
namespace SimpleEvent {
	//Delegate declaration moved to header file
	//Event declaration moved to header file
	void SimpleEventClass::Start(){
		for (int a = 0; a < 10; a += 1){
			if (this->simpleEvent != null){
				EVENT_FIRE(this->simpleEvent, a, (float)(a + a));
			}
		}
	}
	SimpleEventClass::SimpleEventClass()
	{
		EVENT_INIT(SimpleEventClass::SimpleEventHandler, simpleEvent);
	}

}
