#include <m_pd.h>
t_class*multipleA_class;
static void multipleA_float(t_object*x, t_float f1) {
  pd_error(x, "%s got %f", __FUNCTION__, f1);
}
static void*multipleA_new(void) {
  return pd_new(multipleA_class);
}
void multipleA_setup(void) {
  post("%s", __FUNCTION__);
  multipleA_class = class_new(gensym("multipleA"), multipleA_new, 0, sizeof(t_object), 0, A_NULL);
  class_addfloat(multipleA_class, multipleA_float);
}
