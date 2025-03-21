#include <iostream>
#include <math.h>
using namespace std;

#define PI 3.1415

int main()
{
    double x;
    double y;
    double z;
    double c;

    cout << " Enter value x:";
    cin >> x;

    if (x<=0) {
        cerr << " The range of acceptable values for c:\n \t x > 0.\n";
        return 1;
    }

    cout << " Enter value y:";
    cin >> y;
    cout << " Enter value z:";
    cin >> z;

    if ((y * z == -1)) {
        cerr << " The range of acceptable values for c:\n \t y*z != -1.\n";
        return 1;
    }

    c = sqrt(PI * x) * exp(sin(pow(x, 2))/x) + (log(1 + pow(y, 4)) * pow(x*y-z,1/3)) / (1 + y * z);

    cout << "\n\tResult"<<endl;
    cout << " c=" << c << endl;

    return 0;
}