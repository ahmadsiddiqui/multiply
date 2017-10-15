#include "lab3.h"
/** \brief Calculates the sum of two numbers

    Takes the two inputs as ints and returns a string stating
    the sum.
*/
string add(int m, int n)
{
    ostringstream oss;
    int result = m + n;
    oss << "<h3>"<< m << " plus " << n << " is " << result <<"</h3>";
    return oss.str();
}
