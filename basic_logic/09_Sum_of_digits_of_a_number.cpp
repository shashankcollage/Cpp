#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, rem;
    cout << "Enter number: ";
    cin >> n;

    int temp = (n < 0) ? -n : n;
    while (temp != 0) {
        rem = temp % 10;
        sum += rem;
        temp /= 10;
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}