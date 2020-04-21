#include<stdio.h>
int main()
{
 int number;
 printf("Enter the number:\n1. 1 \n2. 2 \n3. 3 \n4. 4 \n5. 5");
 scanf("%d",&number);
 switch (number)
 {
  case 1: printf("Food item-Pizza.\n""Price-Rs 239");
  break;
  case 2: printf("Food item-Burger.\n""Price-Rs 129");
  break;
  case 3: printf("Food item-Pasta.\n""Price-Rs 179");
  break;
  case 4: printf("Food item-French Fries.\n""Price-Rs 99");
  break;
  case 5: printf("Food item-Sandwich.\n""Price-Rs 149");
  break;
 }
 return 0; 
}
