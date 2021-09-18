#include <stdio.h>
#include <math.h>

int main() {
  int a = 1231231;
  printf("I eat %d apples a day\n", a);

  long b = 1231231212;
  printf("I eat %ld bananas a day\n", b);

  float c = 3.1415;
  printf("I also like to eat %d\n", c); // prints ugly thing when you use the wrong format

  short d = 123123123123;
  printf("This is a big number that goes out of bounds %hi\n", d);

  int arr[5] = {1, 2, 3, 4, 5};

  for (int i = 0; i < 5; i++) {
    printf("%d\n", arr[i]);
  }

  int var = 123;
  int *point = &var;
  printf("%d\n", var);
  printf("%d\n", point);


  unsigned int x = pow(2, 31);
  int y = pow(2, 31);

  printf("%d and %d", x, y);

  return 0;
}