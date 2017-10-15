#include "lab3.h"
/** \brief Calculates the quotient of two numbers

    Takes the two inputs as ints and returns a string stating
    the quotient of them. Returns a string saying "cannot divide by zero"
    if zero is entered as the second integer.
*/
string divide(int m, int n)
{
    ostringstream oss;
    double dm=m;
    double dn=n;
    if (n == 0)
    {
    return ("Cannot divide by zero");
    }
    else
    {
    double result = dm / dn;
    oss << "<h3>"<< dm << " divided by " << dn << " is " << result <<"</h3>";
    return oss.str();
    }
}
