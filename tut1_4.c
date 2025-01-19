#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k,t;
    printf("enter the size of array \n");
    scanf("%d",&n);
    int arr1[n];
    printf("enter the values of array \n");
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the value you want to shift the array to left or right \n");
    scanf("%d",&k);
    k = k % n;  // because if we enter k greater than the size of array it will give again the orginal array only .
    // so by doing this it will keep k in the range of n only 
    printf("enter the number for shifting left or right accordingly mentioned below \n");
    printf(" 0 =  LEFT SHIFT \n");
    printf(" 1 =  RIGHT SHIFT \n");
    scanf("%d",&t);
      if( t == 0)
      {
        int temp[k];
        for(int i=0;i<k;i++)
        {
            temp[i] = arr1[i];
        }
          for(int i=0;i<n-k;i++)
          {
            arr1[i]=arr1[i + k] ;
          }
            for(int i=0;i<k;i++)
            {
                arr1[n-k+i] = temp[i];
            }
        printf("your array after LEFT SHIFT is : \n");
        for(int i=0;i<n;i++)
        {
            printf("%d  ",arr1[i]);
        }    
      }
     else
     {
        int temp[k];
        for(int i =0;i<k;i++)
        {
            temp[i] = arr1[n-k+i];
        }
         for(int i=n-1;i>=k;i--)
         {
            arr1[i] = arr1[i-k];
         }
           for(int i=0;i<k;i++)
           {
            arr1[i] = temp[i];
           }
       printf("your array after RIGHT SHIFT is : \n");
       for(int i=0;i<n;i++)
       {
        printf("%d  ",arr1[i]);
       }    
     }
}     