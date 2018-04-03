/*指针数组，数组的元素是指针  
 *
 *
 * 
 * /
#include <stdio.h>

int main1(void)
{
    int i = 0;
    char * pArray[] = {"apple","pear","banana","orange","pineApple"};
    for( i = 0; i < sizeof(pArray)/sizeof(*pArray); i++)
    {
    
        printf("[%s]\n", pArray[i]); 
    
    }

    return 0;

}

int main(void)
{

    char * pArray[] = {"apple","pear","banana","orange","pineApple",NULL};
    char **pA = pArray;

    while(*pA)
    {
        printf("%s\n", *pA++);     
    }
    return 0;

}
