#include "calculator.h"
#include "minus.h"
#include "sum.h"


uint32_t Calculator::callSum(uint32_t a, uint32_t b) { return sum(a, b); }

uint32_t Calculator::callMinus(uint32_t a, uint32_t b) { return minus(a, b); }