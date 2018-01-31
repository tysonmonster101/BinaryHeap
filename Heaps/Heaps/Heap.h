#pragma once

#include "Node.h"

class Heap
{
		//Arr[i / 2] 	Returns the parent node
		//Arr[(2 * i) + 1] 	Returns the left child node
		//Arr[(2 * i) + 2] 	Returns the right child node
public:
	void insert(int whatData);
	void pop(); //removes the root node(position 0)
	void printHeap();
	Heap();
	~Heap();
private:
	void swap(int positionOne,int positionTwo);
	//current size is position + 1
	int currentPosition = 0;
	const int sizeOfData = 100;
	int heapData[100];
};

