/* { dg-do compile } */
/* { dg-options "-O2 -m80387 -mlong-double-80 -mno-iamcu" } */

extern long double y, x;

void
fn0 (void)
{
  x = y;
  y = 0;
}

void
__attribute__((exception))
fn1 (void)
{
  x = 0;
} /* { dg-error "80387 instructions aren't allowed in exception service routine" } */

void
__attribute__((interrupt))
fn2 (void)
{
  x = y; /* { dg-error "80387 instructions aren't allowed in interrupt service routine" } */
}
