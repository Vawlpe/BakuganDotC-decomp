#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088381d8(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  iVar3 = param_1 + param_3 * 2;
  sVar1 = *(short *)(iVar3 + 0xae8);
  if (sVar1 < 1) {
    if (-1 < sVar1) {
      if (*(int *)(DAT_08ac58c4 + 0x2c) != 0xd) {
        return;
      }
      fVar4 = (float)FUN_08887b94(param_2 + 0x434);
      iVar2 = FUN_08887a90(param_2 + 0x434);
      fVar5 = (float)iVar2;
      if (iVar2 < 0) {
        fVar5 = fVar5 + 4.294967e+09;
      }
      if (fVar5 <= fVar4) {
        return;
      }
      *(short *)(iVar3 + 0xae8) = *(short *)(iVar3 + 0xae8) + 1;
      return;
    }
    sVar1 = *(short *)(iVar3 + 0xb1e);
  }
  else {
    if (sVar1 < 2) {
      iVar2 = FUN_0882cce0(param_1,0,0x37,0x2a13,*(int *)(param_1 + 0x8f4) == 0x37);
      if (iVar2 == 0) {
        return;
      }
      FUN_0882cd8c(param_1,1,0xb,PTR_DAT_08ab9f80,0xffffffff);
      *(undefined2 *)(iVar3 + 0xb1e) = 0;
      *(short *)(iVar3 + 0xae8) = *(short *)(iVar3 + 0xae8) + 1;
      return;
    }
    if (sVar1 < 3) {
      iVar2 = *(short *)(iVar3 + 0xb1e) + 1;
      *(short *)(iVar3 + 0xb1e) = (short)iVar2;
      if (iVar2 * 0x10000 >> 0x10 < 0xb5) {
        return;
      }
      FUN_0882cd8c(param_1,0,0,0,0xffffffff);
      *(short *)(iVar3 + 0xae8) = *(short *)(iVar3 + 0xae8) + 1;
      return;
    }
    sVar1 = *(short *)(iVar3 + 0xb1e);
  }
  *(short *)(iVar3 + 0xb1e) = (short)(sVar1 + 1);
  if (600 < (sVar1 + 1) * 0x10000 >> 0x10) {
    *(undefined2 *)(iVar3 + 0xae8) = 0;
  }
  return;
}

