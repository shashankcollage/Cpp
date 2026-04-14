// 9. Remove duplicate characters
#include<iostream>
using namespace std;
int main(){
    char s[100]; cin>>s;
    bool seen[256]={false};
    for(int i=0;s[i];i++)
        if(!seen[(int)s[i]]){ cout<<s[i]; seen[(int)s[i]]=true; }
}