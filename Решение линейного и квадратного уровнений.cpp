#include <iostream>
#include <cmath>

using namespace std;

void SolveEquation(double a, double b, double& root) // a*x + b = 0
{
    if (a == 0) // b = 0
    {
        if (b == 0)
            cout << " all real numbers are roots\n";
        else
            cout << " no roots\n";
    }
    root = -b / a;
}

void SolveEquation(double a, double b, double c, double& root1, double& root2) // a*x*x + b*x + c = 0
{
    if (a != 0 && b != 0 && c != 0) // a*x*x + b*x + c = 0
    {
        double d;
        d = b * b - 4 * a * c;
        if (d > 0)
        {
            root1 = (-b - sqrt(d)) / (2 * a);
            root2 = (-b + sqrt(d)) / (2 * a);
        }
        else if (d == 0)
        {
            cout << " unique solution (roots coincide)\n";
            root1 = -b / (2 * a);
            root2 = -b / (2 * a);
        }
        else
            cout << " no roots\n";
    }
    else if (a == 0 && b!= 0 && c != 0) // b*x + c = 0
    {
        SolveEquation(b, c, root1);
    }
    else if (a!= 0 && b== 0 && c!= 0)// a*x*x + c = 0
    {
        double xx = -c/a; //За умови вже не може дорівнювати нулю, тому перевіряємо лише знак плюс або мінус
        if (xx > 0)
        {
            root1 = sqrt(xx);
            root2 = -sqrt(xx);
        }
        else 
            cout << " no roots\n";
    }
    else if (a!= 0 && b!= 0 && c== 0) // a*x*x + b*x = 0
    {
        SolveEquation(a, b, root1);
        root2 = 0;
    }
    else if (a == 0 && b == 0 && c != 0)
        cout << " no roots\n";

    else if ((a == 0 && b!= 0 && c == 0) || (a!=0 && b==0 && c== 0)) // b*x = 0 or a*x*x = 0
        root1 = 0;
    else
        cout << " all real numbers are roots\n";
}
int main()
{
    double a, b;
    double result = 0;
    cout << " Solve for linear equation\n";
    cout << " Input a: ";
    cin >> a;
    cout << " Input b: ";
    cin >> b;
    SolveEquation(a, b, result);
    cout << "\n Linear equation\n";
    cout <<' '<<a << "*x + " << b << " = 0\n";
    cout << "\n Solve\n";
    cout << " x = " << result << endl;

    cout << "\n-----------------------------\n";

    cout << "\n Solve for quadratic equation\n";
    double a1, b1, c1;
    double result1 = 0;
    double result2 = 0;
    cout << " Input a: ";
    cin >> a1;
    cout << " Input b: ";
    cin >> b1; 
    cout << " Input c: ";
    cin >> c1;
    SolveEquation(a1, b1, c1, result1, result2);
    cout << "\n Quadratic equation\n";
    cout << ' ' << a1 << "*x*x + " << b1 <<"*x + " << c1 << " = 0\n";
    cout << "\n Solves\n";
    cout << " x1 = " << result1 << endl;
    cout << " x2 = " << result2;

    return 0;
}