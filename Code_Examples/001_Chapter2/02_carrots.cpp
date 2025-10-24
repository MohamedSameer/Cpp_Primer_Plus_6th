// carrots.cpp -- food processing program
// uses and displays a variable
/* First, a declaration statement creates a variable.
Second, an assignment statement provides a value for that variable.
*/

#include <iostream>

int main()
{
    using namespace std;
    
    int carrots;            // declare an integer variable
    
    carrots = 25;            // assign a value to the variable
    cout << "I have ";
    cout << carrots;        // display the value of the variable
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;  // modify the variable
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    // cin.get();
	return 0;
}


/* 
int carrots;            // declare an integer variable

This statement provides two kinds of information: the type of memory storage needed
and a label to attach to that storage.

The C++ int type can be positive or negative, but the size range depends on the implementation.
 */