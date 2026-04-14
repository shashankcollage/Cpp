
#include<iostream>
using namespace std;
int main(){
    char s[100]; cin>>s;
    int freq[26]={0};
    for(int i=0;s[i];i++)
        if(s[i]>='a'&&s[i]<='z') freq[s[i]-'a']++;
    for(int i=0;i<26;i++)
        if(freq[i]) cout<<(char)('a'+i)<<": "<<freq[i]<<"\n";
}