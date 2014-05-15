#include "Program.h"
namespace RecursiveAssemblies {
	void Program::Main(String* args[]){
		MyDepth1Class* c = new MyDepth1Class();
		String* message = c->Ping(new String("Hello World"));
		Console::WriteLine(new String("Sending Hello World..."));
		Console::WriteLine(message);
	}

}
