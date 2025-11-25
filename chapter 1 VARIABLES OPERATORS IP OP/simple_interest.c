//// CALCULATE SIMPLE INTEREST AND TAKE INPUT FROM THE USERS

#include<stdio.h>
int main(){
    float p,r,t;                                                           //p=principal r= rate of interest t=time period

    printf("enter principal,rate and time period: ");
    scanf("%f %f %f",&p,&r,&t);
    int si = (p*r*t)/100;                                                 ///simple interest


    printf("the simple interest for the data will be %d", si);
    return 0;
}