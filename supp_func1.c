#include "monty.h"


/**
 * pall - print all
 * @stack: double list
 * @linenum: line
 */
void pall(stack_t **stack, __attribute__((unused))unsigned int linenum)
{
	stack_t *a = *stack;

	if (!*stack)
	{
		return;
	}
	while (a)
	{
		printf("%d\n", a->n);
		a = a->next;
	}
}


/**
 * pint - print int in stack
 * @stack: double list
 * @linenum: line
 */
void pint(stack_t **stack, __attribute__((unused))unsigned int linenum)
{
	if (*stack)
		printf("%d\n", (*stack)->n);
	else
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", monty.line_number);
		free_it_all();
		exit(EXIT_FAILURE);
	}
}
