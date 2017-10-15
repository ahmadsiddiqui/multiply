#include "lab3.h"
/** \brief Swaps the values of two variables of type int.

    Takes in to int variables, passed by reference and swaps their values.
    values are assigned to the same variables that were passed to the function.
*/
void swapInts(int& m, int& n)
{
    int temp = m;
    m = n;
    n = temp;
}
