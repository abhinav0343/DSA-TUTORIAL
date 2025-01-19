#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n; 
    printf("enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int new = n;
    /*for removing duplicate elements use shifting the array when the elements matches i.e remove repeated
    element and replace the the next elemnt in the index of repeated element and so that size fo array 
    decreasing so decrease the size of array every time when element replaces */
    for(int i=0;i<new;i++)
    {
        for(int j=i+1;j<new;j++)
        {
          if(arr[i] == arr[j])
          {
            for(int k=j;k<new-1;k++)
            {
                arr[k] = arr[k+1];
            }
            new--;
            j--; // this is for rechecking only 
          }
        }
    }
    printf("array after removing duplicate elements \n");
    for(int i=0;i<new;i++)
    {
        printf("%d ",arr[i]);
    }
}