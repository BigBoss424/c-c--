#include <iostream>

using namespace std;

    int main(){
  // Output the user's input.
  // A variable like userNum can store a value like an integer.
  // Extend the given program to print userNum values as indicated.

  int userNum1 = 0;
  int userNum2 = 0;

  cout << "Enter integer:" << endl;
  cin >> userNum1;
  cout << "You entered: " << userNum1 << endl;
  //Extend to output the input squared and cubed. Hint: Compute squared as userNum * userNum

  cout << userNum1 << " squared is " << userNum1*userNum1<<endl;
  cout << "And " << userNum1 << " cubed is " << userNum1*userNum1*userNum1 << "!!" << endl;

  //Extend to get a second user input into userNum2. Output sum and product.
  cout << "Enter another integer: " << endl;
  cin >> userNum2;

  int sum = userNum1+userNum2;
  int product = userNum1*userNum2;

  cout << userNum1 << " + " << userNum2 << " is " << sum << endl;
  cout << userNum1 << " * " << userNum2 << " is " << product << endl;

  return 0;
}
