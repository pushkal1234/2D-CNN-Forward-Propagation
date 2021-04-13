
#ifndef EXP_WIDTH

#include "ap_fixed.h"

#define EXP_WIDTH	16
#define INT_WIDTH	4

typedef ap_fixed<EXP_WIDTH, INT_WIDTH> float24_t;

#endif


#ifndef __ACTIVATIONS_H
#define __ACTIVATIONS_H



float24_t relu(float24_t a)
{
	return a > (float24_t)0 ? a : (float24_t)0;
}

#endif
