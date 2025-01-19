#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k;
    printf("enter the size of first one dimensional sorted array \n");
    scanf("%d",&n);
    printf("enter the size of second one dimensional sorted array \n");
    scanf("%d",&k);
    int a1[n],a2[k];
    printf("enter the first sorted array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("enter the second sorted array \n");
    for(int i=0;i<k;i++)
    {
        scanf("%d",&a2[i]);
    }
    int t = n + k;
    int arr[t];
    for(int i=0;i<n;i++)
    {
        arr[i] = a1[i];
    }
    for(int i=0;i<k;i++)
    {
        arr[n+i]=a2[i];
    }
    int temp;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<t-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
  printf("sorted array with merging of entered two one dimensional arrays is \n");
  printf("[ ");
  for(int i=0;i<t;i++)
  {
    printf("%d\t",arr[i]);
  }
  printf(" ]");
}