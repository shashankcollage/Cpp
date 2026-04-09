#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 1, 0, 5};

    int size1 = 5, size2 = 5;

    cout << "Numbers not present in second array : ";

    for (int i = 0; i < size1; i++) {
        bool found = false;

        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            cout << arr1[i] << " ";
        }
    }

    cout << endl;
    return 0;
}