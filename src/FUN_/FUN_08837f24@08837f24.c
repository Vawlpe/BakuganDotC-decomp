#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08837f24(int param_1,int param_2,int param_3)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 + param_3 * 2;
  sVar1 = *(short *)(iVar4 + 0xae8);
  if (sVar1 < 2) {
    if (-1 < sVar1) {
      if (0 < sVar1) {
        iVar3 = FUN_0882cce0(param_1,0,0x39,0x2a14,0);
        if (iVar3 == 0) {
          return;
        }
        FUN_0882cd8c(param_1,1,10,PTR_DAT_08ab9f80,0xffffffff);
        *(short *)(iVar4 + 0xae8) = *(short *)(iVar4 + 0xae8) + 1;
        return;
      }
      if (*(int *)(DAT_08ac58c4 + 0x2c) < 0xf) {
        return;
      }
      if (*(int *)(param_2 + 0x534) == 0) {
        return;
      }
      *(short *)(iVar4 + 0xae8) = sVar1 + 1;
      return;
    }
    sVar1 = *(short *)(iVar4 + 0xb1e);
  }
  else {
    if (sVar1 < 3) {
      bVar2 = false;
      if (*(int *)(param_1 + 0x8f4) == 0x39) {
        iVar3 = FUN_0882cce0(param_1,0,0x3a,0x2a15,0);
        if (iVar3 != 0) {
          bVar2 = true;
        }
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        return;
      }
      *(undefined2 *)(iVar4 + 0xb1e) = 0;
      *(short *)(iVar4 + 0xae8) = *(short *)(iVar4 + 0xae8) + 1;
      return;
    }
    if (sVar1 < 4) {
      iVar3 = *(short *)(iVar4 + 0xb1e) + 1;
      *(short *)(iVar4 + 0xb1e) = (short)iVar3;
      if (iVar3 * 0x10000 >> 0x10 < 0xb5) {
        return;
      }
      FUN_0882cd8c(param_1,0,0,0,0xffffffff);
      *(short *)(iVar4 + 0xae8) = *(short *)(iVar4 + 0xae8) + 1;
      return;
    }
    sVar1 = *(short *)(iVar4 + 0xb1e);
  }
  *(short *)(iVar4 + 0xb1e) = (short)(sVar1 + 1);
  if (0x1c2 < (sVar1 + 1) * 0x10000 >> 0x10) {
    *(undefined2 *)(iVar4 + 0xae8) = 0;
  }
  return;
}

