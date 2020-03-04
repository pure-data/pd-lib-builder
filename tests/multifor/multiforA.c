#include <m_pd.h>
t_class*multiforA_class;
static void multiforA_float(t_object*x, t_float f1) {
  pd_error(x, "%s got %f", __FUNCTION__, f1);
}
static void*multiforA_new(void) {
  return pd_new(multiforA_class);
}
void multiforA_setup(void) {
  post("%s", __FUNCTION__);
  multiforA_class = class_new(gensym("multiforA"), multiforA_new, 0, sizeof(t_object), 0, A_NULL);
  class_addfloat(multiforA_class, multiforA_float);
}
