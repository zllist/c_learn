#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int allocMem(void **p, int base, int count)
{

    *p = malloc(base * count);
    if(*p == NULL)
        return -1;
    return 0;
}

int main(void)
{

     char * p = NULL;
     allocMem(&p, sizeof(char), 100);
     strcpy(p, "china");
     printf("[%s]\n", p );

     free(p);

     return 0;
}


