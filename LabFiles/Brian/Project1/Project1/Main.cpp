/*
	Brian, Song

	January 30, 2020

	CS A250
	Practice 1
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void printMessage();
void printPercentage(double& pointsEarned,
	double& pointsWorth);
double computePercentage(double pointsEarned,
	double pointsWorth);
void askUser(double& pointsEarned,
	double& pointsWorth);

int main()
{
	printMessage();

	double pointsEarned = 0.0,
		pointsWorth = 0.0;

	askUser(pointsEarned, pointsWorth);
	printPercentage(pointsEarned, pointsWorth);

	// use the values again...

	cout << endl; // To prevent printing out in proj 2 or 3
	system("Pause");
	return 0;
}

void printMessage()
{
	cout << "*** Grade Percentage Calculator ***" << endl;
}

void printPercentage(double& pointsEarned,
	double& pointsWorth)
{
	cout << fixed << showpoint << setprecision(2);

	cout << "\nYour exam score is: "
		<< computePercentage(pointsEarned, pointsWorth) 
		<< endl;
}

double computePercentage(double pointsEarned,
	double pointsWorth)
{
	return 0.0; // get the percentage.
}

void askUser(double& pointsEarned,
	double& pointsWorth)
{
	cout << "\nEnter the points you earned on your exam: ";
	cin >> pointsEarned;
	cout << "Enter the number of points the exam is worth: ";
	cin >> pointsWorth;
}

