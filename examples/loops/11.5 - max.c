#include <limits.h>

/*@
    requires 1 <= n <= INT_MAX;

    requires \valid(a+(0..n-1));

    assigns \nothing;

    ensures \forall integer i; 
        0 <= i < n ==> a[i] <= \result; 
*/
int max_array(int *a, int n)
{
    int m = a[0];

    /*@
        loop invariant 1 <= i <= n;
        loop invariant \forall integer j; 
            0 <= j < i ==> a[j] <= m;
        loop assigns i, m;
        loop variant n - i;
    */
    for (int i = 1; i < n; i++)
    {
        if (a[i] > m)
            m = a[i];
    }

    return m;
}