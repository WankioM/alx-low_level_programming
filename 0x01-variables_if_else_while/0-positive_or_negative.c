#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**

 * main - Determine if a random number is positive, negative or zero.

(*

 * Return: 0 on success

 */

int main(void)

{

int n;



srand(time(0));

n = rand() - RAND_MAX / 2;

/* your code goes there */

if (n < 0)

{

printf("%d is %s
", n, "negative");

}

else if (n > 0)

{

printf("%d is %s
", n, "positive");

}

else

{

printf("%d is %s
", n, "zero");

}

return (0);



}
