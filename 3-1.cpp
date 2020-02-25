/*	Author: Nik Barbero
	Description: Asks the user to enter the date then prints back formatted values for the month, day, and year.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int month, day, year;

	cout << "Please enter the date. (mm/dd/yyyy): ";
	cin >> month;
	cin.ignore(100, '/'); //Ignores everything before the first '/'
	cin >> day;
	cin.ignore(100, '/');//Ignores everything before the first '/'
	cin >> year;
	cout << endl;

	//Formats the month and day to have 2 character spaces and empty spaces are filled with '0'
	cout << setfill('0') << "Month entered: " << setw(2) << month << endl << "Day entered: " << setw(2) << day << endl << "Year entered: " << year;
	return 0;
}