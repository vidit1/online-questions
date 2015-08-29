#include<stdio.h>
void main(){
int i = 5;
int *p;
p = &i;
printf(" %u %u", *&p , &*p);
getch();
}
