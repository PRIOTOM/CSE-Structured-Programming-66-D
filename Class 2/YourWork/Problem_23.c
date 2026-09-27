#include<stdio.h>
int main(){
    int i=1;
    while(i<=20){
        if (i == 12) {
            break;
        }
        if (i % 2 != 0) {
            continue;
        }
        printf("%d ", i);
        i++;
    }
    return 0;
}