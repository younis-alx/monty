#include "monty.h"


/**
 * nop - nothng
 * @stack: double list
 * @linenum: line
 */
void nop(stack_t **stack, __attribute__((unused))unsigned int linenum)
{
	(void)stack;
}

/**
 * sub -  the top element of the stack from
 *the second top element of the stack
 * @stack: double list
 * @linenum: line
 */
void sub(stack_t **stack, __attribute__((unused))unsigned int linenum)
{
	stack_t *freeable;

	if (*stack && (*stack)->next)
	{
		(*stack)->next->n -= (*stack)->n;
		freeable = *stack;
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
		free(freeable);
	}
	else
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n",
				monty.line_number);
		free_all();
		exit(EXIT_FAILURE);
	}
}
