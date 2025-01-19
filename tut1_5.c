#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,num,bin;
    printf("enter the number : \n");
    scanf("%d",&n);
    for(i = 31; i >= 0; i--)  // if we start indexing from i = 0 then it will print binary representation in reverse order.
    {
       num = ((n >> i) & 1);
       printf("%d ",num);
    }
}