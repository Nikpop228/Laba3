#include "Square.h"

Square::Square()
{
	side_a = 0;
}

Square::Square(int length)
{
	side_a = length;
}

int Square::get_perimeter()
{
	return side_a * 4;
}

void Square::print()
{
	std::cout << "Perimetr: " << this->get_perimeter() << std::endl << "Length of side: " << side_a << std::endl;
}