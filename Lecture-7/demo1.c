//display information of a person

#include <stdio.h>
#include <conio.h>

int main()
{
 //create variables
  char Name[50];
  int Age;
  float height;
  double weight;

  //take input from user
  printf("Enter your details : ");
  printf("\nEnter your Name : ");
  scanf("%s",&Name);

  printf("\nEnter your age : ");
  scanf("%d",&Age);

  printf("\nEnter your height : ");
  scanf("%f",&height);

  printf("\nEnter your weight : ");
  scanf("%lf",&weight);

  //display information
  printf("\n Your information is : \n");
  printf("\nName : %s",Name);
  printf("\nAge : %d",Age);
  printf("\nHeight : %f",height);
  printf("\nWeight : %lf",weight);

    return 0;
}