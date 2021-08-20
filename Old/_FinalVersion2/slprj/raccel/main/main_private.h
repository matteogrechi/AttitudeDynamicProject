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
extern void m5wgi0ctev ( af2tclfwpd * localDW ) ; extern void elhxh1fuui (
SimStruct * rtS_i ) ; extern void k3uunhzc5w ( SimStruct * rtS_e ) ; extern
void bbjtuydtdk ( SimStruct * rtS_m , real_T acaa5rmmuy , af2tclfwpd *
localDW ) ; extern void pyvvbdnqxo ( fciynmlasr * localDW ) ; extern void
lo0d5ti0wo ( SimStruct * rtS_g ) ; extern void pkoiaofkhx ( SimStruct * rtS_e
) ; extern void bqx0vc3mud ( SimStruct * rtS_p , real_T nomilzrnj1 ,
fciynmlasr * localDW ) ; extern void eyp20xikbr ( jouayqdpoi * localDW ) ;
extern void ciw1a3ycef ( SimStruct * rtS_m ) ; extern void leyfenaqjz (
SimStruct * rtS_f ) ; extern void n53cqmpclo ( SimStruct * rtS_c , real_T
cgdmdwlmhh , jouayqdpoi * localDW ) ; extern void lvepdtsvu1 ( f2fu2ihnng *
localDW ) ; extern void pzicdihqt4 ( SimStruct * rtS_b ) ; extern void
dd41awjj4d ( SimStruct * rtS_c ) ; extern void prxbfmvl1e ( SimStruct * rtS_p
, real_T nrozvfkekm , f2fu2ihnng * localDW ) ; extern void n11z2qtnyp ( const
real_T n5fwjtrtab [ 2 ] , const real_T igzjsvau3z [ 2 ] , const real_T
aroe4yccp3 [ 2 ] , const real_T jmtcrxgana [ 2 ] , const real_T bw0neo01iz [
2 ] , const real_T clnqp52x4r [ 2 ] , g3zz1gnhke * localB ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
