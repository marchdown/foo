// todo
//
// [x] do the merge-two-sorted-arrays routine
// followup:
// do mergesort
// do quicksort
// do a primer on sorting in C complete with complexity analysis and guarantees
//
// do a problem from the Elements
//
// implement a simple type system in C
//
// implement a LISP
//
// implement blockchain
//
// throw in TCP/IP since we're at that.
//
// *ahem*
//
// we were stuck at arrays. and pointers. Just do a chapter on arrays and pointers and we're golden.

//// The problem: //
// given two sorted arrays
// merge them into one sorted array.
// this can be done in linear time

// eech take input maybe? also abstract away printing arrays, what is this, 1978?
// if we're taking input we should do validation
// dynamic sizing of our arrays
//
// and tests while we're at it
// and then reimplement the whole thing in assembly, in Agda and in a modern imperative language, just for kicks.
//


#include <stdio.h>

void main(){


  int ai, bi, ci, ai_max, bi_max, ci_max;

  ai_max = 4;
  bi_max = 7;
  ci_max = ai_max+bi_max;
  ai = bi = ci = 0;

  int a[ai_max];
  int b[bi_max];
  int c[ci_max];



  // initialize our two arrays with dummy data;
  for(int i = 0; i<ai_max; i++){
    a[i] = i*7;
  }

  for(int i = 0; i<bi_max; i++){
    b[i] = i*3;
  }

  // precondition
  while(ci < ci_max){
  // loop invariant
    if ((b[bi] > a[ai]) && (ai <= ai_max)){
      c[ci] = a[ai];
      ++ci;
      ++ai;
    }
    else if(bi <= bi_max){
      c[ci] = b[bi];
      ++ci;
      ++bi;
    }
  // postcondition
  }
  printf("Here's our list A:\n");
  for(int i = 0; i< ai_max; i++){
    printf("%d, ", a[i]);
  }
  printf("\n");

  printf("Here's our list B:\n");
  for(int i = 0; i< bi_max; i++){
    printf("%d, ", b[i]);
  }
  printf("\n");


  printf("And here's our merged list C:\n");
  for(int i = 0; i< ci_max; i++){
    printf("%d, ", c[i]);
  }
  printf("\n");
}
