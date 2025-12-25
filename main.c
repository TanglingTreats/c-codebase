#include "base.h"
#include <stdio.h>

int main() {
  printf("gcc = %d\n", COMPILER_GCC);

  printf("macos = %d\n", OS_MAC);
  printf("linux = %d\n", OS_LINUX);
  printf("android = %d\n", OS_ANDROID);

  printf("ARM64 = %d\n", ARCH_ARM64);
  printf("x86_64 = %d\n", ARCH_X64);
  printf("x86_32 = %d\n", ARCH_X86);

  return 0;
}
