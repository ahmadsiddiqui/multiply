#include "lab3.h"

string multiply(int m, int n);
string add(int m, int n);
string subtract(int m, int n);
string divide(int m, int n);
string root(int m, int n);
void swapInts(int &m, int &n);
/** \brief Calculates and presents the answer.

    Takes user input, and determines the correct operation to use. 
    The operands are sent to the correct funtion and a string is returned.
    Formats the string as part of a HTML page.
*/
int main ()
{
    int firstInt = 0, secondInt = 0;
    char operation;
    char swap;
    string result;
    //html formatting
    cout <<"<html>"
		<<"<head>"
		    <<"<style>body {text-align:center;}</style>"
		    <<"<title> Calculation Result </title>"
		<<"</head>"
		<<"<body>";
    cout << "<h1>Calculation Result</h1>";
    //get the HTML form data and place in a string variable
    string data = getenv("QUERY_STRING");
    //check for null data
    if (data !="")
    {
	
	istringstream iss(data); char ch;
	//check if data is complete while parsing
	if((iss>>ch>>ch>>
	    firstInt>>ch>>ch>>ch>>
	    secondInt>>ch>>ch>>ch>>
	    operation>>ch>>ch>>ch>>
	    swap))
	{
	    //determine the operation to use
	    
	    if (swap == 'y')
	    {
		swapInts(firstInt, secondInt);
	    }
	    if (operation == 'a')
	    {
		cout << add(firstInt, secondInt);
	    }
	    if (operation == 's')
	    {
		cout << subtract(firstInt, secondInt);
	    }
	    if (operation == 'm')
	    {
		cout << multiply(firstInt, secondInt);
	    } 
	    if (operation == 'd')
	    {
		cout << divide(firstInt, secondInt);
	    }
	    if (operation == 'r')
	    {
		cout << root(firstInt, secondInt);
	    }
	}
	else
	{
	    cout << "<p>The data could not be parsed</p>";
	}
    }
    else
    {
	cout << "<p>The data was not received</p>";
    }
    cout << " </body></html>";
return 0;
}
