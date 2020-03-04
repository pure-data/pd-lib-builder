#include <m_pd.h>
t_class*multiforB_class;
static void multiforB_float(t_object*x, t_float f1) {
  pd_error(x, "%s got %f", __FUNCTION__, f1);
}
static void*multiforB_new(void) {
  return pd_new(multiforB_class);
}
void multiforB_setup(void) {
  post("%s", __FUNCTION__);
  multiforB_class = class_new(gensym("multiforB"), multiforB_new, 0, sizeof(t_object), 0, A_NULL);
  class_addfloat(multiforB_class, multiforB_float);
}
