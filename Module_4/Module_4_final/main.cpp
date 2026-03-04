#include <iostream>


int main(){
    std::cout << "please enter two floats";
    double x{};
    double y{};
    std::cin >> x >> y;
    std::cout << "enter an operation";
    char c{};
    std::cin >> c;

    if(c != '+' && c != '-' && c != 'x' && c != '/'){
        return 0;
    }
    double z {};
    
    if(c == '+'){
        z = x + y;
    }
    
    if(c == '-'){
        z = x - y;
    }
    
    if(c == 'x'){
        z = x * y;
    }
    
    if(c == '/'){
        z = x / y;
    }
    std::cout << " output is: " << z;

}
