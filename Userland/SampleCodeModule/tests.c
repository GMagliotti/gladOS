// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
#include <tests.h>

void test0_div() {
  int var = 0;

  var = 80 / var;
}

// void test_malloc() {
//   void *theptr = call_to_malloc((uint32_t)0x100);
//   *((char *)theptr) = 69;
// }