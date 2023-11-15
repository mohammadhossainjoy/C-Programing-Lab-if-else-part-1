/*Write a C program that reads the radius r of a circle and the side a of a square from user and then checks if that square can be placed inside that circle or not. Hint: Use Pythagorean theorem.*/
#include<stdio.h>
#include<math.h>
int main()
{
float side,radius,diameter,result;

printf("Enter radius of Circle\n");
scanf("%f",&radius);

printf("Enter side length of Square\n");
scanf("%f",&side);

diameter=radius+radius;

result=sqrt(pow(side,2)+pow(side,2));

if(result<=diameter)
{
    printf("The Square can be placed in the circle.\n");
}
else
{
    printf("The Square cannot be placed in the circle.\n");
}

    return 0;
}
