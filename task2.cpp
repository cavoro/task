#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введіть число:";
    cin >> n;

    if (n > 0) {
        cout << "Число додатнє" << endl;
    } else if (n < 0) {
        cout << "Число від’ємне" << endl;
    } else {
        cout << "Число дорівнює нулю" << endl;
    }

    return 0;
}
