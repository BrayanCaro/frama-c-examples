#include <limits.h>

/*@
    requires 0 <= n <= INT_MAX;

    requires \valid(a+(0..n-1));

    assigns \nothing;
*/
int max_array(int *a, int n)
{
    int m = a[0];

    /*@
        loop invariant 1 <= i <= n;
        loop assigns i, m;
    */
    for (int i = 1; i < n; i++)
    {
        if (a[i] > m)
            m = a[i];
    }
    return m;
}