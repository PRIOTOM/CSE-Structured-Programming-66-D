#include<iostream>
using namespace std;
void printExamHeader();

int main() {
    printExamHeader();
    cout<<"Candidate Name: Rahim Ahmed"<<endl;
    cout <<"Seat Number   : CS-204"<<endl;
    printExamHeader();

    return 0;
}

void printExamHeader() {
    cout<<"===================================="<<endl;
    cout<<"   CSE-101 MIDTERM EXAM ADMIT SLIP  "<<endl;
    cout<<"===================================="<<endl;
}