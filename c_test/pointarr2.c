#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void * allo2DMem(int base, int row, int line)
{
    void * p = malloc(base * row *line);
    return p;
}

int main(void)
{
    int (*p)[5] = allo2DMem(sizeof(int), 3,5);
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            p[i][j] = i + j; 
        }
    
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%d\n", *(*(p+i) + j));
        }
            
    }
    free(p);
    return 0;

}
