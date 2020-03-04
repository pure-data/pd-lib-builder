#include <m_pd.h>
t_class*multilibB_class;
static void multilibB_float(t_object*x, t_float f1) {
  pd_error(x, "%s got %f", __FUNCTION__, f1);
}
static void*multilibB_new(void) {
  return pd_new(multilibB_class);
}
void multilibB_setup(void) {
  post("%s", __FUNCTION__);
  multilibB_class = class_new(gensym("multilibB"), multilibB_new, 0, sizeof(t_object), 0, A_NULL);
  class_addfloat(multilibB_class, multilibB_float);
}
