//  rb headers
#include "ruby.h"
// variable stores the value
VALUE MyTest = Qnil;

void Init_mytest();
VALUE method_test1(VALUE self);
void Init_mytest() {

  MyTest = rb_define_module("MyTest");
  rb_define_method(MyTest, "test1", method_test1, 0);
}
VALUE method_test(VALUE self) {
  int x = 10;
  return INT2NUM(x);
}
