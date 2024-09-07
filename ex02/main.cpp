#include <iostream>
#include <string>

int main(){

    std::string *strPtr;

    std::string str = "HI THIS IS BRAIN";
    strPtr = &str;
    std::string &strRef = str;

    std::cout << "The memory address of the string variable = " << &str << std::endl;
    std::cout << "The memory address held by stringPTR = " << strPtr << std::endl;
    std::cout << "The memory address held by stringREF = " << &strRef << std::endl;

    std::cout << "The value of the string variable = " << str << std::endl;
    std::cout << "The value pointed to by stringPTR = " << *strPtr << std::endl;
    std::cout << "The value pointed to by stringREF = " << strRef << std::endl;
}