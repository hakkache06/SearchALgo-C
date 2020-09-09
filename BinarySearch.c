#include <stdio.h>

void    ft_swap(int * a,int * b)
{
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;

}

void    bubblesort(int arr[],int n)
{
        int i,j;

        for(i=0;i<n;i++){

                for(j=0;j<n-i-1;j++)
                    if(arr[j]>arr[j+1])
                        ft_swap(&arr[j],&arr[j+1]);
        }

}

int         binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = (l+r)/ 2;
          if (arr[m] == x)
            return 1;

          if (arr[m] < x)
            l = m + 1;
          else
            r = m - 1;
    }

    return -1;
}


void        printarr(int arr[],int n)
{
        int i;

            for(i=0;i<n;i++)
                printf("%d \n",arr[i]);

}


int main()
{

   int arr[]={12,12,23,5,6,67,89,45,34};
   int n = sizeof(arr)/sizeof(arr[0]);
   int x = 34;
    bubblesort(arr,n);
    (binarySearch(arr,arr[0],n-1,x) != -1) ? printf("is here \n") : printf("is not here \n");


}