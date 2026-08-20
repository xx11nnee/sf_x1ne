#include <stdio.h>

// Loops - Циклы
// for loop
// while loop

void greetings()
{
  printf("Hello, dear User\n");
  printf("Welcome in our app\n");
  printf("Please select your age from 18 till 99\n");
}

void invalidAge()
{
  printf("[Error]: You cannot use our app\n");
}

int main()
{
  //1 - 10
  // 1
  // 2
  // 3
  // ....
  // 10
  // for(int i = 1; i <= 10; i++) // i = 1 -> count = 0
  //  // i = 2; count = 1; 
  //  // i = 3; count = 2;
  //  // i = 4; count = 3
  // {
  //   printf("%d\n", i);
  // }
  

  int age = 0;
  greetings();
  scanf("%d", &age);
  
  while(age <= 17)
  {
    invalidAge();
    scanf("%d", &age);
  }

  printf("You may use our app\n");



  return 0;
}