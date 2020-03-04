#include "multishared.h"
t_class*multisharedB_class;
static void multisharedB_float(t_object*x, t_float f1) {
  pd_error(x, "%s got %f", __FUNCTION__, f1);
  multishared_foo(f1);
}
static void*multisharedB_new(void) {
  return pd_new(multisharedB_class);
}
void multisharedB_setup(void) {
  post("%s", __FUNCTION__);
  multisharedB_class = class_new(gensym("multisharedB"), multisharedB_new, 0, sizeof(t_object), 0, A_NULL);
  class_addfloat(multisharedB_class, multisharedB_float);
}
