#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
  if (argc < 2) 
  {
    fprintf(stderr, "Debe haber un argumento para poder compilar\n");
    return 1;
  }
  int n = atoi(argv[1]);
  srand(time(NULL));
  printf("%d\n", n);
  for (int i = 0; i < 15; i++) 
  {
    for (int j = 0; j < n; j++) 
    {
      printf("%d ", rand() % 1000);
    }
     printf("\n");
   }
  return 0;
}

