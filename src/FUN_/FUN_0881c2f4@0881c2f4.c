#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881c2f4(int param_1)

{
  undefined uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined *puVar10;
  undefined uVar11;
  int iVar12;
  undefined *puVar13;
  uint uVar14;
  int iVar15;
  
  bVar3 = false;
  iVar4 = FUN_089d3ab4();
  if (iVar4 == 0) {
    bVar3 = true;
  }
  else {
    uVar6 = FUN_089d3adc();
    iVar4 = FUN_089d3fac(uVar6);
    if (iVar4 == 0) {
      uVar6 = FUN_089d3adc();
      FUN_089d3d84(uVar6);
      iVar4 = 1;
      if (1 < *(int *)(param_1 + 0x14)) {
        iVar15 = param_1 + 0x50;
        do {
          iVar5 = FUN_089cf9a4(iVar15);
          iVar12 = *(int *)(param_1 + 0x14);
          if (iVar5 == 0) {
            iVar5 = iVar12 + -1;
            if ((1 < iVar12) && (iVar4 < iVar5)) {
              iVar5 = param_1 + iVar4 * 0x1f;
              puVar7 = (undefined *)(iVar5 + 0x18);
              puVar8 = (undefined *)(iVar5 + 0x37);
              iVar12 = iVar4;
              do {
                iVar5 = 0;
                iVar9 = 0xf;
                uVar11 = *puVar8;
                puVar10 = puVar8;
                puVar13 = puVar7;
                do {
                  uVar1 = puVar10[1];
                  *puVar13 = uVar11;
                  iVar5 = iVar5 + 2;
                  puVar13[1] = uVar1;
                  puVar10 = puVar8 + iVar5;
                  iVar9 = iVar9 + -1;
                  uVar11 = *puVar10;
                  puVar13 = puVar7 + iVar5;
                } while (iVar9 != 0);
                *puVar13 = uVar11;
                iVar12 = iVar12 + 1;
                iVar5 = *(int *)(param_1 + 0x14) + -1;
                puVar7 = puVar7 + 0x1f;
                puVar8 = puVar8 + 0x1f;
              } while (iVar12 < iVar5);
            }
            *(int *)(param_1 + 0x14) = iVar5;
            bVar2 = iVar4 < iVar5;
          }
          else {
            iVar4 = iVar4 + 1;
            iVar15 = iVar15 + 0x1f;
            bVar2 = iVar4 < iVar12;
          }
        } while (bVar2);
      }
      iVar4 = FUN_089cf8ec(0);
      if (iVar4 != 0) {
        uVar6 = *(undefined4 *)(param_1 + 0x14);
        *(undefined *)(iVar4 + 0x2e) = 0;
        *(char *)(iVar4 + 0x2d) = (char)uVar6;
        *(undefined *)(iVar4 + 0x2f) = 0;
        *(undefined *)(iVar4 + 0x30) = 0;
        *(undefined *)(iVar4 + 0x31) = 0;
        *(undefined *)(iVar4 + 0x32) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = 0;
      uVar14 = 0;
      iVar4 = param_1 + 0x18;
      do {
        memset_jak(iVar4,0,0x1f);
        uVar14 = uVar14 + 1;
        iVar4 = iVar4 + 0x1f;
      } while (uVar14 < 4);
      uVar6 = FUN_089d3adc();
      iVar4 = FUN_089d41d4(uVar6);
      if (iVar4 != 3) {
        bVar3 = true;
      }
    }
  }
  if (bVar3) {
    *(undefined4 *)(param_1 + 4) = 8;
    *(undefined4 *)(param_1 + 8) = 0;
    iVar4 = FUN_0880d2e0();
    if (iVar4 != 0) {
      uVar6 = FUN_0880cc48();
      FUN_0880d0e8(uVar6,0x80);
    }
  }
  return;
}

