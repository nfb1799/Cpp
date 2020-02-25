
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	ifstream inFile;
	char ath1, ath2, ath3, ath4;
	int run1, run2, run3, run4;
	int swim1, swim2, swim3, swim4;
	int bike1, bike2, bike3, bike4;
	double avg;

	inFile.open("racedat.txt");
	inFile >> ath1 >> run1 >> swim1 >> bike1;
	inFile.ignore(100, ' ');
	inFile >> ath2 >> run2 >> swim2 >> bike2;
	inFile.ignore(100, ' ');
	inFile >> ath3 >> run3 >> swim3 >> bike3;
	inFile.ignore(100, ' ');
	inFile >> ath4 >> run4 >> swim4 >> bike4;
	inFile.close();

	cout << "Athlete " << ath1 << endl;
	cout << "Run Time: " << setw(4) << run1 << endl << "Swim Time: " << setw(3) << swim1 << endl << "Bike Time: " << setw(3) << bike1 << endl;
	cout << "Total Time: " << setw(3) << (run1 + swim1 + bike1) << endl;

	cout << "\nAthlete " << ath2 << endl;
	cout << "Run Time: " << setw(4) << run2 << endl << "Swim Time: " << setw(3) << swim2 << endl << "Bike Time: " << setw(3) << bike2 << endl;
	cout << "Total Time: " << setw(3) << (run2 + swim2 + bike2) << endl;

	cout << "\nAthlete " << ath3 << endl;
	cout << "Run Time: " << setw(4) << run3 << endl << "Swim Time: " << setw(3) << swim3 << endl << "Bike Time: " << setw(3) << bike3 << endl;
	cout << "Total Time: " << setw(3) << (run3 + swim3 + bike3) << endl;

	cout << "\nAthlete " << ath4 << endl;
	cout << "Run Time: " << setw(4) << run4 << endl << "Swim Time: " << setw(3) << swim4 << endl << "Bike Time: " << setw(3) << bike4 << endl;
	cout << "Total Time: " << setw(3) << (run4 + swim4 + bike4) << endl;

	avg = (((double)(run1 + swim1 + bike1)) + ((double)(run2 + swim2 + bike2)) + ((double)(run3 + swim3 + bike3)) + (double)(run4 + swim4 + bike4)) / 4;

	cout << fixed << showpoint << setprecision(2);
	cout << "\nAverage Total Time: " << avg;

	return 0;
}