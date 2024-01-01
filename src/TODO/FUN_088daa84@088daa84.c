#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088daa84(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x15e) != '\0') {
    *(undefined *)(param_1 + 0x15e) = 0;
    iVar3 = 0;
    iVar2 = param_1;
    do {
      iVar1 = *(int *)(iVar2 + 0x180);
      if (iVar1 != 0) {
        FUN_089f5124(*(undefined4 *)(iVar1 + 0x214),iVar1);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 2);
    iVar2 = *(int *)(param_1 + 0x174);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x174) = 0;
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x20) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x20) + 8),3);
      *(undefined4 *)(param_1 + 0x174) = 0;
      *(undefined4 *)(param_1 + 0x174) = 0;
    }
  }
  return;
}

