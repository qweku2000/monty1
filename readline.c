#include "main.h"




void readline(char *filename)
{
    int fd;

    fd = open(filename,O_RDONLY);
    if (fd<0)
    {
        fprintf(stderr,"Error:Cannot open %s\n",filename);
        exit(EXIT_FAILURE);
    }

    arguments->file = fdopen(fd,"r");
    if (arguments->file == NULL)
    {
        close(fd);
        fprintf(stderr,"Error:Cannot open %s\n",filename);
        exit(EXIT_FAILURE);
    } 

}








