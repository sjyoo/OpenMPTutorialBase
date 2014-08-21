/* Monte Carlo simulation of pi*/

#include <stdio.h>
#include <omp.h>

unsigned int seed = 1;  /* random number seed */
const unsigned int rand_max = 32768;

double rannum()
{
#pragma omp threadprivate(seed)
	unsigned int rv;
	seed = seed * 1103515245 + 12345;
	rv = ((unsigned)(seed/65536) % rand_max);

	return (double)rv/rand_max;
}
