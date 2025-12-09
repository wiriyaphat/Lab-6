#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double Deg){
        double Rad2d;
        Rad2d = Deg * (M_PI/180.0);
        return Rad2d;
}
double rad2deg(double Rad){
        double Deg2r = Rad * (180.0 / M_PI);
        return Deg2r;
}
double findXComponent(double Le1, double Le2, double Rad1, double Rad2){
        double VecX1 = Le1 * cos(Rad1);
        double VecX2 = Le2 * cos(Rad2);
        return VecX1 + VecX2;
}
double findYComponent(double Ly1, double Ly2, double Rad1, double Rad2){
        double VecY1 = Ly1 * sin(Rad1);
        double VecY2 = Ly2 * sin(Rad2);
        return VecY1 + VecY2;
}

double pythagoras(double TotX, double TotY){
        double result_vec_length = sqrt( pow(TotX, 2) + pow(TotY, 2) );
        return result_vec_length;
}
void showResult(double result_vec_length, double result_vec_direction){
cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";

cout << "Length of the resultant vector = " << result_vec_length << endl;

cout << "Direction of the resultant vector (deg) = " << result_vec_direction << endl;

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
