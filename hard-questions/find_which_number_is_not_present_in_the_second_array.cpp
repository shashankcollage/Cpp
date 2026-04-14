
#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5}, b[]={2,3,1,0,5};
    int n=5;
    for(int i=0;i<n;i++){
        bool found=false;
        for(int j=0;j<n;j++) if(a[i]==b[j]) found=true;
        if(!found) cout<<a[i]<<" not in second array";
    }
}