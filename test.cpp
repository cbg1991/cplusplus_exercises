
//Christian Gaillard - Assignment 5
#include <iostream>
using namespace std;

void stringPrint(string array[], const int SIZE);
void salesPrint(int array[], const int SIZE);
int averageSales(int array10[], const int SIZE);
void aboveAverage(int salesArray[], string colorArray[], const int SIZE, int average);
int main() 
{
	const int SIZE = 6;
	int monthlyAverage = 0;
	string colors[SIZE] = {"purple", "blue", "green", "yellow", "orange", "red"};
	int sales[SIZE];
	for(int i = 0; i < SIZE; i++) {
		cout << "Enter " << colors[i] << " monthly sales: ";
		cin >> sales[i];
	}
	monthlyAverage = averageSales(sales, SIZE);
	cout << "The average monthly sales is: " << monthlyAverage << "\n";

	aboveAverage(sales, colors, SIZE, monthlyAverage);
	//stringPrint(colors, SIZE);
return 0;
}
void stringPrint(string array[], const int SIZE) 
{
	for(int i = 0; i < SIZE; i++) {
		cout << array[i] << " ";
	}
}

void salesPrint(int array[], const int SIZE) {
	for(int i = 0; i < SIZE; i++) {
		cout << array[i] << " ";
	}
}

int averageSales(int array[], const int SIZE) {
	int average;
	int sum;
	for (int i = 0; i < SIZE; i++) {
		sum = array[i] + sum;
	}
	average = sum / SIZE;
	return average;
}

void aboveAverage(int salesArray[], string colorArray[], const int SIZE, int average) {
	cout << "Top selling: \n";
	for(int i = 0; i < SIZE; i++) {
		if(salesArray[i] >= average) {
			cout << colorArray[i] << "\n";
		}
	}
}