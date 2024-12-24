#include <iostream>
#include <cmath>

using namespace std;

int xc;
int yc;
int xp;        
int yp;
int rad;

void circleEquationDisplay();

int main(){

    cout << "Please enter an X coordinate of center of a circle: ";
    cin >> xc;
    cout << "Please enter an Y coordinate of center of a circe: ";
    cin >> yc;
    cout << "Please enter a radius of a circle: ";
    cin >> rad;

    circleEquationDisplay();

    return 0;
}

void circleEquationDisplay(){
    cout << "The equation of this circle is: (x - " << xc << ")^2 + (y - " << yc << ")^2 = " << pow(rad, 2) << endl;
}