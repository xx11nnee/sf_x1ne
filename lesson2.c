#include <stdio.h>

void greeting() 
{
  printf("Hello!\n");
  printf("Welcome in our social media app\n");
}

void askAge()
{
  printf("According to the laws of Austria, we have to ask your age\n");
  printf("How old are you?\n");
}

void sorryMessage()
{
  printf("Sorry, You cannot use our app\n");
  printf("You are under 16\n");
}

void congratsMessage()
{
  printf("Congratulations, you can use our social media\n"); // age > 16
}

int answerAge()
{
  // 1. Initiliaze a data type 
  int age; 
  // 2. scanf function
  scanf(" %d", &age);
  printf("Your age is %d\n", age);
  if(age <= 16)
  {
    return 0; // те кто младше 16
  }
  else
  {
    return 1; // кто старше 16
  }
}

int main()
{
  greeting();
  askAge();
  int age = answerAge();
  if(age == 1)
  {
    congratsMessage();
  }
  else
  {
    sorryMessage();
  }
  return 0;

  
}