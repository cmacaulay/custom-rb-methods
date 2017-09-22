//  rb headers
#include "ruby.h"
// variable stores the value
// Qnil represents a ruby value
VALUE MyTest = Qnil;

void Init_mytest();
// returns a ruby value
VALUE method_test1(VALUE self);
void Init_mytest() {
  MyTest = rb_define_module("MyTest");
  rb_define_method(MyTest, "test1", method_test1, 0);
}
VALUE method_test1(VALUE self) {
  int x = 10;
  return INT2NUM(x);
}
