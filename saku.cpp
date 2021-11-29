#include <iostream>
#include<cmath>

using namespace std;

double deg2rad(double deg){
    double radresult = deg*(M_PI/180);
    return radresult;
}
double rad2deg(double rad){
    double degresult = rad*(180/M_PI);
    return degresult;
}
double findXComponent(double inputxvec1,double inputxvec2,double inputxdeg1,double inputxdeg2){
    double xvectorlenght = (cos(inputxdeg1)*inputxvec1)+(cos(inputxdeg2)*inputxvec2);
    return xvectorlenght;
}
double findYComponent(double inputyvec1,double inputyvec2,double inputydeg1,double inputydeg2){
    double yvectorlenght = (sin(inputydeg1)*inputyvec1)+(sin(inputydeg2)*inputyvec2);
    return yvectorlenght;
}
double pythagoras(double lenght1 , double lenght2){
    double pythalenght = sqrt(pow(lenght1,2)+pow(lenght2,2));
    return pythalenght;
}
void showResult(double result1,double result2){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    cout << "Length of the resultant vector = " << result1 << endl;
    cout << "Direction of the resultant vector (deg) = " << result2<<endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
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