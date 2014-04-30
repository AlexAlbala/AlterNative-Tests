#include "Program.h"
namespace FileReadWriteAll {
	void Program::Main(String* args[]){
		Program* p = new Program();
		p->Run();
	}
	void Program::Run()
	{
		File::WriteAllText(new String("test.txt"), new String("Hello I'm a pice of Text!And I'm a breaked line!"));
		Console::WriteLine(File::ReadAllText(new String("test.txt")));
	}

}
