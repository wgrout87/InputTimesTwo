#include <iostream>

int main ()
{
    std::cout << "Please enter an integer: ";

    int num {0};
    std::cin >> num;

    std::cout << "Double that number is: " << num * 2 << '\n';

    return 0;
}
