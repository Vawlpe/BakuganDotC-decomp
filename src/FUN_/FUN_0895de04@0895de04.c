#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0895de04(int param_1,char param_2)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = (uint)*(ushort *)(param_1 + 0x5162);
  cVar3 = '\0';
  if (uVar8 < uVar8 + 0x14) {
    iVar7 = uVar8 << 2;
    iVar6 = param_1 + uVar8 * 0x28 + 0x78;
    do {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7);
      if (param_2 == '\0') {
        cVar2 = FUN_089a91a0(0x3fc00000,0x3f800000,0x41000000,0,uVar4,iVar6,3);
        uVar1 = *(ushort *)(param_1 + 0x5162);
      }
      else {
        cVar2 = FUN_089a91a0(0x3f800000,0x3fc00000,0x41000000,param_2,uVar4,iVar6,3);
        uVar1 = *(ushort *)(param_1 + 0x5162);
      }
      cVar3 = cVar3 + cVar2;
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 0x28;
    } while ((int)uVar8 < (int)(uVar1 + 0x14));
  }
  uVar8 = (uint)*(ushort *)(param_1 + 0x5164);
  if (uVar8 < uVar8 + 0x14) {
    iVar7 = uVar8 << 2;
    iVar6 = param_1 + uVar8 * 0x28 + 0x78;
    do {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7);
      if (param_2 == '\0') {
        cVar2 = FUN_089a91a0(0x3fc00000,0x3f800000,0x41000000,0,uVar4,iVar6,3);
        uVar1 = *(ushort *)(param_1 + 0x5164);
      }
      else {
        cVar2 = FUN_089a91a0(0x3f800000,0x3fc00000,0x41000000,param_2,uVar4,iVar6,3);
        uVar1 = *(ushort *)(param_1 + 0x5164);
      }
      cVar3 = cVar3 + cVar2;
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 0x28;
    } while ((int)uVar8 < (int)(uVar1 + 0x14));
  }
  uVar8 = (uint)*(ushort *)(param_1 + 0x5166);
  if (uVar8 < uVar8 + 0x14) {
    iVar7 = uVar8 << 2;
    iVar6 = param_1 + uVar8 * 0x28 + 0x78;
    do {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7);
      if (param_2 == '\0') {
        cVar2 = FUN_089a91a0(0x3fc00000,0x3f800000,0x41000000,0,uVar4,iVar6,3);
        uVar1 = *(ushort *)(param_1 + 0x5166);
      }
      else {
        cVar2 = FUN_089a91a0(0x3f800000,0x3fc00000,0x41000000,param_2,uVar4,iVar6,3);
        uVar1 = *(ushort *)(param_1 + 0x5166);
      }
      cVar3 = cVar3 + cVar2;
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 0x28;
    } while ((int)uVar8 < (int)(uVar1 + 0x14));
  }
  uVar8 = (uint)*(ushort *)(param_1 + 0x51f6);
  if (uVar8 < uVar8 + *(ushort *)(param_1 + 0x51f8)) {
    iVar6 = uVar8 << 2;
    iVar7 = param_1 + uVar8 * 0x28 + 0x78;
    do {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6);
      if (param_2 == '\0') {
        cVar2 = FUN_089a91a0(0x3fc00000,0x3f800000,0x41000000,0,uVar4,iVar7,3);
        iVar5 = (uint)*(ushort *)(param_1 + 0x51f6) + (uint)*(ushort *)(param_1 + 0x51f8);
      }
      else {
        cVar2 = FUN_089a91a0(0x3f800000,0x3fc00000,0x41000000,param_2,uVar4,iVar7,3);
        iVar5 = (uint)*(ushort *)(param_1 + 0x51f6) + (uint)*(ushort *)(param_1 + 0x51f8);
      }
      cVar3 = cVar3 + cVar2;
      uVar8 = uVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar7 = iVar7 + 0x28;
    } while ((int)uVar8 < iVar5);
  }
  return cVar3 != '\0';
}

