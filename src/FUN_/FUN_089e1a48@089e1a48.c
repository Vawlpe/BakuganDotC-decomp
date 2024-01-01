#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e1a48(int param_1)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ushort *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort *puVar13;
  ushort *puVar14;
  
  puVar6 = (ushort *)FUN_089daad0(*(undefined4 *)(param_1 + 0xe0));
  uVar7 = FUN_08a198fc(puVar6,4);
  *(undefined4 *)(param_1 + 0xe8) = uVar7;
  uVar7 = FUN_08a198fc(puVar6,5);
  *(undefined4 *)(param_1 + 0xec) = uVar7;
  uVar7 = FUN_08a198fc(puVar6,8);
  *(undefined4 *)(param_1 + 0xf0) = uVar7;
  uVar7 = FUN_08a198fc(puVar6,0xb);
  *(undefined4 *)(param_1 + 0xf4) = uVar7;
  iVar9 = *(int *)(param_1 + 0xf0);
  if (iVar9 < 1) {
    iVar10 = *(int *)(param_1 + 0xe8);
  }
  else {
    FUN_089d8634();
    uVar7 = FUN_089d81a4();
    FUN_089d816c(1);
    uVar8 = FUN_089d7d74(iVar9 << 4,0,0);
    FUN_089d816c(uVar7);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x128) = uVar8;
    memset_jak(uVar8,0,*(int *)(param_1 + 0xf0) << 4);
    iVar9 = *(int *)(param_1 + 0xf0);
    iVar10 = *(int *)(param_1 + 0xe8);
  }
  iVar12 = *(int *)(param_1 + 0xec);
  iVar11 = *(int *)(param_1 + 0xf4);
  FUN_089d8634();
  uVar7 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar8 = FUN_089d7d74((iVar10 + iVar12 + iVar9 + iVar11) * 4,0,0);
  FUN_089d816c(uVar7);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0xf8) = uVar8;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  iVar9 = 0;
  puVar13 = (ushort *)((int)puVar6 + *(int *)(puVar6 + 2));
  puVar14 = puVar13;
  if ((*puVar6 & 0x8000) == 0) {
    puVar14 = (ushort *)((int)puVar6 + *(int *)(puVar6 + 4));
  }
  if (puVar14 < puVar13) {
    iVar10 = 0;
    uVar1 = *puVar14;
    while( true ) {
      puVar6 = puVar14 + 8;
      switch(uVar1 & 0x7fff) {
      case 4:
        *(ushort **)(*(int *)(param_1 + 0xf8) + iVar10) = puVar6;
        if (!bVar2) {
          *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xf8) + iVar10;
          bVar2 = true;
        }
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 4;
        break;
      case 5:
        *(ushort **)(*(int *)(param_1 + 0xf8) + iVar10) = puVar6;
        if (!bVar3) {
          *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0xf8) + iVar10;
          bVar3 = true;
        }
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 4;
        break;
      case 8:
        *(ushort **)(*(int *)(param_1 + 0xf8) + iVar10) = puVar6;
        if (!bVar4) {
          *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0xf8) + iVar10;
          bVar4 = true;
        }
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 4;
        break;
      case 0xb:
        *(ushort **)(*(int *)(param_1 + 0xf8) + iVar10) = puVar6;
        if (!bVar5) {
          *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0xf8) + iVar10;
          bVar5 = true;
        }
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 4;
      }
      puVar14 = (ushort *)((int)puVar14 + *(int *)(puVar14 + 2));
      if (puVar13 <= puVar14) break;
      uVar1 = *puVar14;
    }
  }
  if (!bVar5) {
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0xf8) + iVar9 * 4;
  }
  return;
}

