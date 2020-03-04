#include <m_pd.h>
t_class*multilibA_class;
static void multilibA_float(t_object*x, t_float f1) {
  pd_error(x, "%s got %f", __FUNCTION__, f1);
}
static void*multilibA_new(void) {
  return pd_new(multilibA_class);
}
void multilibA_setup(void) {
  post("%s", __FUNCTION__);
  multilibA_class = class_new(gensym("multilibA"), multilibA_new, 0, sizeof(t_object), 0, A_NULL);
  class_addfloat(multilibA_class, multilibA_float);
}
