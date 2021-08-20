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
extern void gkhm4t1rtl ( fhzhep3hld * localDW ) ; extern void f3pmeztnvr (
SimStruct * rtS_i ) ; extern void hiausv0kpy ( SimStruct * rtS_e ) ; extern
void bjbtw11222 ( SimStruct * rtS_m , real_T oaxzc5oqc5 , fhzhep3hld *
localDW ) ; extern void mqxpcbjso3 ( lpx1p3sqzx * localDW ) ; extern void
dus4amarfa ( SimStruct * rtS_g ) ; extern void iux4nkmqlm ( SimStruct * rtS_e
) ; extern void n0mztpd0lo ( SimStruct * rtS_p , real_T ljxoaqpxr0 ,
lpx1p3sqzx * localDW ) ; extern void g4ih1sevaa ( f3efdxf5zj * localDW ) ;
extern void pwskx14vm4 ( SimStruct * rtS_m ) ; extern void awgtwaeg5t (
SimStruct * rtS_f ) ; extern void pefmh4xzsj ( SimStruct * rtS_c , real_T
lms1yhikhs , f3efdxf5zj * localDW ) ; extern void n2qea35ctl ( c4n55hkoix *
localDW ) ; extern void lb5no3bsk0 ( SimStruct * rtS_b ) ; extern void
mlwid4sfdn ( SimStruct * rtS_c ) ; extern void hqjl54s2qv ( SimStruct * rtS_p
, real_T ip044jqtue , c4n55hkoix * localDW ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
