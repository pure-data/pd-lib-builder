#include <m_pd.h>
t_class*subdir_tilde_class;
static void subdir_tilde_float(t_object*x, t_float f1) {
  pd_error(x, "%s got %f", __FUNCTION__, f1);
}
static void*subdir_tilde_new(void) {
  return pd_new(subdir_tilde_class);
}
void subdir_tilde_setup(void) {
  post("%s", __FUNCTION__);
  subdir_tilde_class = class_new(gensym("subdir~"), subdir_tilde_new, 0, sizeof(t_object), 0, A_NULL);
  class_addfloat(subdir_tilde_class, subdir_tilde_float);
}
