#include "monty.h"

void exit_usagefailure()
{
    fprintf(stderr, "USAGE: monty file\n");
    exit(EXIT_FAILURE);
}