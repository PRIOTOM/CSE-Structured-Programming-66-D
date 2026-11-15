#include<iostream>
using namespace std;

int binarySearch(int s[],int l,int h,int t){
    if(l>h) return -1;

    int mid = (l+h)/2;

    if(s[mid]==t) return mid;
    else if (t<s[mid]) return binarySearch(s,l,mid-1,t);
    else return binarySearch(s,l,mid+1,t);
}

int main(){
    int n,t;
    cin >>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    cin >> t;
    int index= binarySearch(s,0,n-1,t);
    if(index!=-1) cout << "Target found at index " << index << endl;
    else cout<< "Target not found" << endl;

}