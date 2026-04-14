// 11. Replace vowels with *
#include<iostream>
using namespace std;
int main(){
    char s[100]; cin>>s;
    for(int i=0;s[i];i++){
        char c=tolower(s[i]);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') cout<<'*';
        else cout<<s[i];
    }
}