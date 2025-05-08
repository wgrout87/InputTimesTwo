#include <iostream>

int main ()
{
    std::cout << "Please enter an integer: ";
    int x {0};

    std::cin >> x;

    std::cout << "Double that number is: " << x * 2;

    return 0;
}
