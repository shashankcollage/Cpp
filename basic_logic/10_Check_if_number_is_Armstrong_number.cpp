#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, sum = 0, rem, digits = 0;
    cout << "Enter number: ";
    cin >> n;

    int temp = n;
    while (temp != 0) {   // count digits
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {   // calculate sum of powers
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if (sum == n)
        cout << n << " is an Armstrong number" << endl;
    else
        cout << n << " is NOT an Armstrong number" << endl;

    return 0;
}