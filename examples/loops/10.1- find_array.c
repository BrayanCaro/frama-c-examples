#include <limits.h>

/*@
    requires 0 <= len <= INT_MAX;

    requires \valid(arr+(0..(len-1)));

    requires \forall integer i, j;
        0 <= i <= j < len ==> arr[i] <= arr[j];

    ensures (\exists integer i; 0 <= i < len && arr[i] == x)
        ==> 0 <= \result < len && arr[\result] == x;

    ensures (\forall integer i; 0 <= i < len ==> arr[i] != x)
        ==> \result == -1; 

    assigns \nothing;
*/
int find_array(int arr[], int len, int x)
{
    /*@
        loop assigns i;
        loop invariant 0 <= i <= len;
        loop invariant \forall integer j; 0 <= j < i ==> arr[j] != x;
    */
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }

    return -1;
}