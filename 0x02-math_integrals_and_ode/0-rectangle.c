#include "rectangle.h"

/**
 * rectangle_method - calcs the integral of 1 + x squared
 * inversed, using the rectangle method
 * @a: Integral lower limit
 * @b: Integral upper limit
 * @steps: Number of steps to do rectangle method
 * Return: Approximation of the integral
 */

double rectangle_method(double a, double b, double steps)
{
	int i;
	double height, width, ret;

	ret = 0;
	width = (b - a) / steps;
	for (i = 0; i < steps; i++)
	{
		height = 1 / (1 + pow(a, 2));
		ret += width * height;
		a += width;
	}
	return (ret);
}
