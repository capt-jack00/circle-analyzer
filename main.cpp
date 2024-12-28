#include <iostream>
#include <cmath>

using namespace std;

double xc;
double yc;
double xp;        
double yp;
double rad;
double ptCirDist;

void circleEquationDisplay();

int main(){

    cout << "Please enter an X coordinate of center of a circle: ";
    cin >> xc;
    cout << "Please enter an Y coordinate of center of a circe: ";
    cin >> yc;
    cout << "Please enter a radius of a circle: ";
    cin >> rad;
    cout << "Please enter an X coordinate of point A";
    cin >> xp;
    cout << "Please enter an Y coordinate of point A";
    cin >> yp;

    //circleEquationDisplay();

    return 0;
}

void circleEquationDisplay(){
    cout << "The equation of this circle is: (x - " << xc << ")^2 + (y - " << yc << ")^2 = " << pow(rad, 2) << endl;
}

void pointAndCirleDist(){
    double x = pow(xp - xc, 2);
    double y = pow(yp - yc, 2);
    ptCirDist = sqrt(x + y);

    if(ptCirDist > rad){
        cout << "Point A is outside the circle" << endl;
    }
    else if(ptCirDist = rad){
        cout << "Point A is on the circle" << endl;
    }
    else if(ptCirDist < rad){
        cout << "Point A is inside the circle" << endl; 
    }
    else{
        cout << "Something went wrong" << endl;
    }
}