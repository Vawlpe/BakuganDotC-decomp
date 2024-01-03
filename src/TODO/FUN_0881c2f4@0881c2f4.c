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
  int iVar8;
  undefined *puVar9;
  undefined uVar10;
  int iVar11;
  undefined *puVar12;
  uint uVar13;
  undefined *puVar14;
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
          iVar11 = *(int *)(param_1 + 0x14);
          if (iVar5 == 0) {
            iVar5 = iVar11 + -1;
            if ((1 < iVar11) && (iVar4 < iVar5)) {
              iVar5 = param_1 + iVar4 * 0x1f;
              puVar14 = (undefined *)(iVar5 + 0x18);
              puVar7 = (undefined *)(iVar5 + 0x37);
              iVar11 = iVar4;
              do {
                iVar5 = 0;
                iVar8 = 0xf;
                uVar10 = *puVar7;
                puVar9 = puVar7;
                puVar12 = puVar14;
                do {
                  uVar1 = puVar9[1];
                  *puVar12 = uVar10;
                  iVar5 = iVar5 + 2;
                  puVar12[1] = uVar1;
                  puVar9 = puVar7 + iVar5;
                  iVar8 = iVar8 + -1;
                  uVar10 = *puVar9;
                  puVar12 = puVar14 + iVar5;
                } while (iVar8 != 0);
                *puVar12 = uVar10;
                iVar11 = iVar11 + 1;
                iVar5 = *(int *)(param_1 + 0x14) + -1;
                puVar14 = puVar14 + 0x1f;
                puVar7 = puVar7 + 0x1f;
              } while (iVar11 < iVar5);
            }
            *(int *)(param_1 + 0x14) = iVar5;
            bVar2 = iVar4 < iVar5;
          }
          else {
            iVar4 = iVar4 + 1;
            iVar15 = iVar15 + 0x1f;
            bVar2 = iVar4 < iVar11;
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
      uVar13 = 0;
      puVar14 = (undefined *)(param_1 + 0x18);
      do {
        memset_jak(puVar14,0,0x1f);
        uVar13 = uVar13 + 1;
        puVar14 = puVar14 + 0x1f;
      } while (uVar13 < 4);
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
    iVar4 = DONE_NotZero_DAT_08AAC9E0();
    if (iVar4 != 0) {
      uVar6 = DONE_Get_DAT_08AAC9E0();
      FUN_0880d0e8(uVar6,0x80);
    }
  }
  return;
}

