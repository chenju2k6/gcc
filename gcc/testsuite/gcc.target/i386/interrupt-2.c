/* { dg-do compile */
/* { dg-options "-O2" } */

void
__attribute__((interrupt))
fn (void)
{
}

/* { dg-final { scan-assembler-not "add(l|q)\[\\t \]*\\$\[0-9\]*,\[\\t \]*%\[re\]?sp" } } */
/* { dg-final { scan-assembler "iret" } }*/
