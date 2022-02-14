//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
//* Program name    : L1-3                                              *
//*                                                                     *
//* Written by      : Justin Calderon                                   *
//*                                                                     *
//* Purpose         : This program is designed to take data values from *													
//*                   the L1-3DATA.txt and output to L1-3Output.dat     * 
//*                   file. The program will then calculate current     * 
//*                   Salary, Percent Increase, and Update Salary to    *
//*                   Display.                                          *
//*---------------------------------------------------------------------*
//* Collaboration   : Enrique de la Torre                               *
//                    Pyjac                                             *
//*---------------------------------------------------------------------*
//* Change Log:                                                         *
//*                         Revision                                    *
//*       Date    Changed  Rel Ver Mod Purpose                          *
//* 02/13/22     jcalderon 000.000.000 Initial release of program       *
//*                                                                     *
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	// Declare variables
	ifstream inData; // Input file stream variable
	ofstream outData; // Output file stream variable

	string lastNameA;
	string firstNameA;
	string lastNameB;
	string firstNameB;
	string lastNameC;
	string firstNameC;
	double currentSalaryA;
	double percentPayIncreaseA;
	double updatedSalaryA;
	double currentSalaryB;
	double percentPayIncreaseB;
	double updatedSalaryB;
	double currentSalaryC;
	double percentPayIncreaseC;
	double updatedSalaryC;

	double currentSalaryTotal;
	double updatedSalaryTotal;

	inData.open("L1-3DATA.txt");
	outData.open("L1-3Output.dat");
	outData << setprecision(2) << showpoint << fixed;

	inData >> lastNameA >> firstNameA >> currentSalaryA >>
		percentPayIncreaseA;
	inData >> lastNameB >> firstNameB >> currentSalaryB >>
		percentPayIncreaseB;
	inData >> lastNameC >> firstNameC >> currentSalaryC >>
		percentPayIncreaseC;

	updatedSalaryA = currentSalaryA + (currentSalaryA * percentPayIncreaseA / 100);
	updatedSalaryB = currentSalaryB + (currentSalaryB * percentPayIncreaseB / 100);
	updatedSalaryC = currentSalaryC + (currentSalaryC * percentPayIncreaseC / 100);

	currentSalaryTotal = currentSalaryA + currentSalaryB + currentSalaryC;
	updatedSalaryTotal = updatedSalaryA + updatedSalaryB + updatedSalaryC;

	outData << lastNameA << " " << firstNameA << " " << updatedSalaryA << endl;
	outData << lastNameB << " " << firstNameB << " " << updatedSalaryB << endl;
	outData << lastNameC << " " << firstNameC << " " << updatedSalaryC << endl;

	cout << "Justin Calderon\t" << "L1-3\t" << "L1-3.exe" << endl;
	cout << "	Current total Salary: $" << fixed << setprecision(2) << currentSalaryTotal;
	cout << endl;
	cout << "	Updated total Salary: $" << fixed << setprecision(2) << updatedSalaryTotal;

	inData.close();
	outData.close();

	char q;
	cout << "\nPress any key to Exit.";
	cin.ignore(2, '\n');
	cin.get(q);
	return 0;
}
