// groupActivityCS105.cpp : This file contains the 'main' function. Program execution begins and ends there.
// cars and bikes activity

//Group Assignment for Derived & Base Classes
//Western, Janelle, Riomh & Livvy

//Western, Janelle, Riomh Wrote the code
//Livvy Wrote Comments to explain her/The Teams understanding and participation


#include <iostream>
using namespace std;

class Vehicle { //creating a base class
public: //creating a public access specifier
    virtual void display() { //Creating a display function
        cout << "This is a Vehicle." << endl; //outputting a output
    }
};

//child class, janelle's code yeeyee
class Car : public Vehicle { //derived class accessing(inheriting) from base class "Vehicle"
public: //creating a public access specifier 
    void display() { //creating a display function for derived class
        cout << "This is a car." << endl; //creating a output for the display function
    }
};
// western wrote the class below
class Bike : public Vehicle { //creating a second derived class that inherits from base class "Vehicle"
public: //creating a public access specifier for second derived class
    void display() { //creating a display function for second derived class "bike"
        cout << "this is a bike!"; //creating a output for display function
    }
};

int main()
{
//Riomh's Main Function
    int wheels; //initializing integer wheels
    cout << "How many wheels does your vehicle have?\t"; //creating a output for the user
    cin >> wheels; //creating a input for the user
    Vehicle* v; //creating a pointer to the vehicle base class (instantiating a pointer)
     
    if(wheels == 2){ //creating a if statement - checking user input
        v = new Bike;
    }
    else if(wheels == 4){
        v = new Car;
    }
    else {
        v = new Vehicle;
    }

    v->display(); //using vehicle pointer for accessing display
}

