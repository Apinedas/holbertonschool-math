#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <stddef.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct cell - Struct for sequences
 * @d: Double number of the n'th term
 * @next: Pointer to next term
 */

typedef struct cell
{
	double elt;
	struct cell *next;
} t_cell;

t_cell *Fibonnaci();
double gold_number(t_cell *head);

#endif
