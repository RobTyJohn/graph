/*
	Robert T. Johnson
	Module 05 Programming Assignment
	February 2, 2019
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Point {// Point class
public:
	Point();// default constructor, orders vector into matrix
	bool runProgram();// input control, controls other class function sequence
	void drawCoordinates();// prints coordinated to screen
	void clearPoints();// erases previous points and prints new screen
	void printAllCoordinates();// prints all of the coordinates entered
	void printCurrentCoordinates();// prints the last coordinated entered

private:
	int x, y;// int values for X and Y coordinates
	vector<string> xCoordinates, yCoordinates;// containers to hold X and Y coordinates

	vector<vector<string>> a {
		{ "  -","---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " 10", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  9", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  8", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  7", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  6", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  5", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  4", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  3", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  2", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  1", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","-10"," -9", " -8", " -7", " -6", " -5", " -4", " -3", " -2", " -1", "  0","  1","  2","  3","  4","  5","  6","  7","  8","  9"," 10","  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " -1", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " -2", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " -3", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " -4", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " -5", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " -6", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " -7", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " -8", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " -9", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "-10", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  -","---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---" }
		};// matrix to show points
};


int main() {// main program

	bool endProgram;// bool value for main program loop
	Point point;// initializes instance of Point class

	cout << "\tPoint\n\n";// title

	do {// main program loop

		endProgram = point.runProgram();// starts program sequence

	} while (!endProgram);// condition to see if program should exit

	return 0;// closes program
}

Point::Point() {// default constructor definition
	a.resize(23);// orders vector a into a matrix structure 23 rows x 23 columns
	for (int i = 1; i < 23; i++) {
		a[i].resize(23);
	}
}

bool Point::runProgram() {// receives input and calls class functions

	string stringX, stringY;// string values for initial input

	cout << "Enter X coordinate (an integer value between -10 and 10):\n--'exit' to close program\n--'clear' to clear points\n>";
	cin >> stringX;

	if (stringX == "exit") {// checks to see if program should close
		return true;
	}
	else if (stringX == "clear") {// checks to see if previous points should be cleared
		clearPoints();
		return false;
	}

	try {
		x = stoi(stringX);// converts stringX into a int and assigns value to x
		xCoordinates.push_back(stringX);// stores value in container
	}
	catch (const invalid_argument& e) {// catches non integer input
		cout << "Wrong data type- Input must be an integer\n";
		return false;
	}
	catch (const out_of_range& e) {// catches too large of input
		cout << "Input value is too large\n";
		return false;
	}

	if (x > 10 || x < -10) {// checks to see if integer is within bounds
		cout << "X value is out of range\n";
		xCoordinates.pop_back();
		return false;
	}

	cout << "Enter Y coordinate (an integer value between -10 and 10):\n--'exit' to close program\n--'clear' to clear points\n>";
	cin >> stringY;// same process as above for Y values

	if (stringY == "exit") {
		return true;
	}
	else if (stringY == "clear") {
		clearPoints();
		return false;
	}

	try {
		y = stoi(stringY);
		yCoordinates.push_back(stringY);
	}
	catch (const invalid_argument& e) {// catches non integer input
		cout << "Wrong data type- Input must be an integer\n";
		xCoordinates.pop_back();
		return false;
	}
	catch (const out_of_range& e) {// catches too large of input
		cout << "Input value is too large\n";
		xCoordinates.pop_back();
		return false;
	}

	if (y > 10 || y < -10) {
		cout << "Y value is out of range\n";
		xCoordinates.pop_back();
		yCoordinates.pop_back();
		return false;
	}
	// function calls
	drawCoordinates();// draw coordinates to screen
	printCurrentCoordinates();// show the last entry
	printAllCoordinates();// show all previous entries

	return false;
}

void Point::drawCoordinates() {// function definition

	int tempX = x;// assigns x value to local variable
	int tempY = y;// assigns y value to local variable

	// translates input value to matrix locations
	tempX += 11;
	tempY *= -1;
	tempY+= 11;

	a[tempY][tempX] = "  *";// prints point

	for (int i = 0; i < 23; i++) {// prints matrix values to represent graph and prints point to screen
		for (int j = 0; j < 23; j++) {
			cout << a[i][j];
		}
		cout << endl;
	}
}

void Point::clearPoints() {// clears all previous values and redraws graph
	x = 0;
	y = 0;

	if (!xCoordinates.empty()) {
		xCoordinates.clear();
	}
	if (!yCoordinates.empty()) {
		yCoordinates.clear();
	}

	vector<vector<string>>b{
		{ "  -","---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " 10", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  9", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  8", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  7", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  6", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  5", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  4", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  3", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  2", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  1", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","-10"," -9", " -8", " -7", " -6", " -5", " -4", " -3", " -2", " -1", "  0","  1","  2","  3","  4","  5","  6","  7","  8","  9"," 10","  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " -1", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " -2", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " -3", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " -4", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " -5", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " -6", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " -7", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " -8", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " -9", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  |","   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "-10", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  |" },
		{ "  -","---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---", "---" }
	};

	a = b;// assigns vector b to a 
	b.clear();// clears b 
	for (int i = 0; i < 23; i++) {// reprints graph
		for (int j = 0; j < 23; j++) {
			cout << a[i][j];
		}
		cout << endl;
	}
}

void Point::printCurrentCoordinates() {// prints the current coordinates 
	int currentXCoordinateLocation = xCoordinates.size()-1;// sets value locations in vector
	int currentYCoordinateLocation = yCoordinates.size()-1;

	if (currentXCoordinateLocation >= 0) {// checks to see if any values are in vector
		if (currentXCoordinateLocation == currentYCoordinateLocation) {// checks to see if the last value of each vector is in the same location
			cout << "Current X,Y coordinates: "<< "(" << xCoordinates[currentXCoordinateLocation] << "," << yCoordinates[currentYCoordinateLocation] << ") \n";	// prints current value to screen
		}
		else {
			cout << "Error- resetting points\n";// if error is found all variables are reset
			clearPoints();
		}
	}
	else {
		cout << "No points stored\n";
	}
}

void Point::printAllCoordinates() {// prints all of the previous coordinates to the screen
	int xVectorSize = xCoordinates.size();// checks to see the size of the vector containers
	int yVectorSize = yCoordinates.size();

	if (xVectorSize > 0) {// checks to see if vector contains values
		if (xVectorSize == yVectorSize) {// checks to make sure both vectors have equal size
			cout << "All X,Y coordinates: ";// prints all vectors to screen
			for (int i = 0; i < xVectorSize; i++) {
				cout << "(" << xCoordinates[i] << "," << yCoordinates[i] << ") ";
			}
			cout << endl;
		}
		else {
			cout << "Error- resetting points\n";// if error all points are cleared
			clearPoints();
		}
	}
	else {
		cout << "No points stored\n";
	}
}
