#include <iostream>
#include "io.h"

void output(int x){
    std::cout << "You entered: " << x << '\n';
}

int readNumber(){
    int x{};
    std::cout<< "Enter an integer: ";
    std::cin >> x;
    return x;
}