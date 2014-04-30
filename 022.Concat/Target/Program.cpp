#include "Program.h"
namespace ConsoleApplication1 {
	void Program::Main(String* args[]){
		String* b = new String("Hello");
		String* c = new String(" ");
		String* d = new String("World!");
		Array<String>* array = new Array<String>(3);
		array->SetData(0, b);
		array->SetData(1, c);
		array->SetData(2, d);
		String* a = String::Concat(array);
		Console::WriteLine(a);
	}

}
