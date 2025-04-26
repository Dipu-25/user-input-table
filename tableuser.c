#include<stdio.h>
int main(){

    printf("Welcome to user input table \n");


    int i,n;
     
    printf("Enter the number :");
    scanf("%d",&n);

    for ( i = 0; i <=10; i++)
    {
        printf("%d*%d= %d\n", n,i,n*i);
    }
    return 0;
}