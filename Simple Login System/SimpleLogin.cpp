#include <bits/stdc++.h>
#include <memory>

using namespace std;

int main() {
    std::shared_ptr<string> username = std::make_shared<string>("Tamim Hasan Nahian");
    std::shared_ptr<string> password = std::make_shared<string>("SayHellotoBangladesh!");
    weak_ptr<string> WeakUsername = username;
    weak_ptr<string> WeakPassword = password;
    string UsernameInput;
    string UserPasswordInput;
    while (true) {
        std::cout << "Enter Your Username: ";
        getline(cin, UsernameInput);
        UsernameInput == *username ? std::cout << "Correct Username!" << std::endl : std::cout << "Wrong Username!" << std::endl;
        std::cout << "Enter Your Password: ";
        getline(cin, UserPasswordInput);
        UserPasswordInput == *password ? std::cout << "Correct Password!" << std::endl : std::cout << "Incorrect Password!" << std::endl;
        UsernameInput == *username && UserPasswordInput == *password ? std::cout << "Successfully Logged in!" << std::endl : std::cout << "Invalid Username or Password!" << std::endl;
    }
    return 0;
}