#include <m_pd.h>
t_class*multiplexxB_class;
static void multiplexxB_float(t_object*x, t_float f1) {
  pd_error(x, "%s got %f", __FUNCTION__, f1);
}
static void*multiplexxB_new(void) {
  return pd_new(multiplexxB_class);
}
void multiplexxB_setup(void) {
  post("%s", __FUNCTION__);
  multiplexxB_class = class_new(gensym("multiplexxB"), multiplexxB_new, 0, sizeof(t_object), 0, A_NULL);
  class_addfloat(multiplexxB_class, multiplexxB_float);
}
