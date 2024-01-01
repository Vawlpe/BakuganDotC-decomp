#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a12d94(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 != 0) && (param_4 != 0)) {
    if (param_3 < 5) {
      iVar1 = 4;
      iVar2 = 3;
      uVar3 = 0xfffffffc;
    }
    else {
      if (param_3 < 0x11) {
        param_1 = (param_2 * 4 + 2) * 4 + param_1;
        *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (param_4 + 0xfU & 0xfffffff0);
        return 1;
      }
      if (param_3 < 0x41) {
        iVar1 = 0x40;
        iVar2 = 1;
        uVar3 = 0xffffffc0;
      }
      else {
        iVar1 = 0x80;
        iVar2 = 0;
        uVar3 = 0xffffff80;
      }
    }
    param_1 = (param_2 * 4 + iVar2) * 4 + param_1;
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + ((iVar1 + param_4) - 1U & uVar3);
    return 1;
  }
  return 0;
}

