#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter number: ";
    cin >> n;

    if (n == 0) {
        cout << "Number of digits: 1" << endl;
        return 0;
    }

    int temp = (n < 0) ? -n : n;
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    cout << "Number of digits: " << count << endl;
    return 0;
}