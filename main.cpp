/**
*	@author 
*	@date 
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "test.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	LinkedListOfInts testableList;

	Test t;
	t.runTests();
	return (0);

}

