#include<stdio.h>
// display this ap 4 7 10 13 upto nth term without using the maths
int main(){
    int n;
    printf(" enter number :");
    scanf("%d",& n);
int a = 4;// first value in ap
    for (int i =1; i<=n; i++)
    {
        /* code */ // common difference
        int a=a+3;
        


        printf("%d\n", a );
        
         
    }
    return 0;
}