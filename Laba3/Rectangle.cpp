#include "Rectangle.h"

Rectangle::Rectangle() : Square()
{
	side_b = 0;
}

Rectangle::Rectangle(int side_a, int side_b) : Square(side_a)
{
	this->side_b = side_b;
}

int Rectangle::get_perimeter()
{
	return (side_a + side_b) * 2;
}

void Rectangle::print()
{
	Square::print();
	std::cout /*<< "Perimetr: " << this->get_perimeter() << std::endl 
			  << "Length of side a: " << side_a << std::endl */
			  << "Length of side b: " << side_b << std::endl;
}