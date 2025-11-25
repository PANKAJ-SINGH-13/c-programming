/*TAKE THE LENGTH AND BREADTH OF A RECTANGE FROM THE USER AND WRITE A PROGRAM TO 
FIND WHETHER THE AREA OF THE RECTANGLE IS GREATER THAN ITS PERIMETER*/

#include<stdio.h> 
int main(){
    
    int l;   ///LENGTH
    printf("enter length: ");
    scanf("%d",&l);
    
    int b;    ///BREADTH
    printf("enter breadth: ");
    scanf("%d",&b);
    
    int A,P;   ///A is area, P is perimeter
    A=l*b;
    P=2*(l+b);
    
    printf("The area of rectangle is %d \n",A);
    printf("The perimeter of rectangle is %d \n",P);
    
    if(A>P){
        printf("the area of rectangle is greater than the perimeter of the rectanle");
    }
    
    else if(A==P){
        printf("the area of rectangle is equal to the perimeter of the rectanle");
    }
    
    else{
        printf("the area of rectangle is lesser than the perimeter of the rectanle");
    }
    return 0;
    
}