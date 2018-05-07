// This program uses two functions that accept addresses of
// variables as arguments.
#include <iostream>
#include <cmath>
using namespace std;

  // Function prototypes
  void getNumber(int *);
  void tripleValue(int *);
 
  int main()
  {
    int number;

    // Call getNumber and pass the address of number.
    getNumber(&number);

    // Call tripleValue and pass the address of number.
	tripleValue(&number);

    // Display the value in number.
    cout << "That value tripled is " << number << endl;
    return 0;
  }

    //****************************************************************
    // Definition of getNumber. The parameter, input, is a pointer.  *
    // This function asks the user for a number. The value entered   *
    // is stored in the variable pointed to by input.                *
    //****************************************************************
    
    void getNumber(int *input)
    {
        cout << "Enter an integer number: ";
        cin >> *input;
    }
    
    //****************************************************************
    // Definition of tripleValue. The parameter, val, is a pointer.  *
    // This functionand uses the power math function to raise the    *
    // the power to 3                                                *
    //****************************************************************

    void tripleValue(int *val)
    {
      *val = pow(*val,3);
    }
