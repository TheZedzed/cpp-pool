#include "Point.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point point) {
	Point	AP = Point::vec(a, point);
	Point	BP = Point::vec(b, point);
	Point	CP = Point::vec(c, point);
	Point	AB = Point::vec(a, b);
	Point	BC = Point::vec(b, c);
	Point	CA = Point::vec(c, a);

	float	APAB = Point::dot(AP, AB);
	float	BPBC = Point::dot(BP, BC);
	float	CPCA = Point::dot(CP, CA);

	if (APAB > 0 && BPBC > 0 && CPCA > 0)
		return true;
	else if (APAB < 0 && BPBC < 0 && CPCA < 0)
		return true;
	return false;
}
