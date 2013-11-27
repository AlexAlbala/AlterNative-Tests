#include "Program.h"
namespace Threads {
	void Program::Main(String* args[]){
		Program* p = new Program();
		p->Run();
	}
	void Program::Run()
	{
		Thread* th = new Thread(new ThreadStart(DELEGATE_FUNC(Program::target1)));
		Thread* th2 = new Thread(new ThreadStart(DELEGATE_FUNC(Program::target2)));
		Console::WriteLine(new String("Start threads"));
		th->Start();
		th2->Start();
		Thread::Sleep(5000);
		Console::WriteLine(new String("Abort Target 2"));
		th2->Abort();
		Console::WriteLine(new String("Wait for Target 1 to finish (15 iterations)"));
		th->Join();
		Console::WriteLine(new String("Finished"));
	}
	void Program::target1()
	{
		int i = 0;
		while (i < 15) {
			Console::Write(new String("Target 1 - "));
			Console::WriteLine(i++);
			Thread::Sleep(1000);
		}
	}
	void Program::target2()
	{
		int i = 0;
		while (i < 15) {
			Console::Write(new String("Target 2 - "));
			Console::WriteLine(i++);
			Thread::Sleep(1000);
		}
	}

}
