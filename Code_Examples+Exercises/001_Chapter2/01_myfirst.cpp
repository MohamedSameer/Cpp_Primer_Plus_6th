// myfirst.cpp--displays a message

#include <iostream>                           // a PREPROCESSOR directive
int main()                                    // function header
{                                             // start of function body
    using namespace std;                      // make definitions visible
    cout << "Come up and C++ me some time.";  // message
    cout << endl;                             // start a new line
    cout << "You won't regret it!" << endl;   // more output

// If the output window closes before you can read it,
// add the following code:
// cout << "Press any key to continue." <<endl;
// cin.get(); 
                                                  
    return 0;                                 // terminate main()
}                                             // end of function body


/*

you can make the window stay open
until you strike a key by adding the following line of code before the return statement:
cin.get();

*/

/*
Here is the output from running the compiled program in Listing 2.1:

Come up and C++ me some time.
You won’t regret it!
*/

/*
C Input and Output

C++ can, in fact, use printf(), scanf(), and all the other standard C 
input and output functions, provided that you include the usual C stdio.h file.
*/

/*
The Newline Character
C++ has another, more ancient, way to indicate a new line in output—the C notation \n:

cout << "What’s next?\n";

// \n
cout << "Pluto is a dwarf planet.\n";
cout << "Pluto is a dwarf planet." << endl;
// show text, go to next line
// show text, go to next line means start a new line

*/

/* Tokens and White Space in Source Code

return0;
return(0);
return (0);
intmain();
int main()
int main ( )
Tokens and white space.
// INVALID, must be return 0;
// VALID, white space omitted
// VALID, white space used
// INVALID, white space omitted
// VALID, white space omitted in ()
// ALSO VALID, white space used in ( )

*/