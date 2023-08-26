#include "main.h"

args_t *arguments = NULL;

/**
 * main - main entry point 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char *argv[]) {
    size_t n = 0;

    (void) argv;
    check_arguments(argc);
    initialize_arguments();
    readline(argv[1]);
    
    while (getline(&arguments->line,&n,arguments->file) != -1)
    {
        printf("%s\n",arguments->line);
    }

    return (0);
}

/**
 * check_arguments - Check the number of arguments
 * 
 * @param argc 
 */
void check_arguments(int argc)
{
    if (argc != 2) 
    {
        fprintf(stderr, "Usage:monty\n");
        exit(EXIT_FAILURE);
    }
}

void initialize_arguments()
{
    arguments = malloc(sizeof(args_t));

    if (!arguments)
    {
        fprintf(stderr,"Error:Malloc failed");
        free(arguments);
        exit(EXIT_FAILURE);
    }

    arguments->file = NULL;
    arguments->line = NULL;
}



