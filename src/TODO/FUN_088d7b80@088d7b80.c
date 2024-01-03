#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d7b80(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  float fVar6;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar2 = FUN_088e1948();
  if (iVar2 == 0) {
    return;
  }
  local_30 = *(undefined4 *)(param_1 + 400);
  uStack_2c = *(undefined4 *)(param_1 + 0x194);
  uStack_28 = *(undefined4 *)(param_1 + 0x198);
  uStack_24 = *(undefined4 *)(param_1 + 0x19c);
  iVar3 = FUN_088d940c(0x40a00000,param_1,&local_30);
  if (iVar3 == 0) {
    bVar1 = false;
    if (*(char *)(param_1 + 0x1a1) == '\0') {
      if (*(char *)(param_1 + 0x1a0) != '\0') {
        bVar1 = true;
      }
    }
    else {
      fVar6 = (float)FUN_089df49c(param_1);
      if (20.0 <= fVar6) {
        bVar1 = *(char *)(param_1 + 0x1a0) != '\0';
        *(undefined *)(param_1 + 0x1a1) = 0;
      }
    }
    if (bVar1) {
      FUN_089e0860(param_1);
      (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                (0xbf800000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
      iVar3 = DONE_NotZero_DAT_08AC5874();
      if (iVar3 != 0) {
        uVar4 = DONE_Get_DAT_08AC5874(param_1);
        FUN_089c6350(uVar4,0x2c00019,0,0);
      }
      FUN_089dffd4(param_1,0);
      *(undefined *)(param_1 + 0x1a0) = 0;
      bVar5 = *(byte *)(param_1 + 0x15f);
    }
    else {
      bVar5 = *(byte *)(param_1 + 0x15f);
    }
    *(byte *)(param_1 + 0x15f) = bVar5 & 0xfd;
    *(undefined *)(iVar2 + 0x3b1) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x1a0) == '\0') {
    FUN_089e0860(param_1);
    (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
              (0x3f800000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
    FUN_089dffd4(param_1,0);
    iVar3 = DONE_NotZero_DAT_08AC5874();
    if (iVar3 == 0) {
      *(undefined *)(param_1 + 0x1a1) = 1;
    }
    else {
      uVar4 = DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar4,0x2c00019,0,0);
      *(undefined *)(param_1 + 0x1a1) = 1;
    }
    *(undefined *)(param_1 + 0x1a0) = 1;
  }
  else {
    fVar6 = (float)FUN_089df49c(param_1);
    if (fVar6 < 20.0) {
      bVar5 = *(byte *)(param_1 + 0x15f);
      goto LAB_088d7c78;
    }
    FUN_089df450(param_1);
  }
  bVar5 = *(byte *)(param_1 + 0x15f);
LAB_088d7c78:
  *(byte *)(param_1 + 0x15f) = bVar5 | 2;
  *(undefined *)(iVar2 + 0x3b1) = 1;
  return;
}

