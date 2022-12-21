#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    float x, xPrev;
    x = 0;
    xPrev = -2;
    double eps = 0.000001;
    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = xPrev - (((sqrt(1 - (0.4) * (xPrev * xPrev))) - asin(xPrev)) / ((((-0.4) * xPrev) / (sqrt(1 - (0.4) * xPrev * xPrev))) - (1 / sqrt(1 - (xPrev * xPrev)))));
    }
    cout << "Корень: " << x << endl;
}