
#include <stdio.h>

void interpolation(int arr[], int l, int r, int x)
{
    int count=0;
    while (l <= r) {
        int m = l + (r-l) /  2;
        /// m from is  l + ( ( (double)( r - l ) /  ( arr[r] - arr[l] ) ) * ( x - arr[l] ) ) interpolation
            count++;
        if (arr[m] == x) {
            printf("is found \n");
            printf("number of try  :  %d  \n",count);

        }

        if (arr[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }

}

int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40, 23, 34, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 34 ;
     binarySearch(arr, 0, n - 1, x);

    return 0;
}