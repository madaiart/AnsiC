/* This are the exercise in the section:
   1.8 Argument - Call by Value
*/

/* power: raise base to n-th power; n >= 0; version 2 */
int power(int base, int n)
{
    int p;
    for (p = 1; n > 0; --n)
        p = p * base;
    return p;
}