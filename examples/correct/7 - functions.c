#include <limits.h>

/*@
  requires x > INT_MIN;
  ensures (x >= 0 ==> \result == x) && (x < 0 ==> \result == -x);
  assigns \nothing;
*/
int abs(int x);

/*@
  requires -1000 <= x <= 1000;
  requires -1000 <= y <= 1000;
  ensures \result >= 0;
  assigns \nothing;
 */
int sumabs(int x, int y)
{
  int a = abs(x);
  int b = abs(y);
  return a + b;
}

/*@
  requires x > INT_MIN;
  assigns \nothing;
*/
void foo(int a)
{
  int b = abs(42);
  int c = abs(-50);
  int d = abs(a);
}
