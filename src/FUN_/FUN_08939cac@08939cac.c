#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08939cac(int param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 0x5ee);
  bVar2 = false;
  if ((cVar1 != '\x05') && (bVar2 = false, cVar1 != '\x06')) {
    bVar2 = true;
  }
  if (bVar2) {
    if (param_2 == '\0') {
      if (((cVar1 != '\x04') && (cVar1 != '\b')) && (cVar1 != '\t')) {
        FUN_08939a64(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x30));
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      }
      FUN_08939b58(param_1,0,0xc);
    }
    else {
      FUN_08939b58(param_1,param_2,0xc);
    }
  }
  else if (param_2 == '\0') {
    FUN_08939c50(param_1,0);
  }
  else {
    FUN_08939c50(param_1,param_2);
  }
  return;
}

