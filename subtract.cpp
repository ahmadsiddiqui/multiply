#include "lab3.h"
/** \brief Calculates the difference between two numbers

    Takes the two inputs as ints and returns a string stating
    the result of the difference between them. 
*/
string subtract(int m, int n)
{
    ostringstream oss;
    int result = m - n;
    oss << "<h3>"<< m << " subtract " << n << " is " << result <<"</h3>";
    return oss.str();
}
