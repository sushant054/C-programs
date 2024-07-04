#include <stdio.h>

int main() 
{
  FILE *fptr;
//fptr means file pointer 
  fptr = fopen("filename.txt", "w");
  fclose(fptr);
  return 0;
}
