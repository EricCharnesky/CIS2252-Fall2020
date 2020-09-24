#pragma once

class Circle
{
public:
	const double PI_APROXIMATE = 3.14159;
	double getRadius();
	void setRadius(double radius);
	double getDiameter();
	double getCircumference();
	double getArea();
private:
	double radius;
};


double Circle::getRadius()
{
	return radius;
}

void Circle::setRadius(double radius)
{
	if (radius > 0)
	{
		this->radius = radius;
	}
	else
	{
		this->radius = 0;
	}

}

double Circle::getDiameter()
{
	return radius * 2;
}

double Circle::getCircumference()
{
	return radius * 2 * PI_APROXIMATE;
}

double Circle::getArea()
{
	return PI_APROXIMATE * radius * radius;
}
