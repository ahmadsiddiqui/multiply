#include "lab3.h"
/** \brief Calculates the product oftwo numbers

    Takes the two inputs as ints and returns a string stating
    the product of the two numbers.
*/
string multiply(int m, int n)
{
    ostringstream oss;
    int result = m * n;
    oss << "<h3>"<< m << " mutiplied by " << n << " is " << result <<"</h3>";
    return oss.str();
}
