#include <iostream>
#include <cmath>

int main()
{
    float x, y;
    std::cout << "input x: ";  std::cin >> x;
    std::cout << "input y: ";  std::cin >> y;

    float R = 1 / sin(y*y/x);
    float S = exp(1 / x) * log(y);
    float c = std::max(R, S);
    
    std::cout << R << ", " << S << '\n' << c;
    std::cin.get();
    std::cin.get();
    return 0;
}
