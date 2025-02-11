#pragma once
#include <iostream>

class Square
{
protected:
	int side_a;

public:
	Square();

	Square(int length);

	virtual int get_perimeter();

	void print();
};