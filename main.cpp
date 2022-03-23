/**
 * Title:   Basic Function in Main
 * Purpose: ** Using function from outside amin**
 * Class:   Self-taught
 * Author:  ** Fransiskus Agapa **
 */

#include <iostream>
using namespace std;
#include "CheckIndex.h"

int main() {

    int theData[] = {1,2,3,4,5};
    const int SIZE = 6;
    int position;
    int value = 0;

        cout << " An array consist of numbers : 1 , 2, 3, 4, 5. \n Choose a number to find its index in the array\n";
        cout << "_____" << endl;
        cin >> value;
        cout << "_____";

    position = CheckIndex(theData, SIZE, value);
        if (position == -1)   // if not found
        {
            cout << value << " is not exist in array " << endl;
        } else               // if the value exist
        {
            cout << endl << value << " is found at index [ " << position << " ] in array " << endl;
        }

    return 0;
}
