// WRITE A C PROGRAM USING FUNCTIONS FOR COMBINATION 

#include <stdio.h>

float COMBI(float a, float b){
    int p1=1;
    int p2=1;
    int p3=1;
    
    
    for(int i=1;i<=a;i++){
        p1=p1*i;
    }
    for(int j=1;j<=b;j++){
        p2=p2*j;
    }
    for(int k=1;k<=(a-b);k++){
        p3=p3*k;
    }
    float g=(p1)/(p2*p3);
    printf("the combination is %.2f",g);
    
}

int main() {
    float N;
    printf("enter N: ");
    scanf("%f",&N);
    
    float R;
    printf("enter R: ");
    scanf("%f",&R);
    
    COMBI(N,R);
    return 0;
}