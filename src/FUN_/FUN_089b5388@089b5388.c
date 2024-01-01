#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

char * FUN_089b5388(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0;
  if (*param_1 != '\0') {
    for (iVar3 = 1; param_1[iVar3] != '\0'; iVar3 = iVar3 + 1) {
    }
  }
  iVar3 = iVar3 + -1;
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      pcVar4 = param_1 + iVar3;
      cVar1 = param_1[iVar2];
      iVar3 = iVar3 + -1;
      param_1[iVar2] = *pcVar4;
      iVar2 = iVar2 + 1;
      *pcVar4 = cVar1;
    } while (iVar2 < iVar3);
  }
  return param_1;
}

