/* Exercise 4 – Using Reference Type Parameters
Implement the Input function to input values for the parameters length and width from the
keyboard.
a) Do you get the correct values printed ?
length and width passed as given below are really value type parameters. They do not return values
from the function.
void input(int length, int width);
Reference type variables in C++ have a & sign in front of the parameter. Reference variables return
values from the function.
b) Modify the parameters of your input function as given below, to use length and width as
reference type parameters.
void input(int &length, int &width);
c) Do you get the correct values printed ?
#include <iostream>
using namespace std;
void print(int len, int wth);
void input(int len, int wth);
// Do not change the main() function
int main() {
 int length = 10, width = 5;
 input(length, width);
 print(length, width);
 return 0;
}
// Do not change the print() function
void print(int len, int wth) {
 cout << "Length : " << len
 << ", Width : " << wth << endl;
}
// Implement the Input Function here */

#include <iostream>
using namespace std;

void print(int len, int wth);
void input(int &length, int &width);

// Do not change the main() function
int main() 
{
	int length = 10, width = 5;
	
	input(length, width);
	print(length, width);
	
	return 0;
}

// Do not change the print() function
void print(int len, int wth) 
{
	cout << "Length : " << len
		<< ", Width : " << wth << endl;
}

// Implement the Input Function here
void input(int &length, int &width) 
{
	cout << "Enter the values for length and width: ";
	cin >> length
		>> width;
}