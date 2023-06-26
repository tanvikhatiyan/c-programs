//DYNAMIC MEMORY LLOCATION:
// IT IS A WAY TO ALLOCTE MEMORY TO A DATA STRUCTURE DURING THE RUNTIME.

//we need some function to allocate & free memory dynamically

//FUNCTION FOR DNA:
//a) malloc() = memory allocation 
//b) calloc() = continuous allocation
//c) free() 
//d) realloc() = re-allocation

//we use #include<stdlib.h> library for these function

/*
malloc() = takes number of bytes to be allocated & return a pointer of type void
ptr = (*int)malloc(5*size of(int));
 */

 /*
 callloc() = continuos allocation
 intialize with 0 
 ptr = (*int)calloc(5,sizeof(int));
  */

/*
  free() = we use it to free memory that is llocated using malloc calloc
  free(ptr);
*/

/*
relloc() = realoocate (increse or decrese ) memory using the same pointer & size
ptr = relloc(ptr, newsize);
*/



thank youu.........