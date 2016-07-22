#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc,char* argv[])
{
    int j =0;
 if (argc ==1)
{
    printf("Usage: %s INPUT [options]\nExample:\n%s \"password\" 3 8\n",argv[0],argv[0]);
    return -1;
}
if (argc ==2)
{
       while (j!=strlen(argv[1]))
       {
           printf("%u %c\n",j,argv[1][j]);
           j++;
       }
}
else 
{
    for (int i = 2;i<argc;i++)
    {
        j=atoi(argv[i])-1;
        if (j<strlen(argv[1]))
        {
            printf("%c",argv[1][j]);
        }
    }
    printf("\n");
}
    return 0;
}