#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int input;
    srand(time(0));
    int random = rand() % 100 + 1;
    while(true) {
        std::cout << "Enter a Number: ";
        cin >> input;
        if (input < random)
        {
            std::cout << "Too Low!" << std::endl;
            std::cout << "Enter a Number: ";
        }
        else if (input > random)
        {
            std::cout << "Too High!" << std::endl;
            std::cout << "Enter a Number: ";
        }
        else
        {
            std::cout << "You Win!" << std::endl;
            break;
        }
    }
}