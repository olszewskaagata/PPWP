#include "LaborkaConfig.h"
#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#else
#define _USE_MATH_DEFINES
#include <math.h>
#endif
#include <string>
#include <iostream>



int main()
{
	double result;
	#ifdef USE_TRIGONOMETRY_DEGREE
	result = cos_degree(45.0);
	#else
	result = cos(M_PI/4.0);
	#endif
	std::cout << result << std::endl;
return result;
}