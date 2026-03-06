#include <iostream>

int main(){
    char c{};
    int x{};
    int y{};
    std::cout << "please give a char and 2 integers\n";
    std:: cin >> c >> x >> y;

    switch(c){
        case '+':
            std::cout << x + y;
            break;
        case '-':
            std::cout << x - y;
            break;
        case '/':
            std::cout << x / y;
            break;
        case '%':
            std::cout << x % y;
            break;
        default:
            std::cout << "did not input a valid operation";

    }
}