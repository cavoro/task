#include <iostream>
#include <iomanip>

int main() {
    int count = 0;  

    for (int ticket = 0; ticket <= 999999; ++ticket) {
 
        int n = ticket;
        int digits[6];
        for (int i = 5; i >= 0; --i) {
            digits[i] = n % 10;
            n /= 10;
        }

 
        int sum1 = digits[0] + digits[1] + digits[2];
        int sum2 = digits[3] + digits[4] + digits[5];

        if (sum1 == sum2) {
 
            std::cout << std::setfill('0') << std::setw(6) << ticket << "\n";
            ++count;
        }
    }

    std::cerr << "Знайдено щасливих квитків: " << count << "\n";
    return 0;
}
