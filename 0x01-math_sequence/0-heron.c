#include "heron.h"

/**
 * heron - Heron sequence until having convergence with an error
 * less or equal to 10^-7.
 * @p: Independent term of the sequence
 * @x0: First term of the sequence
 */

t_cell *heron(double p, double x0)
{
	double d;
	t_cell ret;

	d = (1 / 2) * (x0 + (p / x0));
	ret = (t_cell *)malloc(sizeof(t_cell));
	if (ret == NULL)
		return (NULL);
	ret->d = d;
	if (d - 
