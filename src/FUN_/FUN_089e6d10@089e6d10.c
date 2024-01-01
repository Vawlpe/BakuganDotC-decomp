#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x089e6d60)

void FUN_089e6d10(int *param_1,undefined (*param_2) [12])

{
  byte bVar1;
  undefined auVar2 [12];
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined (*pauVar7) [12];
  undefined4 *puVar8;
  undefined (*pauVar9) [12];
  undefined4 uVar10;
  undefined4 in_V0C;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  iVar5 = 0;
  iVar6 = 0;
  do {
    pauVar7 = (undefined (*) [12])(param_1[2] + iVar5);
    pauVar9 = (undefined (*) [12])(*param_1 + iVar5);
    uVar10 = *(undefined4 *)(*pauVar9 + 4);
    uVar3 = *(undefined4 *)(*pauVar9 + 8);
    uVar4 = *(undefined4 *)pauVar9[1];
    auVar2 = vsub_t(*pauVar9,*pauVar7);
    auVar2 = vsub_t(auVar2,*param_2);
    *(undefined4 *)*pauVar7 = *(undefined4 *)*pauVar9;
    *(undefined4 *)(*pauVar7 + 4) = uVar10;
    *(undefined4 *)(*pauVar7 + 8) = uVar3;
    *(undefined4 *)pauVar7[1] = uVar4;
    bVar1 = *(byte *)((int)param_1 + iVar6 + 0x7c);
    if (bVar1 == 0) {
      uVar10 = vfim_s(0x3beb);
      auVar2 = vscl_t(auVar2,uVar10);
      puVar8 = (undefined4 *)(param_1[1] + iVar5);
      *puVar8 = auVar2._0_4_;
      puVar8[1] = auVar2._4_4_;
      puVar8[2] = auVar2._8_4_;
      puVar8[3] = in_V0C;
    }
    else if (bVar1 < 2) {
      puVar8 = (undefined4 *)(param_1[1] + iVar5);
      *puVar8 = in_V72;
      puVar8[1] = in_V76;
      puVar8[2] = in_V7A;
      puVar8[3] = in_V7E;
    }
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 0x10;
    param_2 = (undefined (*) [12])(param_2[1] + 4);
  } while (iVar6 < 8);
  return;
}

