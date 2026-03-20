#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 23, 67, 34, 89, 21};
    int n = sizeof(arr) / sizeof(arr[0]);
    int second_largest;
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];  
        }
    }

    cout << " second Largest element in array: " << second_largest << endl;
    return 0;
}
