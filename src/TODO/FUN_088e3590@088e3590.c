#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e3590(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar3 = *(int *)(param_1 + 0x324) - 1;
  if (uVar3 < 6) {
    if (*(int *)(param_1 + 0x324) == 1) {
      fVar4 = (float)FUN_089df49c(param_1);
      fVar5 = (float)FUN_089df51c(param_1);
      if (fVar4 < fVar5) {
        return;
      }
      FUN_088def24(0x3e4ccccd,param_1,0xe,0,0);
      FUN_089df730(0x40c00000,param_1);
      *(undefined4 *)(param_1 + 0x324) = 2;
      return;
    }
    if (uVar3 == 1) {
      fVar4 = (float)FUN_089df49c(param_1);
      fVar5 = (float)FUN_089df51c(param_1);
      if (fVar4 < fVar5) {
        return;
      }
      if (*(int *)(param_1 + 0x414) != 0) {
        iVar1 = *(int *)(param_1 + 0x414);
        FUN_088d7704(iVar1,1);
        local_30 = *(undefined4 *)(iVar1 + 0x20);
        uStack_2c = *(undefined4 *)(iVar1 + 0x24);
        uStack_28 = *(undefined4 *)(iVar1 + 0x28);
        uStack_24 = *(undefined4 *)(iVar1 + 0x2c);
        FUN_088badd4(*(undefined4 *)(param_1 + 0x314),&local_30);
      }
      *(undefined4 *)(param_1 + 0x324) = 3;
      return;
    }
    if (uVar3 == 2) {
      if ((*(int *)(param_1 + 0x414) != 0) &&
         (iVar1 = FUN_088d7710(*(undefined4 *)(param_1 + 0x414)), iVar1 == 1)) {
        return;
      }
      *(undefined4 *)(param_1 + 0x324) = 4;
      return;
    }
    if (uVar3 == 3) {
      iVar1 = FUN_088be274();
      *(undefined *)(iVar1 + 0x6c0) = 1;
      *(undefined4 *)(param_1 + 0x324) = 5;
      return;
    }
    if (uVar3 == 4) {
      uVar2 = FUN_088be274();
      iVar1 = FUN_088c2010(uVar2);
      if (iVar1 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x324) = 6;
      return;
    }
    if (uVar3 == 5) {
      if (0 < *(int *)(param_1 + 0x338)) {
        *(int *)(param_1 + 0x338) = *(int *)(param_1 + 0x338) + -1;
        return;
      }
      uVar2 = _DONE_Get_DAT_08AAC9E0();
      FUN_0880d0e8(uVar2,0x20000000);
      return;
    }
  }
  FUN_088def24(0x3e4ccccd,param_1,0xc,0,0);
  FUN_089df730(0x40a00000,param_1);
  *(undefined4 *)(param_1 + 0x324) = 1;
  return;
}

