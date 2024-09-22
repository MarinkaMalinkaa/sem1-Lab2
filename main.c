#include <stdio.h>
#include "askname.h"
int main(int argc, char **argv)
{
 char first[255], last[255];
 askname(first, last);
printf("Hello, Marina %s %s!\n", first, last);
printf("Hello, Daria %s %s!\n", first, last);
printf("Hello, Fred!!!");
 return 0;
}
