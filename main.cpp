#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2){
    double dx = x2 - x1;
    double dy = y2 - y1;


    double dxSquared = dx * dx;
    double dySquared = dy * dy;


    double sumOfSquares = dxSquared + dySquared;


    double distance = sqrt(sumOfSquares);

    return distance;
}

int main() {

    double x1, y1, x2, y2;
    cout << "Enter coordinates of point 1 (x y): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of point 2 (x y): ";
    cin >> x2 >> y2;


    double result = distance(x1, y1, x2, y2);


    cout << "Distance between the points: " << result << endl;

    return 0;
}
