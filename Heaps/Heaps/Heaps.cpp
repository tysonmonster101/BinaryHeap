// Heaps.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "Heap.h"


int main()
{
	Heap temp;
	temp.insert(5);
	temp.insert(20);
	temp.insert(30);
	temp.insert(10);
	temp.insert(11);
	temp.insert(85);
	temp.insert(32);
	temp.insert(1);
	temp.insert(3);
	temp.insert(25);
	temp.printHeap();
	temp.pop();
	temp.printHeap();
	int waitInt;
	std::cin >> waitInt;
    return 0;
}