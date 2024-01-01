#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

char * memchr(char *param_1,char param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = param_3 + -1;
  if (param_3 != 0) {
    do {
      if (*param_1 == param_2) {
        return param_1;
      }
      param_1 = param_1 + 1;
      bVar1 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar1);
  }
  return (char *)0x0;
}

