#include <stdint.h>

__declspec(dllexport) uint32_t sum(uint32_t a, uint32_t b) {
  return a + b;
}