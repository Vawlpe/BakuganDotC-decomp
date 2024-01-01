#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d2c48(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  FUN_089bb728(*param_1);
  if ((*(char *)((int)param_1 + 5) != '\0') && (uVar4 = 1, param_2 != 0)) {
    uVar4 = 1;
    iVar1 = 0;
    puVar2 = param_1;
    do {
      pcVar3 = (char *)(param_2 + iVar1);
      iVar1 = iVar1 + 1;
      if (*(char *)(puVar2 + 0x1a) != *pcVar3) {
        uVar4 = 0;
        break;
      }
      puVar2 = (undefined4 *)((int)param_1 + iVar1);
    } while (iVar1 < 6);
  }
  FUN_089bb790(*param_1);
  return uVar4;
}

