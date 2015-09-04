/* { dg-do compile */
/* { dg-options "-O2" } */

void
__attribute__((exception))
fn (void)
{
}

/* { dg-final { scan-assembler-times "add(?:l|q)\[\\t \]*\\\$8,\[\\t \]*%\[re\]?sp" 1 { target { ! ia32 } } } } */
/* { dg-final { scan-assembler-times "addl\[\\t \]*\\\$4,\[\\t \]*%esp" 1 { target ia32 } } } */
/* { dg-final { scan-assembler "iret" } }*/
