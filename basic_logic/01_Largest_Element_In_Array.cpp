#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 23, 67, 34, 89, 21};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];  
        }
    }

    cout << "Largest element in array: " << largest << endl;
    return 0;
}
