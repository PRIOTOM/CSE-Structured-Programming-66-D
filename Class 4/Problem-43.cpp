#include<iostream>
using namespace std;

int total(int q,int m, int f){
    return q+m+f;
}

double pct(int total,int maxmark){
    return ((double)total/maxmark) *100.0;
}

char g(double pct){
    if (pct>=80.0) return 'A';
    if (pct>=65.0) return 'B';
    if (pct>=50.0) return 'C';
    return 'F';
}
int main(){
    int q,m,f;
    cin >> q>>m>>f;
    cout << "Total: " << total(q,m,f) <<"/100 | " << "Percentage: " << pct(total(q,m,f),100.0) <<"% | "<< "Grade: " << g(pct(total(q,m,f),100.0)) << endl;
}