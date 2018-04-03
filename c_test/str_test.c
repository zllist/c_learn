#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myStrlen(const char * str)
{
    int n = 0;
    while(*str++)
        n++;
    return n;
}

char * myStrcat(char * dest, const char * src)
{
    char * pstr = dest;
    dest += strlen(dest);
    while(*dest++ = *src++);

    return pstr;
}

char * myStrcpy(char * dest, const char *src)
{
    char * ret = dest;
    while(*dest++ = *src++);

    return ret;
}

int myStrcmp(const char *str1, const char *str2)
{
    while(*str1 !='\0' && *str2 != '\0' && *str1 == *str2)
    {
        str1++;
        str2++;
    }
    return (*str1==*str2 ? 0:(*str1 > *str2 ? 1 : -1));
}
char * myStrstr(char * s1, char *s2)
{
    if(*s2)
    {
        while(*s1)
        {
            for(int n = 0; *(s1+n) == *(s2 + n); n++)
            {
                if(*(s2+n+1) == '\0')
                    return s1;
            }
            s1++;
        }
        return NULL;
    }
    else
        return NULL;
}

void trimRightSpace(char * str)
{
    while(*str)
        str++;
    while(*(--str) == ' ')
        *str = '\0';

}

void trimStrSpace(char * str)
{
    char * t = str;
    while(*str)
    {
        if(*str != ' ')
        {
            *t++ = *str; 
        }

        str++;
    }
    *t ='\0';
}

int main(void)
{
    int ret = 0;
    char buf[1024] = "abcdefg";
    ret = myStrlen(buf);
    printf("ret = [%d]\n", ret);
    ret = strlen(buf);
    printf("ret = [%d]\n", ret);
    char * s = "123";
    char *str = NULL;

     myStrcat(buf,s);
    printf("str=[%s]\n",buf);

    return 0;
}
