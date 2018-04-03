#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * encode(char * buf, int line)
{
    int len = strlen(buf);
    int nlen = 0;
    if(len%line != 0)
        nlen = len + (line - len%line);
    else
        nlen = len;

    char * tmp = (char *)malloc(nlen + 1);
    char * secret = (char *)malloc(nlen + 1);
    char * psecret = secret;

    strcpy(tmp,buf);
    for(int i = strlen(tmp); i < nlen; i++)
        tmp[i] = ' ';
    tmp[nlen] = '\0';
    char (*ptmp)[line] = tmp;
    int row = nlen/line;
    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < row; j++)
        {
            *psecret++ = ptmp[j][i]; 
        }
    
    }
    *psecret = '\0';
    free(tmp);

    return secret;



}

char * decode(char * buf, int line)
{
    int len = strlen(buf);
    int nline = len/line;
    int row = line;
    char * desecret = (char *)malloc(len + 1);
    char * pd = desecret;
    char (*p)[nline] = buf;
    for(int i = 0; i < nline; i++)
    {
    
        for(int j =0; j < row; j++)
        {
            *pd++ = p[i][j]; 
        }
    }
    *pd = '\0';
    while(*(--pd) == 32)
    *pd = '\0';
    
    return desecret;
}

int main(void)
{

     char buf[] = "china is great";
     char * secret = encode(buf,3);

     printf("mian [%s]\n", secret);
    char * desecret = decode(secret,3);
    printf("mian [%s]\n", desecret);
    free(secret);
    free(desecret);

    return 0;
}
