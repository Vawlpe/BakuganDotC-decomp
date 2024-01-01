#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881c750(int param_1)

{
  undefined uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined uVar8;
  undefined *puVar9;
  uint uVar10;
  undefined *puVar11;
  int iVar12;
  undefined auStack_60 [2];
  undefined auStack_5e [6];
  undefined local_58;
  undefined local_57 [35];
  undefined auStack_34 [6];
  ushort local_2e;
  
  bVar2 = false;
  iVar3 = FUN_089d3ab4();
  if (iVar3 == 0) {
    bVar2 = true;
  }
  else {
    uVar5 = FUN_089d3adc();
    iVar3 = FUN_089d3fac(uVar5);
    uVar10 = 0;
    if (iVar3 == 0) {
      iVar12 = 1;
      iVar3 = param_1 + 0x31;
      puVar11 = (undefined *)(param_1 + 0x18);
      do {
        iVar4 = FUN_089cf7d0(auStack_60,iVar12);
        if (iVar4 == 0) break;
        if ((local_2e & 0x1000) != 0) {
          memcpy_jak(iVar3,auStack_34,6);
          iVar6 = 0xc;
          iVar4 = 0;
          puVar7 = auStack_60;
          puVar9 = puVar11;
          uVar8 = local_58;
          do {
            uVar1 = puVar7[9];
            *puVar9 = uVar8;
            puVar9[1] = uVar1;
            puVar7 = auStack_5e + iVar4;
            iVar6 = iVar6 + -1;
            uVar8 = local_57[iVar4 + 1];
            puVar9 = puVar11 + iVar4 + 2;
            iVar4 = iVar4 + 2;
          } while (iVar6 != 0);
          uVar10 = uVar10 + 1;
          *puVar9 = uVar8;
          iVar3 = iVar3 + 0x1f;
          puVar11 = puVar11 + 0x1f;
          if (3 < (int)uVar10) break;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < 0x10);
      *(uint *)(param_1 + 0x14) = uVar10;
      if (uVar10 < 4) {
        iVar3 = param_1 + uVar10 * 0x1f + 0x18;
        do {
          memset_jak(iVar3,0,0x1f);
          uVar10 = uVar10 + 1;
          iVar3 = iVar3 + 0x1f;
        } while (uVar10 < 4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = 0;
      uVar10 = 0;
      iVar3 = param_1 + 0x18;
      do {
        memset_jak(iVar3,0,0x1f);
        uVar10 = uVar10 + 1;
        iVar3 = iVar3 + 0x1f;
      } while (uVar10 < 4);
      uVar5 = FUN_089d3adc();
      iVar3 = FUN_089d41d4(uVar5);
      if (iVar3 != 3) {
        bVar2 = true;
      }
    }
  }
  if (bVar2) {
    *(undefined4 *)(param_1 + 4) = 8;
    *(undefined4 *)(param_1 + 8) = 0;
    iVar3 = FUN_0880d2e0();
    if (iVar3 != 0) {
      uVar5 = FUN_0880cc48();
      FUN_0880d0e8(uVar5,0x80);
    }
  }
  return;
}

