#include <iostream>
#include <math.h>
using namespace std;

#define PI 3.1415

int main()
{
    double x;
    double y;
    double z;
    double a;
    double b;

    cout << " Enter value x:";
    cin >> x;
    cout << " Enter value y:";
    cin >> y;
    cout << " Enter value z:";
    cin >> z;

    a = acos(y / (2 + pow(y, 2) + abs(y * z))) * (sqrt(PI + pow(x, 2) + pow(sin(y * z), 2)) - log10(2 / (pow(x, 2) + pow(y, 2) + 1)));
    b = exp(-3 * pow(x, 2) + y / 5 - z) + pow(pow(tan(x), 2) / (1 + sin(PI * y / 2)), 1 / 3) - (x + y + z) / (x * y * z);

    cout << "\n\tResults:"<<endl;
    cout << " a = " << a << endl;

    if (x * y * z == 0) {
        cerr << "The range of acceptable values ​​for b: x*y*z!=0";
        return 1;
    }
    else
    {
        cout << " b = " << b << endl;
        return 0;
    }

    return 0;
}