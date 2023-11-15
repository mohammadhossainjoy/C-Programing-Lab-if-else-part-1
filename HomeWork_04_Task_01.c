
/*Write a C program to input sides of a triangle and check whether triangle is valid or not (Hint: if sum of any two sides of a triangle is greater than the third side then the triangle is valid)*/

#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter the value of Triangle A,B,C: ");
    scanf("%d %d %d",&a,&b,&c);

    if (a+b>c && b+c>a && c+a>b){
        printf("The Triangle is valid.");
    }
    else{
        printf("The Triangle is invalid.");
    }


    return 0;
}
