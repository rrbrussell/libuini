#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  fprintf(stdout, "%lu", sizeof(wchar_t));
}
