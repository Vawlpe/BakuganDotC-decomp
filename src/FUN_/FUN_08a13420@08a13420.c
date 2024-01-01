#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a13420(int param_1,int param_2,uint param_3,int param_4,int param_5,code *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_1 != 0) && (param_5 * param_4 != 0)) {
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
    iVar1 = (param_2 * 4 + iVar1) * 4 + param_1;
    uVar3 = (iVar2 + param_5 * param_4) - 1U & uVar3;
    iVar2 = *(int *)(iVar1 + 0x3c);
    if (uVar3 <= *(uint *)(iVar1 + 0xc)) {
      *(uint *)(iVar1 + 0x3c) = iVar2 + uVar3;
      *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) - uVar3;
      if (iVar2 == 0) {
        return 0;
      }
      iVar1 = *(int *)(param_2 * 4 + param_1);
      if (iVar1 != 0) {
        *(short *)(iVar1 + 0xe) = *(short *)(iVar1 + 0xe) + 1;
      }
      if (iVar2 == 0) {
        return 0;
      }
      if (param_6 == (code *)0x0) {
        return iVar2;
      }
      if (0 < param_5) {
        iVar4 = 0;
        iVar1 = iVar2;
        do {
          iVar4 = iVar4 + 1;
          (*param_6)(iVar1);
          iVar1 = iVar1 + param_4;
        } while (param_5 != iVar4);
      }
      if (param_5 < 2) {
        return iVar2;
      }
      iVar1 = *(int *)(param_2 * 4 + param_1);
      *(short *)(iVar1 + 0xe) = (short)param_5 + *(short *)(iVar1 + 0xe) + -1;
      return iVar2;
    }
  }
  return 0;
}

