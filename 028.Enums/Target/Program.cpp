#include "Program.h"
namespace Enums {
	void Program::Main(){
		MyEnum e = MyEnum::NONE;
		if (e == MyEnum::NONE){
			Console::WriteLine(new String("Uquality working"));
		}
		e = MyEnum::ONE;
		Console::WriteLine(new String("case 1 -> should print \"ONE\": "));
		Console::WriteLine(BOX<MyEnum>(e));
		int result = (int)(e);
		Console::WriteLine(new String("case 2 -> should print \"1\": "));
		Console::WriteLine(result);
		MyIncompleteEnum ie = MyIncompleteEnum::SEVEN;
		if (ie == MyIncompleteEnum::SEVEN) {
			Console::WriteLine(new String("Uquality working"));
		}
		ie = MyIncompleteEnum::SEVEN;
		Console::WriteLine(new String("case 3 -> should print \"SEVEN\": "));
		Console::WriteLine(BOX<MyIncompleteEnum>(ie));
		int result2 = (int)(ie);
		Console::WriteLine(new String("case 4 -> should print \"7\": "));
		Console::WriteLine(result2);
		MyDisorderedEnum de = MyDisorderedEnum::ONE;
		if (de == MyDisorderedEnum::ONE) {
			Console::WriteLine(new String("Uquality working"));
		}
		de = MyDisorderedEnum::ONE;
		Console::WriteLine(new String("case 5 -> should print \"ONE\": "));
		Console::WriteLine(BOX<MyDisorderedEnum>(de));
		int result3 = (int)(de);
		Console::WriteLine(new String("case 6 -> should print \"1\": "));
		Console::WriteLine(result3);
	}

}
