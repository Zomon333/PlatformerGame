#pragma once
#include "headers.h"
using namespace std;

class Point
{
public:
	double x, y;
	Point();
	Point(float x, float y);

	void movePoint(float x, float y);
	float distanceTo(Point toCheck);
};
