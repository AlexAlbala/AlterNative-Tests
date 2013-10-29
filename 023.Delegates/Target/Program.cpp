#include "Program.h"
namespace Delegates {
	void Program::Main(String* args[]){
		DelegatesTest* d = new DelegatesTest();
		d->Test();
	}

}
