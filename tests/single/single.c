#include <m_pd.h>
t_class*single_class;
static void single_float(t_object*x, t_float f1) {
  pd_error(x, "%s got %f", __FUNCTION__, f1);
}
static void*single_new(void) {
  return pd_new(single_class);
}
void single_setup(void) {
  post("%s", __FUNCTION__);
  single_class = class_new(gensym("single"), single_new, 0, sizeof(t_object), 0, A_NULL);
  class_addfloat(single_class, single_float);
}
