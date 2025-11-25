//structure of cricketers using array of structure for 3 players

#include <stdio.h>
#include<string.h>

int main() {
   typedef struct cricketer{
       char name[33];
       int age;
       int number_of_matches;
       float avg_runs;
}cricketer;
   
   cricketer arr[3];       ///// IN THIS cricketer HAS BECOME A DATA TYPE
  
  for(int i=0;i<3;i++){
      scanf("%[^\n]",arr[i].name);
      scanf("%d",&arr[i].age);
      scanf("%d",&arr[i].number_of_matches);
      scanf("%f",&arr[i].avg_runs);
  }
  
  for(int i=0;i<3;i++){
      printf("name:%s\n",arr[i].name);
      printf("age:%d ",arr[i].age);
      printf("number of matches:%d\n",arr[i].number_of_matches);
      printf("average runs:%f\n",arr[i].avg_runs);
  }
    return 0;
}