#pragma once
#include "Square.h"

class Rectangle : public Square
{
protected: 
	int side_b;

public:
	Rectangle();

	Rectangle(int side_a, int side_b);

	int get_perimeter() override;

	void print();
};

