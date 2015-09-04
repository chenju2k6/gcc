/* { dg-do compile } */
/* { dg-options "-O2" } */

extern int error;

void
__attribute__((interrupt))
fn1 (void)
{
  error = __builtin_exception_error (); /* { dg-error "\'__builtin_exception_error\' can only be used in exception service routine" } */
}

void
fn2 (void)
{
  error = __builtin_exception_error (); /* { dg-error "\'__builtin_exception_error\' can only be used in exception service routine" } */
}
