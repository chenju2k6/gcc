/* { dg-do compile } */
/* { dg-options "-O2" } */

extern int foo1 (void) __attribute__ ((interrupt)); /* { dg-error "interrupt service routine can't have non-void return value" } */
extern int foo2 (void) __attribute__ ((exception)); /* { dg-error "exception service routine can't have non-void return value" } */
extern int bar (int, int);

int
foo1 (void)
{
  int x, y;
  x = y = 1;
  return bar (x, y);
}

int
foo2 (void)
{
  int x, y;
  x = y = 1;
  return bar (x, y);
}
