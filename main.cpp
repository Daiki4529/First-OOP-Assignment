#include <iostream>

double square_of(double x)
{
    return x * x;
}

void print_square_of(double x)
{
    std::cout << x << "^2 or (" << x << ")*(" << x << ") is equal to " << square_of(x) << "\n";
}

int main()
{
    std::cout << "Hello world !\n";
    print_square_of(-10);
    print_square_of(2.19);
    return 0;
}