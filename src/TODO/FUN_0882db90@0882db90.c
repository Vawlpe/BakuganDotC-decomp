#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882db90(int param_1,int param_2)

{
  int extraout_v1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x9e0) = 0;
    iVar1 = 0xb;
    iVar2 = 0;
    do {
      uVar4 = (uint)(*(char *)(param_2 + iVar1 * 6 + 0x440) != '\0');
      FUN_0882d730(param_1,iVar2,uVar4);
      if (uVar4 != 0) {
        *(int *)(param_1 + 0x9e0) = *(int *)(param_1 + 0x9e0) + 1;
      }
      iVar3 = iVar2 + 1;
      iVar1 = iVar2 + 0xc;
      param_2 = extraout_v1;
      iVar2 = iVar3;
    } while (iVar3 < 6);
  }
  return;
}

