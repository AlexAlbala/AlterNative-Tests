#include "CustomEventClass.h"
namespace CustomEvent {
	//Delegate declaration moved to header file
	void CustomEventClass::addcustomEvent(CustomEventClass::CustomEventHandler* value){
		Console::WriteLine(new String("I'm adding a delegate "));
		this->myPrivateEvent = (CustomEventClass::CustomEventHandler*)(Delegate::Combine(this->myPrivateEvent, value));
	}
	void CustomEventClass::removecustomEvent(CustomEventClass::CustomEventHandler* value)
	{
		Console::WriteLine(new String("I'm removing a delegate"));
		this->myPrivateEvent = (CustomEventClass::CustomEventHandler*)(Delegate::Remove(this->myPrivateEvent, value));
	}

	void CustomEventClass::RaiseEvent(int a, float b)
	{
		if (this->myPrivateEvent != null) {
			DELEGATE_INVOKE(this->myPrivateEvent, a, b);
		}
	}

}
