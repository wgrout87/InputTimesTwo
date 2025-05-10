#include <iostream>

int getValueFromUser()
{
    std::cout << "Please enter an integer: ";

    int num{};
    std::cin >> num;

    return num;
}

int doubleNumber(int x)
{
    return x * 2;
}

int tripleNumber (int y)
{
    return y * 3;
}

int main ()
{
    int num{getValueFromUser()};

    std::cout << "Double that number is: " << doubleNumber(num) << '\n';

    std::cout << "Triple that number is: " << tripleNumber(num) << '\n';

    return 0;
}
