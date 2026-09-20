#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    if (x+y % 2 == 0){
        printf("sum is even\n");
    }
    else{
         printf("sum is odd\n");
    }
       
    if (x-y > 0){
        printf("Sub is positive\n");
    }
    else if (x-y == 0){
        printf("sub is zero\n");
    }
    else{
        printf("sub is negetive\n");
    }

    
    if (x<y){
        printf("First is less than second \n");
    }
    else if (x>y){
        printf("First is greater than second \n");
    }
    else{
        printf("First is equal to second \n");
    }
    return 0;
}