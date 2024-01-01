#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0886b348(int param_1)

{
  short sVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(*(int *)(*(int *)(param_1 + 0x5b0) + *(int *)(param_1 + 0x5b8) * 4) +
                   *(int *)(param_1 + 0x5c0) * 0x18);
  iVar2 = (int)*(char *)(param_1 + *(int *)(param_1 + 0x5c0) + 0x5d8);
  if (*(char *)(param_1 + 0x5e4) == '\0') {
    sVar1 = *(short *)(pcVar3 + 2);
  }
  else {
    sVar1 = *(short *)(pcVar3 + 4);
  }
  if (iVar2 != sVar1) {
    if (((*(char *)(param_1 + 0x5e4) == '\0') && (*pcVar3 != '\0')) &&
       (iVar2 == *(short *)(pcVar3 + 4))) {
      return 1;
    }
    return 0xffffffff;
  }
  return 0;
}

