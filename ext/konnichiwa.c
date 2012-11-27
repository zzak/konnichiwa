#include <ruby.h>

static void konnichiwa() {
    return rb_warn("konnichiwa!");
}

void Init_konnichiwa(void) {
    /* Document-class: Konnichiwa
     *
     * When required, this should raise a warning
     */
    VALUE klass = rb_define_class("Konnichiwa", rb_cObject);

    /* Document-method: warn
     *
     * Raise a warning
     * */
    rb_define_singleton_method(klass, "warn", konnichiwa, 0);

    konnichiwa();
}
