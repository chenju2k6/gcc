/* { dg-do link } */
/* { dg-options "-O" } */

extern void link_error (void);

__attribute__ ((noinline, noclone, interrupt))
void
foo (void)
{
  void **p = __builtin_interrupt_data ();
  void *ra = __builtin_return_address (0);
  if (*p != ra)
    link_error ();
}

int
main (void)
{
  foo ();
  return 0;
} 
