#include "DelegatesTest.h"
namespace Delegates {
	//Delegate declaration moved to header file
	//Delegate declaration moved to header file
	void DelegatesTest::Test(){
		Console::WriteLine(new String("One delegate"));
		DelegatesTest::Target1Del* targ = new DelegatesTest::Target1Del(DELEGATE_FUNC(DelegatesTest::Target1));
		DELEGATE_INVOKE(targ);
		Console::WriteLine(new String("Other delegate"));
		targ = new DelegatesTest::Target1Del(DELEGATE_FUNC(DelegatesTest::Target2));
		DELEGATE_INVOKE(targ);
		Console::WriteLine(new String("Now multicast"));
		targ = new DelegatesTest::Target1Del(DELEGATE_FUNC(DelegatesTest::Target1));
		targ = (DelegatesTest::Target1Del*)(Delegate::Combine(targ, new DelegatesTest::Target1Del(DELEGATE_FUNC(DelegatesTest::Target2))));
		DELEGATE_INVOKE(targ);
		Console::WriteLine(new String("Now with parameters"));
		DelegatesTest::TargetIntInt* targInt = new DelegatesTest::TargetIntInt(DELEGATE_FUNC(DelegatesTest::Target3, _1));
		int a = DELEGATE_INVOKE(targInt, 10);
		Console::WriteLine(a);
	}
	void DelegatesTest::Target1()
	{
		Console::WriteLine(new String("Hello"));
	}
	void DelegatesTest::Target2()
	{
		Console::WriteLine(new String("World"));
	}
	int DelegatesTest::Target3(int i)
	{
		return i;
	}

}
