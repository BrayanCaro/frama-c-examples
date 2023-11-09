/*@
    assigns \nothing;
*/
int main()
{
    int i = 0;

    /*@
        loop invariant i >= 0;
        loop assigns i;
        loop variant 1;
    */
    while (i >= 0)
    {
        // Some code here
        i++;
    }

    //@ assert \false;
    //@ assert 1 == 2;
    //@ assert \true;

    return 0;
}
