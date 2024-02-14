#include <iostream>
using namespace std;

void Discriminant(const double a, const double b, const double c, double &D) {
    D = b * b - 4 * a * c;
}

void Roots(const double a, const double b, const double D,double & x1, double & x2) {
    x1 = (-b + sqrt(D)) / (2 * a);
    x2 = (-b - sqrt(D)) / (2 * a);
};

int main()
{
    double a = 0, b = 0, c = 0, D = 0, x1 = 0, x2 = 0;
    //cin >> a >> b >> c;
    Discriminant(a, b, c, D);
    if (D < 0) {
        cout << "No roots";
        return (0);
    }
    else {
        Roots(a, b, D, x1, x2);
    }

}
