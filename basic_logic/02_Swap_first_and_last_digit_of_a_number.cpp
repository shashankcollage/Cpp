#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int digits = (int)log10(num) + 1;
    int first = num / (int)pow(10, digits - 1);
    int last = num % 10;
    int middle = num % (int)pow(10, digits - 1);
    middle /= 10;
    int swapped = last * (int)pow(10, digits - 1) + middle * 10 + first;

    cout << "Number after swapping first and last digit: " << swapped << endl;

    return 0;
}
