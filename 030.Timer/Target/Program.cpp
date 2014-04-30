#include "Program.h"
namespace TimerTest {
	void Program::Main(String* args[]){
		Program* p = new Program();
		p->Run();
	}
	void Program::Run()
	{
		Timer* t = new Timer(new TimerCallback(DELEGATE_FUNC(Program::timer_elapsed, _1)));
		Console::WriteLine(new String("Starting timer at: "));
		Console::WriteLine(BOX<DateTime*>(DateTime::getNow()));
		t->Change(1000, 1000);
		Thread::Sleep(5000);
		t->Dispose();
	}
	void Program::timer_elapsed(Object* state)
	{
		Console::Write(new String("Timer elapsed: "));
		Console::WriteLine(BOX<DateTime*>(DateTime::getNow()));
	}

}
