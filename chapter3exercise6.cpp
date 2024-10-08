/*
Title: Chapter 3 Exercie 6
filename: Chapter3exercise6
Programmer: Dhrumi Mistry
Date:10/8/2024
Requiremnts:
Ingredient Adjuster
1. A cookie recipe calls for the following ingredient: 1.5 cups of sugar, 1 cup of butter, 2.75 cups of flour
The recipe produces 48 cokies with this amount of the ingredients. Write a program that asks the user how many cookies he or she wants to make,
 then displays the nuumber of cups of each ingredient 
needed for the specified number of cookies.
*/

#include <iostream>
using namespace std;


int main()
{
	//variables
	const double sugar = 1.5;
	const double butter = 1.0;
	const double flour = 2.75;
	const int originalcookies = 48;

	//user input
	int cookiestoMake;

	//Input of number of cookies the user wants
	cout << "How many cookies would you like to make? ";
	cin >> cookiestoMake;

	//calculate the ratio
	double ratio = static_cast<double>(cookiestoMake) / originalcookies;

	//calculate the required amount of each ingredient
	double requiredsugar = sugar * ratio;
	double requiredflour = flour * ratio;
	double requiredbutter = butter * ratio;

	//display the results
	cout << "To make " << cookiestoMake << " cookies, you will need;\n";
	cout << requiredsugar << " cups of suagr\n";
	cout << requiredbutter << " cups of butter\n";
	cout << requiredflour << " cups of flour\n";

	return 0;



}

