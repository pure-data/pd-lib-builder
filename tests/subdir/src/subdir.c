#include <m_pd.h>
t_class*subdir_class;
static void subdir_float(t_object*x, t_float f1) {
  pd_error(x, "%s got %f", __FUNCTION__, f1);
}
static void*subdir_new(void) {
  return pd_new(subdir_class);
}
void subdir_setup(void) {
  post("%s", __FUNCTION__);
  subdir_class = class_new(gensym("subdir"), subdir_new, 0, sizeof(t_object), 0, A_NULL);
  class_addfloat(subdir_class, subdir_float);
}
