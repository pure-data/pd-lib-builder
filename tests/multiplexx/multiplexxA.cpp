#include <m_pd.h>
#include <iostream>
t_class*multiplexxA_class;
static void multiplexxA_float(t_object*x, t_float f1) {
  pd_error(x, "%s got %f", __FUNCTION__, f1);
}
static void*multiplexxA_new(void) {
  return pd_new(multiplexxA_class);
}
#if defined(_LANGUAGE_C_PLUS_PLUS) || defined(__cplusplus)
extern "C" {
  void multiplexxA_setup(void);
}
#endif
void multiplexxA_setup(void) {
  std::cerr << __FUNCTION__ << std::endl;
  multiplexxA_class = class_new(gensym("multiplexxA"), multiplexxA_new, 0, sizeof(t_object), 0, A_NULL);
  class_addfloat(multiplexxA_class, multiplexxA_float);
}
