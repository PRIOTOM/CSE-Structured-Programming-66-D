#include<iostream>
using namespace std;

double bill(int u, double r, char C){
    double amount= u*r;
    if (C=='C' || C=='c') return amount+(amount*0.15);
    return amount;
}



int main(){
    int unit;
    double rate;
    char C;
    cin >> unit >> rate >> C;
    cout<< "Total Payable Bill: " << bill(unit, rate, C) << "BDT" << endl;
}