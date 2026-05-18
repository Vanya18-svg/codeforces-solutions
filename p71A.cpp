#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>input(n);
    for(int i=0;i<n;i++){
        cin>>input[i];
        int l=input[i].length();
        if(l>10){
            cout<<input[i][0]<<l-2<<input[i][l-1]<<endl;
        }
        else cout<<input[i]<<endl;
    }
}