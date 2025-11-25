////// given an array of marks of students if the marks of any student is less than 35 print its roll number.
////// roll number here refers to the index of the array

#include<stdio.h>
int main (){
    int arr[10];
    for(int i=0;i<10;i++){
        printf("enter the marks of roll number %d: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        if(arr[i]<35){
            printf("you are failed roll number %d\n",i);
        }
    }



}