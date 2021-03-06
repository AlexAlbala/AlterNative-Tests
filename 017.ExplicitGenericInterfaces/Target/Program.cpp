/***********************************************************************************
          _ _            _   _       _   _           
    /\   | | |          | \ | |     | | (_)          
   /  \  | | |_ ___ _ __|  \| | __ _| |_ ___   _____ 
  / /\ \ | | __/ _ \ '__| . ` |/ _` | __| \ \ / / _ \
 / ____ \| | ||  __/ |  | |\  | (_| | |_| |\ V /  __/
/_/    \_\_|\__\___|_|  |_| \_|\__,_|\__|_| \_/ \___|
-----------------------------------------------------

This code has been generated by AlterNative translator

Permission is hereby granted, free of charge, to any person obtaining a copy of this
code.

   contact: alejandro.albala@upc.edu
   web: http://alexalbala.github.io/Alter-Native/
   github: https://github.com/AlexAlbala/Alter-Native
   
AlterNative @ 2014

***********************************************************************************/

#include "Program.h"
namespace ExplicitGenericInterfaces {
	void Program::Main(Array<String>* args){
		C_T<A>* c = new C_T<A>();
		IA* a = *c;
		a->f();
		IB_T<A>* b = *c;
		b->f();
		c->f();
		C_T<int>* _int_c = new C_T<int>();
		IA* _int_a = *_int_c;
		_int_a->f();
		IB_T<int>* _int_b = *_int_c;
		_int_b->f();
		_int_c->f();
		C_T<float>* _float_c = new C_T<float>();
		IA* _float_a = *_float_c;
		_float_a->f();
		IB_T<float>* _float_b = *_float_c;
		_float_b->f();
		_float_c->f();
	}

}
