#include<stdio.h>
#include<stdlib.h>
struct service
{
    char cus_code[50];
    int num_calls;
    float price;
};
int main()
{
    int n;
    printf("enter the no:of custumers \n");
    scanf("%d",&n);
    struct service ph[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the custumer code\n");
        scanf("%s",ph[i].cus_code);
        printf("enter the number of calls made \n");
        scanf("%d",&ph[i].num_calls);
        if(ph[i].num_calls >= 100)
        {
           int x = ph[i].num_calls - 100;
           ph[i].price = 250 + (x*1.25);
        }
        else{
            ph[i].price = 250 ;
        }
        printf("\n");
    }
    printf("BILLS OF CUSTUMERS\n");
    for(int i=0;i<n;i++)
    {
        printf("custumer code :  ");
        printf("%s \n",ph[i].cus_code);
        printf("number of calls made :  ");
        printf("%d \n",ph[i].num_calls);
        printf(" total BILL  : %f \n",ph[i].price);
        printf("==============================\n");
    }
}