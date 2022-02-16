// Illustration of multiple indirection with pointers

#include <stdio.h>

int main(void) {
  char a,
       *a_ptr,
       **a_pptr,
       ***a_ppptr;

  a = 'a';
  a_ptr = &a;
  a_pptr = &a_ptr;
  a_ppptr = &a_pptr;

  printf("\ta\t\ta_ptr\t\ta_pptr\t\ta_ppptr\n");
  printf("&\t%p\t%p\t%p\t%p\n", &a, &a_ptr, &a_pptr, &a_ppptr);
  printf("val\t%c\t\t%p\t%p\t%p\n", a, a_ptr, a_pptr, a_ppptr);
  printf("*\t%p\t\t%c\t\t%p\t%p\n", NULL, *a_ptr, *a_pptr, *a_ppptr);
  printf("**\t%p\t\t%p\t\t%c\t\t%p\n", NULL, NULL, **a_pptr, **a_ppptr);
  printf("***\t%p\t\t%p\t\t%p\t\t%c\n", NULL, NULL, NULL, ***a_ppptr);

  return 0;
}
