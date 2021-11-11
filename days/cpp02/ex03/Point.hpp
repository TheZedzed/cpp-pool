#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point {
	public:
		Point();
		~Point();
		Point(const Point&);
		Point(const float, const float);
		Point&	operator=(const Point&);
		Fixed	getX(void) const;
		Fixed	getY(void) const;
		void	setX(const Fixed&);
		void	setY(const Fixed&);
		static float	dot(const Point&, const Point&);
		static Point	vec(const Point&, const Point&);
	private:
		const Fixed	x;
		const Fixed	y;
		Fixed	_x;
		Fixed	_y;
};
std::ostream&	operator<<(std::ostream&, const Point&);
bool			bsp(const Point, const Point, const Point, const Point);
#endif
