#include <m_pd.h>
t_class*multipleB_class;
static void multipleB_float(t_object*x, t_float f1) {
  pd_error(x, "%s got %f", __FUNCTION__, f1);
}
static void*multipleB_new(void) {
  return pd_new(multipleB_class);
}
void multipleB_setup(void) {
  post("%s", __FUNCTION__);
  multipleB_class = class_new(gensym("multipleB"), multipleB_new, 0, sizeof(t_object), 0, A_NULL);
  class_addfloat(multipleB_class, multipleB_float);
}
