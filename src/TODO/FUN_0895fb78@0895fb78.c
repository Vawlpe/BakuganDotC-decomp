#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895fb78(int param_1,char param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  param_3 = param_3 & 0xff;
  iVar4 = param_3 + 1;
  uVar1 = (uint)*(ushort *)(param_1 + 0x5192) + *(ushort *)(param_1 + 0x5194) * param_3;
  if (uVar1 < (uint)*(ushort *)(param_1 + 0x5192) + (uint)*(ushort *)(param_1 + 0x5194) * iVar4) {
    iVar3 = uVar1 * 4;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (param_2 == '\0') {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        iVar2 = (uint)*(ushort *)(param_1 + 0x5192) + (uint)*(ushort *)(param_1 + 0x5194) * iVar4;
      }
      else {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        iVar2 = (uint)*(ushort *)(param_1 + 0x5192) + (uint)*(ushort *)(param_1 + 0x5194) * iVar4;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 4;
    } while ((int)uVar1 < iVar2);
  }
  uVar1 = (uint)*(ushort *)(param_1 + 0x5196) + *(ushort *)(param_1 + 0x5198) * param_3;
  if (uVar1 < (uint)*(ushort *)(param_1 + 0x5196) + (uint)*(ushort *)(param_1 + 0x5198) * iVar4) {
    iVar3 = uVar1 * 4;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (param_2 == '\0') {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        iVar2 = (uint)*(ushort *)(param_1 + 0x5196) + (uint)*(ushort *)(param_1 + 0x5198) * iVar4;
      }
      else {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        iVar2 = (uint)*(ushort *)(param_1 + 0x5196) + (uint)*(ushort *)(param_1 + 0x5198) * iVar4;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 4;
    } while ((int)uVar1 < iVar2);
  }
  uVar1 = (uint)*(ushort *)(param_1 + 0x519a) + *(ushort *)(param_1 + 0x519c) * param_3;
  if (uVar1 < (uint)*(ushort *)(param_1 + 0x519a) + (uint)*(ushort *)(param_1 + 0x519c) * iVar4) {
    iVar3 = uVar1 * 4;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (param_2 == '\0') {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        iVar2 = (uint)*(ushort *)(param_1 + 0x519a) + (uint)*(ushort *)(param_1 + 0x519c) * iVar4;
      }
      else {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        FUN_0895f9a8(param_1,param_3);
        iVar2 = (uint)*(ushort *)(param_1 + 0x519a) + (uint)*(ushort *)(param_1 + 0x519c) * iVar4;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 4;
    } while ((int)uVar1 < iVar2);
  }
  uVar1 = (uint)*(ushort *)(param_1 + 0x51e2) + *(ushort *)(param_1 + 0x51e4) * param_3;
  if (uVar1 < (uint)*(ushort *)(param_1 + 0x51e2) + (uint)*(ushort *)(param_1 + 0x51e4) * iVar4) {
    iVar3 = uVar1 * 4;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (param_2 == '\0') {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        iVar2 = (uint)*(ushort *)(param_1 + 0x51e2) + (uint)*(ushort *)(param_1 + 0x51e4) * iVar4;
      }
      else {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        iVar2 = (uint)*(ushort *)(param_1 + 0x51e2) + (uint)*(ushort *)(param_1 + 0x51e4) * iVar4;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 4;
    } while ((int)uVar1 < iVar2);
  }
  uVar1 = (uint)*(ushort *)(param_1 + 0x51f2) + *(ushort *)(param_1 + 0x51f4) * param_3;
  if (uVar1 < (uint)*(ushort *)(param_1 + 0x51f2) + (uint)*(ushort *)(param_1 + 0x51f4) * iVar4) {
    iVar3 = uVar1 * 4;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (param_2 == '\0') {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        iVar2 = (uint)*(ushort *)(param_1 + 0x51f2) + (uint)*(ushort *)(param_1 + 0x51f4) * iVar4;
      }
      else {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        iVar2 = (uint)*(ushort *)(param_1 + 0x51f2) + (uint)*(ushort *)(param_1 + 0x51f4) * iVar4;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 4;
    } while ((int)uVar1 < iVar2);
  }
  return;
}

