#include <iostream>

int main()
{ 
    int r1 = 7;
    int r2 = 10;

    double x, y;
    std::cout << "input x coordinate: ";
    std::cin >> x;
    std::cout << "\ninput y coordinate: ";
    std::cin >> y;

    double radius_vector = x * x + y * y;

    if(radius_vector > r1 * r1 && radius_vector < r2 * r2)
        std::cout << "this point is inside of the ring\n";
    else
        std::cout << "this point is outside of the ring\n";

    return 0;
}