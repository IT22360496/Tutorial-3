/* Exercise 1 - Formatting
Modify the program to produce the output given below (don't print the first two lines and the
blank line).
You have to use the following commands in the <iomanip> header file
#include <iostream>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout << "No" << "Name" << "Marks" << endl;
 for (int r = 0; r < 5; r++) {
 cout << r+1
 << names[r]
 << marks[r] << endl;
 }

}
setw(), setprecision(), setiosflags(ios::fixed)
Note : No has a width of 5, Name a width of 15, and Marks a width of 10, the marks are displayed
with a precision of 2 decimal places.
0 1 2 3
123456789012345678901234567890
 No Name Marks
 1 Ajith 78.40
 2 Wimal 90.60
 3 Kanthi 45.90
 4 Suranji 72.20
 5 Kushmitha 54.40 */
 
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
	char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};

	cout << setw(5) << "No" << setw(15) << "Name" << setw(10) << "Marks" << endl;

	for (int r = 0 ; r < 5 ; r++) 
	{
		cout << setw(5) << r+1
			<< setw(15) << names[r]
			<< setw(10) << setiosflags(ios::fixed) << setprecision(2) << marks[r] << endl;
	}

}