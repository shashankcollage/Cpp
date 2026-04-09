#include <iostream>
using namespace std;

int main() {
    char str[] = "HelloWorld";
    int vowels = 0, consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Convert to lowercase for easy comparison
        if (ch >= 'A' && ch <= 'Z') ch = ch + 32;

        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "String     : " << str       << endl;
    cout << "Vowels     : " << vowels     << endl;
    cout << "Consonants : " << consonants << endl;

    return 0;
}