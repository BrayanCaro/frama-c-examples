/*@ 
    requires \forall integer i, j;
                0 <= i <= j < len ==> arr[i] <= arr[j];
    requires len >= 0;
    requires \valid(arr+(0..(len-1)));
    assigns \nothing;

    behavior belongs:
        assumes \exists integer i;
                    0 <= i < len && arr[i] == x;
        ensures 0 <= \result < len;
        ensures arr[\result] == x;

    behavior not_belongs:
        assumes \forall integer i;
                    0 <= i < len ==> arr[i] != x;
        ensures \result == -1;
*/
int find_array(int* arr, int len, int x);