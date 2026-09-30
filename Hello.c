#include<stdio.h>
int main(){
    int a;
    printf("1-Monday\n2-Tuesday\n3-Wednesday\n4-Thursday\n5-Friday\n6-Saturday\n7-Sunday\n");
    printf("Enter Today date number : ");
    scanf("%d", &a);
    if(a > 7){
        printf("Invalid Number");
    }
    switch(a)
    {
        case 1: printf("Monday");
        case 2: printf("Tuesday");
                break;
        case 3: printf("wednesday");
                break;
        case 4: printf("Thursday");
                break;
        case 5: printf("Friday");
                break;
        case 6: printf("Saturday");
                break;
        case 7: printf("Sunday");
                break;                              
    }
    return 0;
}