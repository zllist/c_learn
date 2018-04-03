#include <stdio.h>

void * allocMem(int base, int count)
{
    void *p = malloc(base * count);
    return p;
}

int main(void)
{
    char * p = allocMem(sizeof(char) ,100);
    strcpy(p, "china");
    printf("%s", p);

    free(p);

    return 0;
}
