#include <stdio.h>


int         LinearSearch(int arr[],int n,int x)
{
        int i;
        i = 0;

        while(i<n)
        {
            if(arr[i]==x)
              return 1;
            i++;
        }
            return 0;
}


int main()
{
    int arr[]={12,12,23,5,6,67,89,45,34};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x = 0;

    (LinearSearch(arr,n,x) == 1) ? printf("is here \n") : printf("is not here \n");


}