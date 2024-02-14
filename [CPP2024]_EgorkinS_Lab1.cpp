#include <iostream>
using namespace std;

void Discriminant(const double &a, const double &b, const double &c, double &D) {
    D = b * b - 4 * a * c;
}


int main()
{
    double a = 0, b = 0, c = 0, D = 0, x = 0;
    //cin >> a >> b >> c;
    Discriminant(a, b, c, D);
    

}
