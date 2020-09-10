#include <stdio.h>


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

    binarySearch(arr,arr[0],n-1,x);


}