#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a028c0(void)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  
  ppuVar12 = &PTR_FUN_08af5bc8;
  iVar3 = 0;
  bVar1 = false;
  ppuVar4 = ppuVar12;
  if (PTR_FUN_08af5bc8 != (undefined *)0x0) {
    do {
      if (ppuVar4[1] == (undefined *)0x0) {
        ppuVar4[1] = (undefined *)0x10000;
      }
      else {
        bVar1 = true;
      }
      ppuVar4 = ppuVar4 + 2;
      iVar3 = iVar3 + 1;
    } while (*ppuVar4 != (undefined *)0x0);
  }
  pcVar2 = (code *)PTR_FUN_08af5bc8;
  if (bVar1) {
    while (iVar3 = iVar3 + -1, pcVar2 = (code *)PTR_FUN_08af5bc8, -1 < iVar3) {
      iVar8 = 0;
      if (0 < iVar3) {
        ppuVar6 = &PTR_FUN_08af5bc8;
        ppuVar7 = ppuVar12;
        ppuVar4 = ppuVar12;
        do {
          ppuVar5 = ppuVar4 + 2;
          if ((int)ppuVar7[3] < (int)ppuVar7[1]) {
            puVar9 = *ppuVar6;
            puVar10 = ppuVar6[1];
            puVar11 = ppuVar4[3];
            *ppuVar6 = *ppuVar5;
            ppuVar6[1] = puVar11;
            *ppuVar5 = puVar9;
            ppuVar4[3] = puVar10;
          }
          iVar8 = iVar8 + 1;
          ppuVar7 = ppuVar7 + 2;
          ppuVar6 = ppuVar6 + 2;
          ppuVar4 = ppuVar5;
        } while (iVar8 < iVar3);
      }
    }
  }
  while (pcVar2 != (code *)0x0) {
    (*pcVar2)();
    ppuVar12 = (code **)ppuVar12 + 2;
    pcVar2 = (code *)*ppuVar12;
  }
  return;
}

