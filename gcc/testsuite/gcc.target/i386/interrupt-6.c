/* { dg-do link } */
/* { dg-options "-O" } */

#include <stdint.h>

extern void link_error (void);

__attribute__ ((noinline, noclone, exception))
void
foo (void)
{
  unsigned int error = __builtin_exception_error ();
  void *ra = __builtin_return_address (0);
  if ((unsigned int) ((uintptr_t) ra) != error)
    link_error ();
}

int
main (void)
{
  foo ();
  return 0;
} 
