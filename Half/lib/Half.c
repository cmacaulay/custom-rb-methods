#include "ruby.h"

VALUE Half = Qnil;
void Init_half();
VALUE method_half(VALUE self, VALUE anObject)

void Init_half() {
  Half = rb_define_module("Half");
  rb_define_method(Half, "half", method_half, 1);
}

VALUE method_half(VALUE self, VALUE inputArr) {
  int N = RARRAY_LEN(inputArr);
  printf(N)
  return N
}
