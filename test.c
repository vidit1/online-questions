#include <stdio.h>
int main ( )
{
int a = 2;
int *p1 = &a;
while ( printf ( "%d\n", p1 ))
{
++*p1;
}
}
