#include "base.h"
#include <stdio.h>

int main() {
  printf("gcc = %d\n", COMPILER_GCC);
  printf("macos = %d\n", OS_MAC);
  printf("ARM64 = %d\n", ARCH_ARM64);

  return 0;
}
