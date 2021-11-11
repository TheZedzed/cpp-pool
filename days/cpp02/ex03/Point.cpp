#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float a, const float b) : _x(a), _y(b) {}

Point::~Point() {}

Point::Point(const Point& cpy) {
	*this = cpy;
}

Point&	Point::operator=(const Point& rgh) {
	this->_x = rgh._x;
	this->_y = rgh._y;
	return *this;
}

Fixed	Point::getX(void) const {
	return this->_x;
}

Fixed	Point::getY(void) const {
	return this->_y;
}

void	Point::setX(const Fixed& a) {
	this->_x = a;
}

void	Point::setY(const Fixed& b) {
	this->_y = b;
}

float	Point::dot(const Point& a, const Point& b) {
	return (a.getX().toFloat() * b.getY().toFloat() - b.getX().toFloat() * a.getY().toFloat());
}

Point	Point::vec(const Point& a, const Point& b) {
	return Point(b.getX().toFloat() - a.getX().toFloat(), b.getY().toFloat() - a.getY().toFloat());
}

std::ostream&	operator<<(std::ostream& out, const Point& org) {
	out << "[" << org.getX() << "," << org.getY() << "]";
	return out;
}
