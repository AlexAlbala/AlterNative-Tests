#pragma once
#include <System/System.h>
#include "MyDepth2Class.h"

using namespace Depth2;
using namespace System;
namespace Depth1 {
	class MyDepth1Class : public virtual Object
	{
		private:
			MyDepth2Class* c;
		public:
			String* Ping(String* message);
		public:
			MyDepth1Class();
	};
}
