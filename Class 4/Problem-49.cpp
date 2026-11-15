#include<iostream>
using namespace std;

int isPalindromeRecursive(string word, int left, int right) {
    if (left >= right) return 1;
    if (word[left] != word[right]) return 0;
    return isPalindromeRecursive(word, left + 1, right - 1);
}

int main(){
    string word;
    cin >> word;
    int l=word.length();
    if(isPalindromeRecursive(word,0,l-1)) {
        cout << "Palindrome" << endl;
    }
    else {
        cout << "Not a Palindrome" << endl;
    }

}