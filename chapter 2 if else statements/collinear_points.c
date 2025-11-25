// TAKE THREE POINTS ON THE CARTESIAN PLANE ENTERED BY THE USER AND CHECK IF ALL THOSE POINTS LIE ON THE SAME LINE OR NOT 

/// IF THREE POINTS ARE COLLINEAR THEN
// AREA ENCLOSED BY THEM IS 0 (DET IS O)
// SLOPE IS EQUAL (mAB=mBC)


#include <stdio.h>

int main() {
    float x1,x2,x3,y1,y2,y3;
    float m1,m2;
    
    printf("enter x and y coordinate of first point: ");
    scanf("%f %f", &x1, &y1);
    
    printf("enter x and y coordinate of second point: ");
    scanf("%f %f", &x2, &y2);
    
    printf("enter x and y coordinate of third point: ");
    scanf("%f %f", &x3, &y3);
    
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    
    if(m1==m2){
        printf("all these points are collinear");
    }
     
    else{
        printf("all these points are non collinear");
    }
    
    return 0;
}