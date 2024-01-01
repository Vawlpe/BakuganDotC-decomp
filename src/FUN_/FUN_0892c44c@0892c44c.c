#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892c44c(uint param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte abStack_30 [24];
  
  uVar7 = param_1 & 0xff;
  memcpy_jak(abStack_30,&DAT_08ac1924,0x15);
  uVar2 = FUN_0892ae34(0,uVar7);
  uVar8 = uVar2 & 0xff;
  if (uVar8 == 0) {
    return;
  }
  piVar3 = (int *)FUN_0880cc48();
  iVar4 = (int)uVar8 >> 3;
  if ((int)uVar8 < 0) {
    uVar6 = -(-uVar8 & 7) & 0x1f;
  }
  else {
    uVar6 = uVar2 & 7;
  }
  iVar9 = 0;
  if (((uint)*(byte *)(*piVar3 + iVar4 + 0x50e) & 1 << uVar6) == 0) {
    do {
      piVar3 = (int *)FUN_0880cc48();
      if (*(char *)(*piVar3 + uVar7 * 6 + iVar9 + 0x540) != '\0') {
        piVar3 = (int *)FUN_0880cc48();
        *(undefined *)(*piVar3 + uVar8 * 6 + iVar9 + 0x540) = 1;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 6);
  }
  piVar3 = (int *)FUN_0880cc48();
  iVar9 = *piVar3 + ((int)uVar7 >> 3);
  if ((int)uVar7 < 0) {
    param_1 = -(-uVar7 & 7) & 0x1f;
  }
  else {
    param_1 = param_1 & 7;
  }
  *(byte *)(iVar9 + 0x525) = *(byte *)(iVar9 + 0x525) | (byte)(1 << param_1);
  piVar3 = (int *)FUN_0880cc48();
  if ((int)uVar8 < 0) {
    bVar1 = (byte)(1 << (-(-uVar8 & 7) & 0x1f));
  }
  else {
    bVar1 = (byte)(1 << (uVar2 & 7));
  }
  *(byte *)(*piVar3 + iVar4 + 0x50e) = *(byte *)(*piVar3 + iVar4 + 0x50e) | bVar1;
  if ((int)uVar8 < 0) {
    uVar6 = -(-uVar8 & 7) & 0x1f;
  }
  else {
    uVar6 = uVar2 & 7;
  }
  *(byte *)(*piVar3 + iVar4 + 0x5be) = *(byte *)(*piVar3 + iVar4 + 0x5be) | (byte)(1 << uVar6);
  if ((int)uVar8 < 0) {
    uVar2 = -(-uVar8 & 7) & 0x1f;
  }
  else {
    uVar2 = uVar2 & 7;
  }
  *(byte *)(*piVar3 + iVar4 + 0x5c3) = *(byte *)(*piVar3 + iVar4 + 0x5c3) | (byte)(1 << uVar2);
  piVar3 = (int *)FUN_0880cc48();
  if (*(uint *)(*piVar3 + 0x48c) == uVar7) {
    piVar3 = (int *)FUN_0880cc48();
    *(uint *)(*piVar3 + 0x48c) = uVar8;
  }
  piVar3 = (int *)FUN_0880cc48();
  uVar2 = (uVar8 * 4 + (uint)abStack_30[uVar8]) - 4;
  iVar4 = (int)(uVar2 + ((uint)((int)uVar2 >> 3) >> 0x1d)) >> 3;
  iVar9 = *piVar3 + iVar4;
  bVar1 = *(byte *)(iVar9 + 0x51a);
  if ((int)uVar2 < 0) {
    uVar7 = -(-uVar2 & 7) & 0x1f;
  }
  else {
    uVar7 = uVar2 & 7;
  }
  iVar5 = *piVar3 + iVar4;
  if (((uint)bVar1 & 1 << uVar7) == 0) {
    if ((int)uVar2 < 0) {
      uVar7 = -(-uVar2 & 7) & 0x1f;
    }
    else {
      uVar7 = uVar2 & 7;
    }
    *(byte *)(iVar9 + 0x51a) = bVar1 | (byte)(1 << uVar7);
    iVar9 = *piVar3 + (((int)(uVar2 + ((uint)((int)uVar2 >> 2) >> 0x1e)) >> 2) + 1) * 2;
    if (*(char *)(iVar9 + 0x4e4) == -1) {
      *(char *)(iVar9 + 0x4e4) = (char)uVar2;
      iVar5 = *piVar3;
    }
    else {
      iVar5 = *piVar3 + iVar4;
      if (*(char *)(iVar9 + 0x4e5) != -1) goto LAB_0892c790;
      *(char *)(iVar9 + 0x4e5) = (char)uVar2;
      iVar5 = *piVar3;
    }
    iVar5 = iVar5 + iVar4;
  }
LAB_0892c790:
  if ((int)uVar2 < 0) {
    bVar1 = (byte)(1 << (-(-uVar2 & 7) & 0x1f));
  }
  else {
    bVar1 = (byte)(1 << (uVar2 & 7));
  }
  *(byte *)(iVar5 + 0x5c8) = *(byte *)(iVar5 + 0x5c8) | bVar1;
  if ((int)uVar2 < 0) {
    bVar1 = (byte)(1 << (-(-uVar2 & 7) & 0x1f));
  }
  else {
    bVar1 = (byte)(1 << (uVar2 & 7));
  }
  *(byte *)(*piVar3 + iVar4 + 0x5d3) = *(byte *)(*piVar3 + iVar4 + 0x5d3) | bVar1;
  return;
}

