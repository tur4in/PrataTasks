#include "stdafx.h"
#include "Stack.h"

bool CStack::isEmpty() const
{
	return top == 0;
}

bool CStack::isFull() const
{
	return top == MAX;
}

bool CStack::push(const Item & item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

bool CStack::pop(Item & item)
{
	if (top > 0)
	{
		++sizeOfSlice;
		avg += items[--top].payment;
		return true;
	}
	else
		return false;
}

int CStack::getSlice() const
{
	return avg/sizeOfSlice;
}
