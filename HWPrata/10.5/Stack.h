#pragma once
struct customer 
{
	char fullname[35];
	double payment;
};

typedef customer Item;

class CStack
{
	enum {MAX = 10};
	Item items[MAX];
	int top;
	int avg;
	int sizeOfSlice;
public:
	CStack() :top(0), avg(0), sizeOfSlice(0) {};
	bool isEmpty() const;
	bool isFull() const;
	bool push(const Item& item);
	bool pop(Item& item);
	int getSlice() const;
};

