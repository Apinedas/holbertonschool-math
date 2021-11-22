#include "fibonacci.h"

/**
 * Create_Fib - Creates a fibonacci term
 * Return: Pointer to term
 */

t_cell *Create_Fib(double num1, double num2)
{
	t_cell *ret;

	ret = (t_cell *)malloc(sizeof(t_cell));
	if (ret == NULL)
		return (NULL);
	ret->elt = num1 + num2;
	if (fabs((ret->elt / num2) - (num2 / num1)) <= 10E-8)
		ret->next = NULL;
	else
		ret->next = Create_Fib(num2, ret->elt);
	return (ret);
}

/**
 * Fibonnaci - Fibonacci sequence until having a geometric behavior
 * Return: Pointer to F1
 */

t_cell *Fibonnaci()
{
	t_cell *f1, *f2;

	f1 = (t_cell *)malloc(sizeof(t_cell));
	if (f1 == NULL)
		return (NULL);
	f2 = (t_cell *)malloc(sizeof(t_cell));
	if (f2 == NULL)
		return (NULL);
	f1->elt = (double)1;
	f1->next = f2;
	f2->elt = (double)1;
	f2->next = Create_Fib(f1->elt, f2->elt);
	return (f1);
}

/**
 * gold_number - calcs the gold number
 * @head: Fibonacci's sequence head pointer
 * Return: Value of gold number
 */

double gold_number(t_cell *head)
{
	double gold, aux;

	aux = ((head->next)->elt) / (head->elt); 
	gold = (((head->next)->next)->elt) / ((head->next)->elt);
	if (fabs((aux / gold) - 1) >= 10E-7)
		gold = gold_number(head->next);
	return (gold);
}
