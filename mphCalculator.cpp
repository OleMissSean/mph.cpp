/*
Sean Stasny
CSC 2134
Program MPH 
Program MPH reads miles and hours and prints miles per hour.
*/

#include <iostream>
#include <iomanip>
using namespace std;

float Getdata(float& miles, float& hours); // Function Prototype for Getdata

int main ()
{
  float  miles;		// Declares floats
  float  hours;
  float  mph;

  cout  << fixed  << showpoint;		// Shows decimals

    Getdata(miles, hours);			// Invokes function GetData
       
  mph = miles / hours;		// Calculates answer
  
  cout << endl << setw(10) << "Miles: " << miles		// Couts answer
       << setw(10) << "Hours: " << hours
       << setw(10) << "MPH: " << mph << endl;
       
  return 0;
}


  float Getdata(float& miles, float& hours)		// Function heading for GetData
{
	float enterMiles;		// Declares floats
	float enterHours;
	
cout << "Enter the miles traveled." << endl; // Instructions

	 
cin >> enterMiles;		// Gets cin for miles

cout << "Enter the hours taken." << endl;

cin >> enterHours;		// Gets cin for hours

miles = enterMiles;		// Sets miles and hours equal to the cin
hours = enterHours;

return miles; 		// Returns miles and hours
return hours;
}
