#pragma once
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;



class Circle
{
public:

	Circle(double radius)
	{
		set_the_radius(radius);
	}

	void set_the_radius(double radius)
	{
		radius = radius;
		ference = 2*(M_PI)*radius;
		area = M_PI*pow(radius, 2);
		//cout << radius << "," << ference << "," << area << endl;
	}

	void set_the_ference(double ference)
	{
		ference = ference;
		radius = ference/(2*M_PI);
		area = 2*pow(radius, 2);
		//cout << radius << ",   " << ference << ",   " << area << endl;
	}

	void set_the_area(double area)
	{
		area = area;
		radius = sqrt(area*M_PI);
		ference = 2*M_PI*radius;
		//cout << radius << "," << ference << "," << area << endl;
	}

	double get_radius()
	{
		return radius;
	}

	double get_area()
	{
		return area;
	}

	double get_ference()
	{
		return ference;
	}

	Circle()
	{
		set_the_radius(0);
	}

private:
	double radius, ference, area;
};

