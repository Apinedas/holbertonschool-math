#ifndef HERON_H
#define HERON_H

/**
 * struct cell - Struct for sequences
 * @d: Double number of the n'th term
 * @next: Pointer to next term
 */

typedef struct cell
{
	double d;
	cell *next;
} t_cell;

#endif
