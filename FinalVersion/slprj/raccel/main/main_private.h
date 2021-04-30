#ifndef RTW_HEADER_main_private_h_
#define RTW_HEADER_main_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "main.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)   if(!(ptr)) {\
  ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
  }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((ptr));\
  (ptr) = (NULL);\
  }
#else
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((void *)(ptr));\
  (ptr) = (NULL);\
  }
#endif
#endif
extern void n11z2qtnyp ( const real_T n5fwjtrtab [ 2 ] , const real_T
igzjsvau3z [ 2 ] , const real_T aroe4yccp3 [ 2 ] , const real_T jmtcrxgana [
2 ] , const real_T bw0neo01iz [ 2 ] , const real_T clnqp52x4r [ 2 ] ,
g3zz1gnhke * localB ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
