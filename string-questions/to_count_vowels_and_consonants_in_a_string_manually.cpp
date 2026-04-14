// 3. Count vowels and consonants
#include<iostream>
using namespace std;
int main(){
    char s[100]; cin>>s;
    int v=0,c=0;
    for(int i=0;s[i];i++){
        char ch=tolower(s[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
        else if(ch>='a'&&ch<='z') c++;
    }
    cout<<"Vowels: "<<v<<" Consonants: "<<c;
}