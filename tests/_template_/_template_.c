#include <m_pd.h>
t_class*_template__class;
static void _template__float(t_object*x, t_float f1) {
  pd_error(x, "%s got %f", __FUNCTION__, f1);
}
static void*_template__new(void) {
  return pd_new(_template__class);
}
void _template__setup(void) {
  post("%s", __FUNCTION__);
  _template__class = class_new(gensym("_template_"), _template__new, 0, sizeof(t_object), 0, A_NULL);
  class_addfloat(_template__class, _template__float);
}
