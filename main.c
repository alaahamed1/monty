#include "monty.h"

int main(int argc, char **argv)
{
	char buffer[1024];
	unsigned int line_number = 1;
	stack_t *my_stack = NULL;
	FILE *file_ptr;

	if (argc != 2)
	{
		exit_usagefailure();
	}
	file_ptr = fopen(argv[1], "r");
	if(file_ptr == NULL)
	{
		perror("Error opening file");
		return (1);
	}
	while(fgets(buffer, 1024, file_ptr) != NULL)
	{
		char *opcode = strtok(buffer, " \t\n");

		if(opcode == NULL)
		{
			continue;
		}
		if(strcmp(opcode, "push") == 0)
		{
			push(&my_stack, line_number);
		}
		else if (strcmp(opcode, "pall") == 0)
		{
			pall(&my_stack);
		}
	}
	fclose(file_ptr);
	free_stack(&my_stack);
	return (EXIT_SUCCESS);
}
