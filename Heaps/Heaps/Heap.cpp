#include "stdafx.h"
#include "Heap.h"
#include <iostream>


void Heap::insert(int whatData)
{
	if (currentPosition == 0) 
	{
		heapData[0] = 0;
	}
	else if (currentPosition + 1 == sizeOfData) 
	{
		std::cout << "the heap is full" << std::endl;
	}
	else 
	{
		heapData[currentPosition] = whatData;
		int heapifyPosition = currentPosition;
		while (whatData > heapData[heapifyPosition / 2] && heapifyPosition != 0) 
		{
			swap(heapifyPosition, heapifyPosition / 2);
			heapifyPosition = heapifyPosition / 2;
		}
	}
	currentPosition++;
}

void Heap::pop()
{
	int positionTracker = 0;
	heapData[positionTracker] = -INFINITY;
	if (currentPosition < sizeOfData - 3)
	{
		while (positionTracker < currentPosition)
		{
			if (heapData[positionTracker * 2 + 1] > heapData[positionTracker * 2 + 2]) 
			{
				//if (heapData[positionTracker * 2 + 1] > heapData[positionTracker]) 
				//{
					swap(positionTracker * 2 + 1, positionTracker);
					positionTracker = positionTracker * 2 + 1;
				//}
				//else 
				//{
				//}
			}
			else
			{
				swap(positionTracker * 2 + 2, positionTracker);
				positionTracker = positionTracker * 2 + 2;
			}
		}
	}
	else 
	{
		while (positionTracker <= sizeOfData - 3) 
		{
			if (heapData[positionTracker * 2 + 1] > heapData[positionTracker * 2 + 2])
			{
				//if (heapData[positionTracker * 2 + 1] > heapData[positionTracker]) 
				//{
				swap(positionTracker * 2 + 1, positionTracker);
				positionTracker = positionTracker * 2 + 1;
				//}
				//else 
				//{
				//}
			}
			else
			{
				swap(positionTracker * 2 + 2, positionTracker);
				positionTracker = positionTracker * 2 + 2;
			}
		}
	}
	currentPosition--;
}

void Heap::printHeap()
{
	for (int i = 0; i < sizeOfData; i++)
	{
		std::cout << heapData[i] << std::endl;
	}
	std::cout << std::endl << std::endl;
}

Heap::Heap()
{
}


Heap::~Heap()
{
}

void Heap::swap(int positionOne, int positionTwo)
{
	int tempData = heapData[positionOne];
	heapData[positionOne] = heapData[positionTwo];
	heapData[positionTwo] = tempData;
}
