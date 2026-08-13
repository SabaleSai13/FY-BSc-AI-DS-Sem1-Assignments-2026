//Write a C program to accept marks obtained in five subjects and calculate total marks, average and percentage.
#include <stdio.h>
int main(){
  
  float s1,s2,s3,s4,s5;

  printf("Enter Marks out of 100\n");
    printf("Enter Marks Obtained in 1st Subject: ");
      scanf("%f",&s1);
    printf("Enter Marks Obtained in 2nd Subject: ");
      scanf("%f",&s2);
    printf("Enter Marks Obtained in 3rd Subject: ");
      scanf("%f",&s3);
    printf("Enter Marks Obtained in 4th Subject: ");
      scanf("%f",&s4);
    printf("Enter Marks Obtained in 5th Subject: ");
      scanf("%f",&s5);

  float total = s1+s2+s3+s4+s5;
  float average = total/5;
  float percentage = (total/500)*100;

  printf("Total Marks Obtained:%f\n", total);
  printf("Average:%f\n", average);
  printf("Percentage:%f", percentage);

return 0;
}
