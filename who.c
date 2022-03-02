#include <stdio.h>


int main()
{

  char name[15];
  char color[15];

  printf("What is your name? ");
  scanf("%s", &name);
  printf("Hello %s! My name is Bri.\nWhat is your favorite color? ", name);
  scanf("%s", &color);
  printf("I like the color %s too.\nMy favorite color is red!\n" , color);

}
