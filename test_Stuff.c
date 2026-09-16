#include <stdio.h>
#include "movement.h"
#include "player.h"

int main(void)
{
   // printf("movement.h\n");
    //printf("a: %s\n", a);
  //  printf("d: %s\n", d);
   // printf("w: %s\n", w);
    //printf("s: %s\n", s);

   /* printf("player.h\n");
printf("player address: %p\n", (void *)&player);
printf("x: %f\n", player.x);
printf("y: %f\n", player.y);
printf("dx: %f\n", player.dx);
printf("dy: %f\n", player.dy); */
 struct choice
{
    int value;
    char label;
};

int main(void)
{
    struct choice values[2] =
    {
        {0, 'L'},
        {0, 'R'}
    };

    for (int i = 0; i < 2; i++)
    {
        printf("Value: %d\n", values[i].value);
        printf("Choice: %c\n", values[i].label);
    }

  
}

}