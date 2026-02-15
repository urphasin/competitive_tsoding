#include <stdio.h>
#include <cstdint>

int main()
{
  uint32_t x = 0x12345678;
  unsigned char *p = (unsigned char *)&x;
  printf("%x %x %x %x\n", p[0], p[1], p[2], p[3]); // see your system's endianness

  printf("***************\n");

  int a = 25;
  int *aPointer = &a;
  printf("%p\n", aPointer);
}