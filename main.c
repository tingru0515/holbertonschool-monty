#include "monty.h"

/**
* main - interpreter for monty bytecodes files
* @argc: number of parameters
* @argv: pointer to all the parameters
*
* Return: always 0
*/
int main(int argc, char **argv)
{
	size_t line_buf_size = 0;

	var.getl_info = NULL;
	var.stack_head = NULL;
	var.n_lines = 0;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	var.fp_struct = fopen(argv[1], "r");
