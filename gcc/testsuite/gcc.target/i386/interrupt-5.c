/* { dg-do link } */
/* { dg-options "-O" } */

#include <stdint.h>

extern void link_error (void);

typedef unsigned int error_code __attribute__ ((mode (__word__)));

__attribute__ ((noinline, noclone, exception))
void
foo (void)
{
  error_code error = __builtin_exception_error ();
  void *ra = __builtin_return_address (0);
  if ((uintptr_t) ra != (uintptr_t) error)
    link_error ();
}

int
main (void)
{
  foo ();
  return 0;
} 
