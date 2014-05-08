#pragma once
#include <System/System.h>
#include <System/Console.h>

using namespace System;
namespace NestedClasses {
	class ParentClass : public virtual Object
	{
		public:
		class NestedClass1 : public virtual Object
		{
			public:
			void f()
			{
				Console::WriteLine(new String("NestedClass1"));
			}
		};
		public:
		class NestedClass2 : public virtual Object
		{
			public:
			class NestedClass3 : public virtual Object
			{
				public:
				void f()
				{
					Console::WriteLine(new String("NestedClass3"));
				}
			};
			public:
			void f()
			{
				Console::WriteLine(new String("NestedClass2"));
			}
		};
		public:
			void f();
	};
}
