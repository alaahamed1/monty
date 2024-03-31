#include "monty.h"
void free_stack(stack_t **stack)
{
	stack_t *temp, *current;

	if (*stack == NULL)
	{
		return;
	}

	current = *stack;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*stack = NULL;
}
