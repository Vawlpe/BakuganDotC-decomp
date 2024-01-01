#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

char * strncpy(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  
  iVar2 = param_3 + -1;
  pcVar3 = param_1;
  if (param_3 != 0) {
    cVar4 = *param_2;
    param_3 = param_3 + -1;
    while( true ) {
      *pcVar3 = cVar4;
      param_2 = param_2 + 1;
      pcVar3 = pcVar3 + 1;
      iVar2 = param_3 + -1;
      if ((cVar4 == '\0') || (param_3 == 0)) break;
      cVar4 = *param_2;
      param_3 = iVar2;
    }
  }
  while (iVar1 = iVar2, param_3 != 0) {
    *pcVar3 = '\0';
    iVar2 = iVar1 + -1;
    pcVar3 = pcVar3 + 1;
    param_3 = iVar1;
  }
  return param_1;
}

