#include <iostream>

#include "figures.h"

Figure::Figure() {}
Figure::~Figure() {}
Square::Square(float x)
	:a(x)
	{}

float Square::area() {
	return a*a;
}

void Square::show() {
	std::cout << "Square with side=" << a << " and area=" << area() << std::endl;
}

Rectangle::Rectangle(float x, float y)
	:a(x),
	b(y)
	{}

float Rectangle::area() {
	return a*b;
}

void Rectangle::show() {
	std::cout << "Rectangle with sides: a=" << a << " b=" << b << " and area=" << area() << std::endl;
}

Circle::Circle(float x)
	:a(x)
	{}

float Circle::area() {
	return (3.14F * a * a);
}

void Circle::show() {
	std::cout << "Circle with radius=" << a << " and area=" << area() << std::endl;
}