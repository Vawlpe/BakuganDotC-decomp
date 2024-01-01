#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_089d81d0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined uVar9;
  float fVar10;
  int local_50 [4];
  undefined local_40;
  
  piVar1 = local_50;
  piVar7 = local_50;
  uVar9 = 0;
  if (DAT_08ac5ba0 != 0) {
    FUN_089d8634();
    iVar8 = 0;
    iVar3 = *(int *)(DAT_08ac5ba0 + 0x34);
    while ((iVar3 != 0 && (iVar8 < 4))) {
      if (*(uint *)(iVar3 + 0xc) < 0x100000) {
        iVar3 = *(int *)(iVar3 + 4);
      }
      else {
        *piVar1 = iVar3;
        iVar3 = *(int *)(iVar3 + 4);
        iVar8 = iVar8 + 1;
        piVar1 = piVar1 + 1;
      }
    }
    if (1 < iVar8) {
      local_40 = 1;
      FUN_089b4c24(&DAT_08aa2ed4);
      iVar3 = 0;
      if (0 < iVar8) {
        do {
          iVar4 = *piVar7;
          iVar6 = *(int *)(iVar4 + 0xc);
          uVar5 = *(undefined4 *)(iVar4 + 8);
          fVar10 = (float)iVar6;
          if (iVar6 < 0) {
            fVar10 = fVar10 + 4.294967e+09;
          }
          __extendsfdf2(fVar10 * 9.53674e-07);
          FUN_089b4c24("free 0x%08x [ 0x%08x ] %.2f Mb\n",uVar5,iVar6);
          iVar6 = *(int *)(DAT_08ac5ba0 + 0x24);
          if (iVar6 != 0) {
            uVar2 = *(uint *)(iVar6 + 8);
            while (uVar2 <= *(uint *)(iVar4 + 8)) {
              iVar6 = *(int *)(iVar6 + 4);
              if (iVar6 == 0) goto LAB_089d833c;
              uVar2 = *(uint *)(iVar6 + 8);
            }
            FUN_089b4c24(&DAT_08aa2f10,*(uint *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc));
          }
LAB_089d833c:
          iVar3 = iVar3 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar3 < iVar8);
      }
      uVar9 = local_40;
      iVar3 = *(int *)(DAT_08ac5ba0 + 8);
      iVar8 = *(int *)(DAT_08ac5ba0 + 0xc);
      fVar10 = (float)*(int *)(DAT_08ac5ba0 + 4);
      if (*(int *)(DAT_08ac5ba0 + 4) < 0) {
        fVar10 = fVar10 + 4.294967e+09;
      }
      __extendsfdf2(fVar10 * 9.53674e-07);
      fVar10 = (float)iVar3;
      if (iVar3 < 0) {
        fVar10 = fVar10 + 4.294967e+09;
      }
      __extendsfdf2(fVar10 * 9.53674e-07);
      fVar10 = (float)iVar8;
      if (iVar8 < 0) {
        fVar10 = fVar10 + 4.294967e+09;
      }
      __extendsfdf2(fVar10 * 9.53674e-07);
      FUN_089b4c24("T=%.1f Mb / A=%.1f Mb / F=%.1f Mb\n");
    }
    FUN_089d866c();
  }
  return uVar9;
}

