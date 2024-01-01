#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893b6f8(undefined4 param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  FUN_089a4b5c(param_2,param_3,8,0xff);
  iVar3 = 0;
  cVar1 = *param_2;
  pcVar2 = param_2;
  while (cVar1 != -1) {
    *pcVar2 = cVar1 + '\x11';
    iVar3 = iVar3 + 1;
    pcVar2 = param_2 + iVar3;
    cVar1 = *pcVar2;
  }
  *pcVar2 = '\0';
  return;
}

