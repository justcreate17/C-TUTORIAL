#include<stdio.h>
int main(){
    int a, b;
    printf("enter your number : ");
    scanf("%d", &a);
      printf("Enter b : ");
    scanf("%d", &b);
    if(a < b){
        printf("%d is smallest", a);
    }else if(b < a){
        printf("%d is smallest", b);
    }else if(a = b){
        printf("both are equal");
    }else{
        printf("invalid");
    }
    return 0;
}