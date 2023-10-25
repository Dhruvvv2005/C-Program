#include<stdio.h>
int main()
{
      pintf("for big alphabet");
    for(char i='A';i<='Z';i++)
    {
        printf("%d=Asci value of %c",i,i);
        printf("\n");
    }
    pintf("for small alphabet");
      for(char i='a';i<='z';i++)
    {
        printf("\n");
        printf("%d=Asci value of %c",i,i);
    }
    return 0;
}