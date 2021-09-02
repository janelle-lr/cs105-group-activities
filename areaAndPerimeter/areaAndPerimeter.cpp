//Area & Perimeter Group Activity 

//Group Members - Olivia, Riom, Janelle, & Western

//coding - Riom, Western, & Janelle
//Commenter - Livvy (To Show Group UnderStanding)

#include <iostream>
#include <cmath>
using namespace std;

class Shapes { //creating a base class called "shapes"
public: //creating a public access specifier
	int a, b; //declaring sideA, B, C as integers

	Shapes(int sA = 0, int sB = 0, int sC = 0) { //creating a constructor with parameters for SidesA, B, & C
		a = sA; //declaring sideA as sA
		b = sB; //declaring sideB as sB
	}

	void read_rectangle() { //creating a "read_rectangle" function
		newWidth:
		cout << "\nInput rectangle width (1 to 100000) : "; //creating a ouput for the user
		cin >> a; //creating a input for the user
		if (a <= 1 || a >= 10000) {
			cout << "\nInvalid input: please enter an number from 1 to 100000" << endl; //creating a output for the user
			goto newWidth; //creating a label for invalid input then will get a new number from user
		}
		else {
		newLength:
			cout << "\nInput rectangle length (1 to 100000) : ";//creating a ouput for the user
			cin >> b;//creating a input for the user
			if (a <= 1 || a >= 10000) {
				cout << "\nInvalid input: please enter an number from 1 to 100000" << endl; //creating a output for the user
				goto newLength; //creating a label for invalid input then will get a new number from user
			}
		}
	}

	void read_square() { //creating a "read_rectangle" function
		newWidthSqr:
		cout << "\nInput square width (1 to 100000) : "; //creating a output for the user
		cin >> a; //creating a input for the user 
		if (a <= 1 || a >= 10000) {
			cout << "\nInvalid input: please enter an number from 1 to 100000" << endl; //creating a output for the user
			goto newWidthSqr; //creating a label for invalid input then will get a new number from user
		}
	}

	void read_circle() { //creating a "read_rectangle" function
		newRad:
		cout << "\nInput circle radius : "; //creating a output for the user
		cin >> a; //creating a input for the user
		if (a <= 1 || a >= 10000) {
			cout << "\nInvalid input: please enter an number from 1 to 100000" << endl;//creating a output for the user
			goto newRad; //creating a label for invalid input then will get a new number from user
		}
	}

	void read_rhombus() { //creating a "read_rhombus" function
		newDiag1:
		cout << "\nInput rhombus diagonal 1 : "; //creating a output for the user
		cin >> a; //creating a input for the user
		cout << "\nInput rhombus diagonal 2 : "; //creating a output for the user
		cin >> b; //creating a input for the user
		if (a <= 1 || a >= 1000) {
			cout << "\nInvalid input: please enter an number from 1 to 1000" << endl; //creating a output for the user
			goto newDiag1; //creating a label for invalid input then will get a new number from user
		}
		else {
		newDiag2:
			cout << "\nInput rectangle length (1 to 1000) : ";//creating a ouput for the user
			cin >> b;//creating a input for the user
			if (a <= 1 || a >= 1000) {
				cout << "\nInvalid input: please enter an number from 1 to 1000" << endl; //creating a output for the user
				goto newDiag2; //creating a label for invalid input then will get a new number from user
			}
			goto newDiag2; //creating a label for invalid input then will get a new number from user
		}
	}
};

class Perimeter : public Shapes { //creating a derived class "Perimeter" and accessing public Base class "Shapes"
public:
	void perimeter_rectangle() { //creating a "perimeter_rectangle" function
		cout << (a * 2) + (b * 2); //creating a output that is timesing (*) datamembers a & b
	}

	void perimeter_square() { //creating a "perimeter_square" function
		cout << a * 4;
	}

	void perimeter_circle() { //creating a "perimeter_circle" function
		cout << a * 2 * 3.14;
	}

	void perimeter_rhombus() { //creating a "perimeter_rhombus" function
		cout << (a * 2) + (b * 2);
	}
};

class Area : public Shapes { //creating a derived class called "area" and accessing from the base class "Shapes"
public:
	void area_rectangle() { //creating a "area_rectangle" function
		cout << a * b;
	}

	void area_square() { //creating a "area_square" function
		cout << pow(a, 2); //creating a output for pow
	}

	void area_circle() { //creating a "area_circle" function
		3.14 * pow(a, 2); //creating pie(yum) * (multiplication/times) pow 
	}

	void area_rhombus() { //creating a "area_rhombus" function
		cout << (a * b) / 2; //creating a output for (a times(*) b divide by 2)
	}
};

int main()
{
   //wow your mom is planetary & has a phatty UWU XD RAWR :3
	//cout << "░░░░░░░░░░░█▀▀░░█░░░░░░" << endl;
	//cout << "░░░░░░▄▀▀▀▀░░░░░█▄▄░░░░" << endl;
	//cout << "░░░░░░█░█░░░░░░░░░░▐░░░" << endl;
	//cout << "░░░░░░▐▐░░░░░░░░░▄░▐░░░" << endl;
	//cout << "░░░░░░█░░░░░░░░▄▀▀░▐░░░" << endl;
	//cout << "░░░░▄▀░░░░░░░░▐░▄▄▀░░░░" << endl;
	//cout << "░░▄▀░░░▐░░░░░█▄▀░▐░░░░░" << endl;
	//cout << "░░█░░░▐░░░░░░░░▄░█░░░░░" << endl;
	//cout << "░░░█▄░░▀▄░░░░▄▀▐░█░░░░░" << endl;
	//cout << "░░░█▐▀▀▀░▀▀▀▀░░▐░█░░░░░" << endl;
	//cout << "░░▐█▐▄░░▀░░░░░░▐░█▄▄░░░" << endl;
	//cout << "░░░▀▀▄░░░░░░░░▄▐▄▄▄▀░░░" << endl;
	//cout << "░░░░░░░░░░░░░░░░░░░░░░░";
	Perimeter prmtr; //creating a object from the derived class
	Area area; //creating a object from the derived class

	int testCase = 0, shapeChoice = 0; //declaring a menuChoice as a integer 

	while (testCase != 5) { //creating a while loop for menuChoice and continue running to it equals 5
		cout << "\nChoose a shape" << endl; //creating a output for the user
		cout << "1. Rectangle\n2. Square\n3. Circle\n4. Rhombus\n5. Exit" << endl; //creating a ouput for the user to choose
		cout << "Enter your choice : ";
		cin >> testCase; //creating a input for the user

		switch (testCase) { //creating a switch statement 
		case 1: 
			cout << "\nRectangle calculator" << endl; //creating a output for the user
			cout << "1. Area\n2. Perimeter" << endl; //creating a output for the user
			cout << "Enter your choice: "; //creating a output for the user to choose
			cin >> shapeChoice; //creating a input for the user

			if (shapeChoice == 1) {
				area.read_rectangle();
				area.area_rectangle();
			}
			else if (shapeChoice == 2) {
				prmtr.read_rectangle();
				prmtr.perimeter_rectangle();
			}
			break;
		case 2:
			cout << "\nSquare calculator" << endl;
			cout << "1. Area\n2. Perimeter" << endl;
			cout << "Enter your choice: "; //creating a output for the user to choose
			cin >> shapeChoice; //creating a input for the user

			if (shapeChoice == 1) {
				area.read_square();
				area.area_square();
			}
			else if (shapeChoice == 2) {
				prmtr.read_square();
				prmtr.perimeter_square();
			}
			break;
		case 3:
			cout << "circle calculator";
			cout << "1. Area\n2. Perimeter" << endl; //creating a output for the user
			cout << "Enter your choice: "; //creating a output for the user to choose
			cin >> shapeChoice; //creating a input for the user

			if (shapeChoice == 1) {
				area.read_circle();
				area.area_circle();
			}
			else if (shapeChoice == 2) {
				prmtr.read_circle();
				prmtr.perimeter_circle();
			}
			break;
		case 4:
			cout << "\nRhombus calculator" << endl; //creating a output for the user
			cout << "1. Area\n2. Perimeter" << endl; //creating a output for the user
			cout << "Enter your choice: "; //creating a output for the user to choose
			cin >> shapeChoice; //creating a input for the user

			if (shapeChoice == 1) {
				area.read_rhombus();
				area.area_rhombus();
			}
			else if (shapeChoice == 2) {
				prmtr.read_rhombus();
				prmtr.perimeter_rhombus();
			}
			break;
		case 5:
			cout << "\nByebye" << endl;
			return 0;
		} // end of the switch statement
	}

}
