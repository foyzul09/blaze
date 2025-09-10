#include <stdio.h>

int main() {

  printf("Welcome  student!\n");

  int n;
  printf("Enter how many subjects:");
  scanf("%d", &n);

  float arr[n][2];
  float sum = 0;

  int m;
  printf("Enter total credits:\n");
  scanf("%d", &m);

  printf("Enter the grades  and credits for each subjects:\n");
  for (int i = 0; i < n; i++) {
    printf("Subject no. %d:", i + 1);

    scanf("%f %f", &arr[i][0], &arr[i][1]);
  }

  for (int i = 0; i < n; i++) {

    sum += arr[i][0] * arr[i][1];
  }

  double cg = sum / m;

  printf("Your current cgpa is %.2f\n", cg);

  return 0;
}
