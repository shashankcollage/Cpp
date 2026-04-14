// 6. Remove spaces
#include<iostream>
using namespace std;
int main(){
    char s[100]; cin.getline(s,100);
    for(int i=0;s[i];i++)
        if(s[i]!=' ') cout<<s[i];
}