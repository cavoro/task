#include <iostream>
#include <string>
#include <sstream>

int main() {
 
    const int constNumber = 12345;
    std::string constStr = std::to_string(constNumber);
    std::cout << "Константа як рядок: " << constStr << std::endl;

 
    std::cout << "Введіть ціле число: ";
    int userNumber;
    std::cin >> userNumber;

    std::stringstream ss;
    ss << userNumber;
    std::string inputStr = ss.str();
    std::cout << "Введене число як рядок: " << inputStr << std::endl;

    return 0;
}
