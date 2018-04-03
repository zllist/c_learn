#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayArray(int(*p)[4], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0;  j < n; j++)
        {
            printf("[%d] \n", *(*(p + i) + j));    
        }
    }

}


int main(void)
{

    int array[3][4] =  {1,2,3,4,2,3,4,5,3,4,5,6};
    displayArray(array,3);

    return 0;
}
