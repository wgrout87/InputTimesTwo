#include <iostream>

int getValueFromUser()
{
    std::cout << "Please enter an integer: ";

    int num{};
    std::cin >> num;

    return num;
}

int main ()
{
    int num{getValueFromUser()};

    std::cout << "Double that number is: " << num * 2 << '\n';

    std::cout << "Triple that number is: " << num * 3 << '\n';

    return 0;
}
