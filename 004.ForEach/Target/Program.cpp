#include "Program.h"
namespace ForEach {
	void Program::Main(String* args[]){
		List_T<float>* myList = new List_T<float>();
		myList->Add((float)5.6);
		myList->Add((float)5.7);
		myList->Add((float)5.2);
		myList->Add((float)5.9);
		myList->Add((float)3.6);
		myList->Add((float)52.6);
		myList->Add((float)523.6);
		FOREACH(_F, myList){
			float f = *_F;
			Console::WriteLine(f);
		}
		List_T<A>* myAList = new List_T<A>();
		myAList->Add(new A());
		myAList->Add(new A());
		FOREACH(_A, myAList) {
			A deref_a = *_A;
			A* a = &deref_a;
			a->f();
		}
	}

}
