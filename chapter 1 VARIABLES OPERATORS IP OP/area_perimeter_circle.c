//// find the area and perimeter of a circle input the radius from the user.

#include<stdio.h>
int main(){
    float r;  /// r is for radius of the circle       ////note Float,FLOAT, etc an alsi be variable names
    printf("enter the radius of circle: ");
    scanf("%f", &r);
    
    float a =3.14*r*r;   // a is for area of circle
    printf("the area of circle is %f \n",a);
    
    float b=2*3.14*r;  // b is for perimeter of circle
    printf("the perimeter of the circle is %f ", b);
    
    return 0;
    
}