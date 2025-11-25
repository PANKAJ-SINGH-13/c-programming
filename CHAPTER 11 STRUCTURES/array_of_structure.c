//array of structure 

#include <stdio.h>
#include<string.h>

int main() {
   typedef struct pokemon{
       int hp;
       int speed;
       int attack;
       char tier;
       char name[33];
       
   }pokemon;
   
   pokemon arr[3];       ///// IN THIS POKEMON HAS BECOME A DATA TYPE
   arr[0].attack=50;
   arr[0].hp=100;
   strcpy(arr[0].name,"alfha");
   
    arr[1].attack=150;
   arr[1].hp=120;
   strcpy(arr[1].name,"beta");
   
    arr[2].attack=250;
   arr[2].hp=170;
   strcpy(arr[2].name,"delta");
   for(int i=0; i<3;i++){
       printf("%d\n",arr[i].attack);
        printf("%d\n",arr[i].hp);
         printf("%s\n",arr[i].name);
   }
   

    return 0;
}