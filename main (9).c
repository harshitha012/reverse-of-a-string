/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
char s[]="my captain";
int main()
{
    char c;
    int i,j;
    for(i=0;j=strlen(s)-1;i<j,i++,j--)
    c=s[i],s[i]=s[j],s[j]=c;
    printf("%s\n",s);
    return 0;
}
