#include <iostream>
using namespace std;

void InputData(double &a, double &b, double &c){
  cin >> a >> b >> c;
}

void Discriminant(const double a, const double b, const double c, double &D) {
    D = b * b - 4 * a * c;
}

int main()
{
    double a = 0.0, b = 0.0, c = 0.0, D = 0.0, x1 = 0.0, x2 = 0.0;
    InputData(a,b,c);
  Discriminant(a, b, c, D);
    return(0);
}
