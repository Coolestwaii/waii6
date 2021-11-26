#include <iostream>
#include <cmath>


using namespace std;

double deg2rad(double deg){
    double rad = deg*M_PI/180;
    return rad;
}

double rad2deg(double rad){
    double deg = rad*180/M_PI;
    return deg;
}

double findXComponent(double x1, double x2, double deg1, double deg2){
    double xcomp = (cos(deg1) * x1) + (cos(deg2) * x2);
    return xcomp;
}

double findYComponent(double y1, double y2, double deg1, double deg2){
    double ycomp = (sin(deg1) * y1) + (sin(deg2) * y2);
    return ycomp;
}

double pythagoras(double x, double y){
    double pytha = sqrt(pow(x,2) + pow(y,2));
    return pytha;
}

void showResult(double xcomp, double ycomp){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << "\n";
    cout << "Length of the resultant vector = " << xcomp << "\n";
    cout << "Direction of the resultant vector (deg) = " << ycomp << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << "\n";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
