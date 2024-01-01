#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0884c9c8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_088660e0();
  if (param_2 < 3) {
    iVar4 = -1;
    if (0 < param_2) {
      if (param_2 < 2) {
        uVar3 = 1;
        if (iVar1 != 0) {
          uVar3 = *(undefined4 *)(iVar1 + 8);
        }
        iVar4 = FUN_089053e8(uVar3);
        if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
          piVar2 = (int *)FUN_0880cc48();
          *(undefined4 *)(*piVar2 + *(int *)(DAT_08ac58c4 + 4) * 4 + 0x250) = 2;
        }
      }
      else {
        uVar3 = 1;
        if (iVar1 != 0) {
          uVar3 = *(undefined4 *)(iVar1 + 8);
        }
        iVar4 = FUN_0890540c(uVar3);
        if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
          piVar2 = (int *)FUN_0880cc48();
          *(undefined4 *)(*piVar2 + *(int *)(DAT_08ac58c4 + 4) * 4 + 0x250) = 1;
        }
      }
    }
  }
  else {
    uVar3 = 1;
    if (param_2 < 4) {
      if (iVar1 != 0) {
        uVar3 = *(undefined4 *)(iVar1 + 8);
      }
      iVar4 = FUN_0890540c(uVar3);
      if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
        piVar2 = (int *)FUN_0880cc48();
        *(undefined4 *)(*piVar2 + *(int *)(DAT_08ac58c4 + 4) * 4 + 0x250) = 1;
      }
    }
    else {
      uVar3 = 1;
      if (param_2 < 5) {
        if (iVar1 != 0) {
          uVar3 = *(undefined4 *)(iVar1 + 8);
        }
        iVar4 = FUN_0890540c(uVar3);
        if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
          piVar2 = (int *)FUN_0880cc48();
          *(undefined4 *)(*piVar2 + *(int *)(DAT_08ac58c4 + 4) * 4 + 0x250) = 1;
        }
      }
      else {
        iVar4 = -1;
      }
    }
  }
  iVar1 = FUN_0884c830(param_1);
  if (iVar1 != 0) {
    iVar4 = -1;
  }
  iVar1 = FUN_0880d354();
  if ((iVar1 != 0) && (iVar1 = FUN_0880d2e0(), iVar1 != 0)) {
    uVar3 = FUN_0880cc48();
    iVar1 = FUN_0880d7e0(uVar3,0x4880);
    if (iVar1 != 0) {
      iVar4 = -1;
    }
  }
  if ((iVar4 != -1) && (iVar1 = FUN_089bf93c(0x65,1), iVar1 == 0)) {
    iVar1 = FUN_088fed08(iVar4);
    *(int *)(iVar1 + 0xf0) = param_1 + 0x468;
    *(int *)(iVar1 + 0x4e0) = param_1 + 0x474;
  }
  DAT_08ac601c = 0;
  FUN_088245c8(*(undefined4 *)(param_1 + 0x4d4),0xffffffff);
  return iVar4;
}

