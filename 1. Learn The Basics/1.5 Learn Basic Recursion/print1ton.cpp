#include<iostream>
using namespace std;
int printn(int n){
    if(n==0){
        return 1;
    }
    printn(n-1);
    cout<<n;
}
int main(){
    int x;
    cin>>x;
    printn(x);


}