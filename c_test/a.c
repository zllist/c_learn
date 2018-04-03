

#include <stdio.h>
int main1()
{
int a[5] = {1,2,3,4,5};
int *ptr = (int*)(&a + 1);
printf("%d,%d", *(a+1),*(ptr-1));

printf("%d\n",sizeof(a));
return 0;
}
int main()
{
int a[5] = {1,2,3,4,5};
int *ptr1 = (int *)(&a + 1);
int *ptr2 = (int *)((int)a + 1);
printf("%x, %x",ptr1[-1], *ptr2);
return 0;
}
