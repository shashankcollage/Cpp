#include <iostream>
using namespace std;

int main() {
    char str[] = "HelloWorld";
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    cout << "String : " << str << endl;
    cout << "Length : " << length << endl;

    return 0;
}