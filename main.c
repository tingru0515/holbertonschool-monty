#include "monty.h"

global_t var;
/**
* main - interpreter for monty bytecodes files
* @argc: number of parameters
* @argv: pointer to all the parameters
*
* Return: always 0
*/
int main(int argc, char **argv)
{
	/*size_t line_buf_size = 0;*/

	char getl_info[256];
	var.stack_head = NULL;
	var.n_lines = 1;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	var.fp_struct = fopen(argv[1], "r");
	if (!var.fp_struct)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(getl_info, sizeof(getl_info), var.fp_struct))
	/*while (getline(&var.getl_info, &line_buf_size, var.fp_struct) != -1)*/
	{
		
		if (line_validator(getl_info) == 1)
			continue;
		/*printf("Error: check\n");*/
		execute_opcode(split_str(getl_info));
		var.n_lines = var.n_lines + 1;
		/*free(var.getl_info);*/
		
	}
	/*free(var.getl_info);*/
	handle_dlist_head(var.stack_head);
	fclose(var.fp_struct);
	return (EXIT_SUCCESS);
}
