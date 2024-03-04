#include <iostream>
using namespace std;

void InputData(double &a, double &b, double &c){
  cin >> a >> b >> c;
}

void Discriminant(const double a, const double b, const double c, double &D) {
    D = b * b - 4 * a * c;
}

void Roots(const double a, const double b, const double D,double & x1, double & x2) {
    x1 = (-b + sqrt(D)) / (2 * a);
    x2 = (-b - sqrt(D)) / (2 * a);
};


int main()
{
    double a = 0.0, b = 0.0, c = 0.0, D = 0.0, x1 = 0.0, x2 = 0.0;
    InputData(a,b,c);
  Discriminant(a, b, c, D);   
  if (D < 0) {
        cout << "No roots";
        return (0);
    }
    else {
        Roots(a, b, D, x1, x2);
    }
    if (x1 == x2) {
        cout << "There is one root: " << x1;
    }
    else {
        cout << "There are two roots: " << x1 << " ; " << x2;
    }
    return(0);
}
