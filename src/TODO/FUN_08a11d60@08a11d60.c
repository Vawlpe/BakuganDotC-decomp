#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a11d60(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar3 = *(int *)(param_1 + 0xc);
  uVar6 = 0;
  if (iVar3 != 0) {
    uVar7 = (uint)*(ushort *)(iVar3 + 0x12);
    uVar8 = (uint)*(ushort *)(iVar3 + 0x14);
    uVar6 = *(ushort *)(iVar3 + 0x24) < 2 ^ 1;
    uVar5 = 1 << (0x20U - LZCOUNT(uVar7 - 1) & 0x1f);
    if (1 < *(ushort *)(iVar3 + 0x26)) {
      uVar6 = uVar6 | 2;
    }
    uVar4 = 1 << (0x20U - LZCOUNT(uVar8 - 1) & 0x1f);
    if ((uVar5 == uVar7) && (uVar4 == uVar8)) {
      iVar3 = *(int *)(param_1 + 0x10);
      goto LAB_08a11df8;
    }
    uVar6 = uVar6 | 0x60;
    *(float *)(param_1 + 0x28) = (float)uVar7 / (float)uVar5;
    *(float *)(param_1 + 0x2c) = (float)uVar8 / (float)uVar4;
  }
  iVar3 = *(int *)(param_1 + 0x10);
LAB_08a11df8:
  if (iVar3 != 0) {
    if (1 < *(ushort *)(iVar3 + 0x24)) {
      uVar6 = uVar6 | 4;
    }
    if (1 < *(ushort *)(iVar3 + 0x26)) {
      uVar6 = uVar6 | 8;
    }
  }
  if ((uVar6 & 10) == 0) {
    uVar5 = 0;
    if (*(byte *)(param_1 + 0x18) != 0) {
      cVar1 = *(char *)(*(int *)(param_1 + 0x14) + 0xd);
      pcVar2 = (char *)(*(int *)(param_1 + 0x14) + 0x3d);
      while (cVar1 == '\0') {
        uVar5 = uVar5 + 1;
        if (uVar5 == *(byte *)(param_1 + 0x18)) goto LAB_08a11e60;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 0x30;
      }
      uVar6 = uVar6 | 0x10;
    }
  }
  else {
    uVar6 = uVar6 | 0x10;
  }
LAB_08a11e60:
  *(ushort *)(param_1 + 2) = uVar6;
  return;
}

