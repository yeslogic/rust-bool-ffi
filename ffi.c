#include <stdio.h>
#include <stdbool.h>

extern bool rust_fn_returning_bool(unsigned char);

int main(int argc, char **argv) {
  bool ret = rust_fn_returning_bool(0x10);

  printf("ret = %d\n", (int)ret);

  return 0;
}
