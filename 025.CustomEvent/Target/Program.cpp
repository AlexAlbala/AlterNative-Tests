#include "Program.h"
namespace CustomEvent {
	void Program::Main(String* args[]){
		Program* p = new Program();
		p->Run();
	}
	void Program::Run()
	{
		CustomEventClass* cec = new CustomEventClass();
		cec->addcustomEvent(new CustomEventClass::CustomEventHandler(DELEGATE_FUNC(Program::cec_customEvent, _1, _2)));
		cec->addcustomEvent(new CustomEventClass::CustomEventHandler(DELEGATE_FUNC(Program::cec_customEvent2, _1, _2)));
		cec->RaiseEvent(3, (float)5);
		cec->removecustomEvent(new CustomEventClass::CustomEventHandler(DELEGATE_FUNC(Program::cec_customEvent, _1, _2)));
		cec->RaiseEvent(2, (float)8);
	}
	void Program::cec_customEvent(int a, float b)
	{
		Console::WriteLine(new String("1: Event raised"));
		Console::WriteLine(a);
		Console::WriteLine(b);
	}
	void Program::cec_customEvent2(int a, float b)
	{
		Console::WriteLine(new String("2: Event raised"));
		Console::WriteLine(a);
		Console::WriteLine(b);
	}

}
