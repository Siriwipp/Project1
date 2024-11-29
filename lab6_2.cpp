#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double i){
    return i*(M_PI/180);
}
double rad2deg(double k){
    return k*(180/M_PI);
}
double  findXComponent(double L1,double L2,double A1,double A2){
    double x1,x2;
    x1 = L1*cos(A1);
    x2 = L2*cos(A2);
    return x1+x2;
}
double  findYComponent(double L1,double L2,double A1,double A2){
    double x1,x2;
    x1 = L1*sin(A1);
    x2 = L2*sin(A2);
    return x1+x2;
}
double  pythagoras(double x,double y){
    return sqrt((x*x)+(y*y));
}
void showResult(double L,double d){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = "<< L <<"\n";
    cout << "Direction of the resultant vector (deg) = "<< d << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n"; 
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
