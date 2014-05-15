#pragma once
#include <System/System.h>

using namespace System;
namespace Depth2 {
	class MyDepth2Class : public virtual Object
	{
		public:
			String* Ping(String* message);
	};
}
