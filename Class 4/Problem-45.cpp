#include<iostream>
using namespace std;

int highest(int s[],int n){
    int m=s[0];
    for(int i=0;i<n;i++){
        if(s[i]>m) return m=s[i];
    }
    return m;
}

double avg(int s[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=s[i];
    }
    return sum/n;
}

int main(){
    int n;
    cin >> n;
    int s[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    cout << "Highest Score: "<< highest(s,n) << endl << "Class Average: "<< avg(s,n)<< endl;

}