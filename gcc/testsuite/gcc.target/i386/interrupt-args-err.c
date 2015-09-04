/* { dg-do compile } */
/* { dg-options "-O2" } */

extern void foo1 (int,int) __attribute__ ((interrupt)); /* { dg-error "interrupt service routine can't have arguments" } */
extern void foo2 (int,int) __attribute__ ((exception)); /* { dg-error "exception service routine can't have arguments" } */
extern void bar (int, int);

void
foo1 (int x, int y)
{
  bar (x, y);
}

void
foo2 (int x, int y)
{
  bar (x, y);
}
