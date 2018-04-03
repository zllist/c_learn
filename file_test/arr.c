#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void mppx(int *p ,int len)
{
    int i;
    int tmp;
    int j; 
    for(i = 0; i < len -1; i++)
    {
        for(j =i+1; j < len; j++)  
        {
            if(p[i] > p[j])
            {
                tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
        }
    }
}


int main(void)
{
    int i = 0;
    int array[10] = {9,56,78,34,34,56,878,90,78,10};
    mppx(array, 10);
    for( i ; i < 10; i++)
    {
          printf("%d\n",array[i]);
    }

    return 0;
}
