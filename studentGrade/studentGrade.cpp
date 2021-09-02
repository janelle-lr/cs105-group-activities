//Student grade Group Activity

//Group Members - Janelle, Riomh, Western & Olivia

//Coders - Janelle, Riomh & Western

//Commenter - Olivia (Showing Group Understanding of code)

#include <iostream>
using namespace std;

class Student { //creating a base class called "student"
public: //creating a public access specifier
    int g1, g2, g3, g4, g5, avg; //declaring the g's as integers
    string name; //declaring name as a string

    Student(int g1 = 0, int g2 = 0, int g3 = 0, int g4 = 0, int g5 = 0, int a = 0, string n = "") { //creating a constructor with parameters for the g's
        g1 = g1; //declaring g1 as g1
        g2 = g2;
        g3 = g3;
        g4 = g4;
        g5 = g5;
        avg = a;
        name = n; //declaring name as a n
    }

    void read() { //creating a read function
        cout << "\nEnter student name : "; //creating a output for the user
        cin >> name; //creating a input for the user
        cout << "Enter grade 1 : ";
        cin >> g1;
        cout << "Enter grade 2 : ";
        cin >> g2;
        cout << "Enter grade 3 : ";
        cin >> g3;
        cout << "Enter grade 4 : ";
        cin >> g4;
        cout << "Enter grade 5 : ";
        cin >> g5;
    }

    void find_grade() { //creating a find_grade function
        avg = (g1 + g2 + g3 + g4 + g5) / 5; //multiplying 

        cout << "Average Grade: " << avg << "%, which gives the grade ";

        if (avg >= 80) { //creating a if statement for grade
            cout << "A"; //declaring grade as "A"
        }
        else if (avg < 80 && avg >= 60) {
            cout << "B";
        }
        else if (avg < 60 && avg >= 50) {
            cout << "C";
        }
        else {
            cout << "D";
        }
    }

    void report(){ //creating a function called "report"
        cout << name << endl;
        cout << "Grades: " << g1 << " " << g2 << " " << g3 << " " << g4 << " " << g5 << endl; //creating a output for grades t
        find_grade();
    }
};




int main()
{
    int T; //declaring T as a integer
    cout << "How many Test Cases do you want to perform?\t"; //creating  a output for the user
    cin >> T; //creating a input for the user
    Student s;

    for(int i = 0; i < T; i++){ // creating a for loop
        s.read();
        s.report();
    }
}

