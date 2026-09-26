# XXX.h

> Analogous function to Perl's '...', warn() and die().

Contents:
* XXX()     - die because unimplemented
* die(msg)  - die with message
* warn(msg) - emit warning message

Example output:
`Unimplemented at test.c line 7.`

All macros wrap a function of the same name, meaning you can set debugger breakpoints at them.

All macros use the overridable macro `xxx_printf(invoker_fn, ...)`.

`XXX` can be used with or without trailing parenthesis.
