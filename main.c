#include "monty.h"

int main(int argc, char **argv)
{
	unsigned int line_number = 1;
	stack_t *stack = NULL;

	if (argc != 2)
		exit_usagefailure();

	FILE *file_ptr;
	file_ptr = fopen(argv[1], "r");
	if (file_ptr == NULL)
	{
		perror("Error opening file");
		return (1);
	}
	fclose(file_ptr);
	free_stack(stack);
	return (EXIT_SUCCESS);
}
