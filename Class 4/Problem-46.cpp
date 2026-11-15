#include<iostream>
using namespace std;

void bonusReset(int point) {
    point =0;
}

void graceMark(int s[],int n,int point){
    for(int i=0;i<n;i++){
        if(s[i]>=35 && s[i]<40){
            s[i]+=point;
        }
    }
}


int main(){
    int n,g_point=5;
    cin >> n;
    int s[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    bonusReset(g_point);
    graceMark(s,n,g_point);
    cout << "Grace Points variable in main: "<< g_point<< endl;
    cout << "Updated Marks: "<< endl;
    for(int i=0;i<n;i++){
        cout << s[i] << " ";
    }
    cout << endl;
}