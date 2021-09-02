//Shape Group Activity 
//Olivia, Western, Janelle, & Riom

//Olivia - Commenting To show Group understanding
//Western, Janelle, & Riom Coding

#include <iostream>
using namespace std;

class Rectangle { //Creating a Base class "Rectangle"
public: //Creating a public access specifier
    int width, height; //declaring Width & height as a integer

    Rectangle(int w = 1, int h = 1){ //Creating a constructor with parameters for width & height
        width = w; //declaring width as w
        height = h; //declaring height as h
    }

    void display() { //creating a display function for base class "rectangle"
        cout << "\nWidth : " << width; //creating a output thats outputting width
        cout << "\tHeight : " << height << endl; //creating a output thats outputting height
    }
};

class RectangleArea : public Rectangle { //creating a derived class of rectangle "RectangleArea" and accessing public base class "Rectangle"
public: //creating a public access specifier
    void read_input() { //creating a read input function for the derived class
        newWidth:
        cout << "Enter rectangle width : "; //creating a output for the user
        cin >> width; //creating a input for the user
        if (width < 1 || width > 1000) { //creating a if statement 
            cout << "\nInvalid input: please enter a number from 1 to 1000" << endl; //creating a ouput for the user
            goto newWidth; //creating a label to ask the user to enter a new number
        }
        else {
            newHeight:
            cout << "\nEnter rectangle height : "; //creating a output for the user
            cin >> height; //creating a input for the user
            if (width < 1 || width > 1000) {
                cout << "\nInvalid input: please enter a number from 1 to 1000" << endl; //creating a output for the user
                goto newHeight; //creating a label to ask the user to enter a new number
            }
        }
    }

    void display() { //creating a derived display function
        cout << "\nArea: " << width * height; //creating  a output to output width times (*) height
    }
};


int main()
{
    RectangleArea rec; //creating a object for the derived class RectangleArea 
    Rectangle* r = &rec; //creating a pointer for the base class and pointing it at the derived class RectangleArea = rectangle
    
    rec.read_input();//accessing the derived class function "read_input()"

    r->display();//pointing at the display function within the base class Rectangle
    rec.display(); //calling the base function in the derived class
}

