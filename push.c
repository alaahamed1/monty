#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_el;
	char buffer[1024];

	new_el = malloc(sizeof(stack_t));
	if (new_el == NULL) {
		fprintf(stderr, "Error: Can't allocate memory at line %u\n", line_number);
		exit(EXIT_FAILURE);
	}

	fgets(buffer, 1024, stdin);
	sscanf(buffer, "%*s %d", &new_el->n);

	new_el->prev = NULL;
	new_el->next = *stack;
	*stack = new_el;
}
