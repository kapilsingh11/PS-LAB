// #include<stdio.h>
// int main(){
//     int input[6];
//     int output[6];
//     for (int i = 0; i <=5; i++)
//     {
//         scanf("%d",&input[i]);
//     }
    
//     for (int i = 0,j=5; i <=5; i++,j--)
//     {
//         output[j]=input[i];
//     }
//     for (int i = 0; i <=5; i++)
//     {
//         printf("%d",output[i]);
//     }
    


    
// }


#include<stdio.h>
int main(){
    int A[6],i,j,k;
    for (int i = 0; i <=5; i++)
    {
        scanf("%d",&A[i]);
    }
    
    for ( i = 0,j=5; i <=j; i++,j--)
    {
        k=A[i];
        A[i]=A[j];
        A[j]=k;
    }
    for (int i = 0; i <=5; i++)
    {
        printf("%d",A[i]);
    }
    


    
}

