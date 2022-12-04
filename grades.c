#include<stdio.h>

int main(){
    int marks;
    printf("enter marks(0-100): ");
    scanf("%d ",&marks);

    if (marks<30) {
        printf("c");
    }
    else if(marks>=30 && marks<70){
        printf(" grade is b ");
    }
    else if(marks>=70 && marks<90){
        printf("grade is a ");
    }
    else {
        printf("a++");
    }

    return 0;
}