#include "LaborkaConfig.h"
#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#else
#include <math.h>
#endif



int main()
{
	double result;
	#ifdef USE_TRIGONOMETRY_DEGREE
	result = cos_degree(45.0);
	#else
	result = cos(M_PI/4.0);
	#endif

return 0;
}