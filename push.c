#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_el;

	new_el = malloc(sizeof(stack_t));
	if (new_el == NULL)
	{
		fprintf(stderr, "Error: Can't allocate memory at line %u\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_el->n = 10;
	new_el->prev = NULL;
	new_el->next = *stack;

	*stack = new_el;
}
