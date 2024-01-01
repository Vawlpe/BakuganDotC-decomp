#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a12ee4(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_1 != 0) && (param_4 != 0)) {
    if (param_3 < 5) {
      iVar2 = 4;
      iVar1 = 3;
      uVar3 = 0xfffffffc;
    }
    else if (param_3 < 0x11) {
      iVar2 = 0x10;
      iVar1 = 2;
      uVar3 = 0xfffffff0;
    }
    else if (param_3 < 0x41) {
      iVar2 = 0x40;
      iVar1 = 1;
      uVar3 = 0xffffffc0;
    }
    else {
      iVar2 = 0x80;
      iVar1 = 0;
      uVar3 = 0xffffff80;
    }
    iVar4 = (param_2 * 4 + iVar1) * 4 + param_1;
    uVar3 = (iVar2 + param_4) - 1U & uVar3;
    iVar1 = *(int *)(iVar4 + 0x3c);
    if (uVar3 <= *(uint *)(iVar4 + 0xc)) {
      *(uint *)(iVar4 + 0x3c) = iVar1 + uVar3;
      *(uint *)(iVar4 + 0xc) = *(uint *)(iVar4 + 0xc) - uVar3;
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = *(int *)(param_2 * 4 + param_1);
      if (iVar2 != 0) {
        *(short *)(iVar2 + 0xe) = *(short *)(iVar2 + 0xe) + 1;
        return iVar1;
      }
      return iVar1;
    }
  }
  return 0;
}

