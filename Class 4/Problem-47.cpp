#include<iostream>
using namespace std;

int f(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return  f(n-1)+f(n-2);
}

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        cout << f(i) << " ";
    }
    cout << endl;
}