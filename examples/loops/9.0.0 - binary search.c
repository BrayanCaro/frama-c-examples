/*@
    requires len >= 0;
    requires \valid_read(arr+(0..(len-1)));
    requires \forall integer i, j;
        0 <= i <= j < len ==> arr[i] <= arr[j];
*/
int find_array(int *arr, int len, int x)
{
    int mean = 0;
    int low = 0;
    int high = len - 1;
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