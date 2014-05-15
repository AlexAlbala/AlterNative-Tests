#include "MyDepth1Class.h"
namespace Depth1 {
	String* MyDepth1Class::Ping(String* message){
		return this->c->Ping(message);
	}
	MyDepth1Class::MyDepth1Class()
	{
		c = new MyDepth2Class();
	}

}
