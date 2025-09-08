#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int num, ch;

  srand(time(NULL));

  num = rand() % 100 + 1;

  while (1) {
    printf("Enter the number:");
    scanf("%d", &ch);

    if (ch > num) {

      printf("You guessed too high!");

    }

    else if (ch < num) {

      printf("You guessed too low!");

    }

    else {
      printf("Your guess is right!");
      break;
    }
  }

  return 0;
}
