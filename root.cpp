#include "lab3.h"
/** \brief Calculates the square root using the babylonian method

    Takes user input, and returns the approximate square 
    root of the input as a double.
*/
double babylonian_square_root(double n)
{
    double r=0;
    double current_guess = n/2;
    double next_guess= current_guess*0.98;
    int count=0;
    while(next_guess/current_guess <=0.99)
    {
	current_guess=next_guess;
	r=n/current_guess;
	next_guess = (current_guess+r)/2;
    }

return next_guess;
}

/** \brief Calculates the square root by calling a method.

    Takes two inputs and returns the square root of both as
    a pair of numbers as part of a string.
*/
string root(int m, int n)
{
    ostringstream oss;    
    
    double rootM = babylonian_square_root(m);
    double rootN = babylonian_square_root(n);
    oss.precision(2);
    oss<< "<h3> The square root of "<< m << "  is " << rootM << " and the square root of " << n <<" is "<<rootN<<"</h3>";
    return oss.str();
}
