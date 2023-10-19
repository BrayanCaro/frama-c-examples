/*@
    requires \valid(arr+(0..(len-1)));
*/
int find_array(int *arr, int len, int x)
{
    int mean = 0;
    int low = 0;
    int high = len - 1;
    /*@ 
        loop invariant \forall integer i;
                0 <= i < low ==> arr[i] < x;
        loop invariant \forall integer i;
                high < i < len ==> arr[i] > x;
    */
    while (low <= high)
    {
        int mean = (low + high) / 2;
        if (arr[mean] == x)
            return mean;
        if (arr[mean] < x)
            low = mean + 1;
        else
            high = mean - 1;
    }
    return -1;
}