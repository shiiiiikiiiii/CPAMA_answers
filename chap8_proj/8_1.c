/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* repdigit.c (Chapter 8, page 166) */
/* Checks numbers for repeated digits */

// #include <stdbool.h>   /* C99 only */
#include <stdio.h>

int main(void)
{
  int digit_seen[10] = {0};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    // if (digit_seen[digit])
    //   break;
    digit_seen[digit]++;
    n /= 10;
  }

//   if (n > 0)
//     printf("Repeated digit\n");
//   else
//     printf("No repeated digit\n");
  printf("repeated digit(s): ");
  for(int i = 0; i < 10; i++){
    if(digit_seen[i] >= 2){
        printf("%d ", i);
    }
  }

  return 0;
}