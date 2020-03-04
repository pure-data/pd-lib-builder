#include "multishared.h"

void multishared_foo(t_float f) {
  post("%s(%f)", __FUNCTION__, f);
}
