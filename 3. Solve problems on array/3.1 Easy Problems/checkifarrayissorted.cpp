#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    for(int i=0;i<n;i++){
        if(array[i]<array[i-1]){
            cout<<"Not sorted";
        }
    }
    cout<<"Sorted";
}