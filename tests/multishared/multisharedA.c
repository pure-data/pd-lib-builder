#include "multishared.h"
t_class*multisharedA_class;
static void multisharedA_float(t_object*x, t_float f1) {
  pd_error(x, "%s got %f", __FUNCTION__, f1);
  multishared_foo(f1);
}
static void*multisharedA_new(void) {
  return pd_new(multisharedA_class);
}
void multisharedA_setup(void) {
  post("%s", __FUNCTION__);
  multisharedA_class = class_new(gensym("multisharedA"), multisharedA_new, 0, sizeof(t_object), 0, A_NULL);
  class_addfloat(multisharedA_class, multisharedA_float);
}
