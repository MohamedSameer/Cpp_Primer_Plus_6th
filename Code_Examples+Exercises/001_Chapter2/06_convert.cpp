// convert.cpp -- converts stone to pounds
#include <iostream>

int stonetolb(int);     // function prototype

int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
	// cin.get();
    // cin.get();
    return 0;
}

int stonetolb(int sts)
{
     return 14 * sts;
}


/*
Here’s a sample run of the program in Listing 2.6:
Enter the weight in stone: 15
15 stone = 210 pounds.

*/
