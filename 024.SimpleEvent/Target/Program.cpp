#include "Program.h"
namespace SimpleEvent {
	void Program::Main(String* args[]){
		Program* p = new Program();
		p->Run();
	}
	void Program::Run()
	{
		SimpleEventClass* se = new SimpleEventClass();
		Console::WriteLine(new String("Created event"));
		se->simpleEvent += new SimpleEventClass::SimpleEventHandler(DELEGATE_FUNC(Program::se_simpleEvent, _1, _2));
		Console::WriteLine(new String("Subscribed"));
		Console::WriteLine(new String("I will fire 10 events just now !"));
		se->Start();
	}
	void Program::se_simpleEvent(int a, float b)
	{
		Console::WriteLine(new String("Event fired"));
		Console::WriteLine(a);
		Console::WriteLine(b);
	}

}
