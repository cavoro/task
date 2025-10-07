#include <iostream>
using namespace std;

int main() {
    int start, end;
    
    cout << "Введіть перше число: ";
    cin >> start;
    cout << "Введіть друге число: ";
    cin >> end;
    
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }
    
    int sum = 0;
    
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    
    cout << "Сума всіх парних чисел від " << start << " до " << end << " включно: " << sum << endl;
    
    return 0;
}
