#pragma once
#include <System/System.h>
#include <System/Console.h>
#include <System/Delegate.h>

using namespace System;
namespace Delegates {
	class DelegatesTest : public virtual Object
	{
		private:
			DELEGATE(void) Target1Del;
		private:
			DELEGATE(int, int) TargetIntInt;
		public:
			void Test();
		public:
			void Target1();
		public:
			void Target2();
		public:
			int Target3(int i);
	};
}
