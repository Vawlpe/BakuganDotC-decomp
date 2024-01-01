#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08909760(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  float fVar9;
  
  iVar2 = *(int *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 4);
  iVar3 = *(int *)(param_2 + 8);
  piVar5 = (int *)(param_2 + 0xc);
  piVar6 = piVar5 + iVar2;
  if (iVar3 != 0) {
    uVar7 = 0;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(iVar3 * 8 + 0x10,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    if (iVar2 != 0) {
      uVar7 = FUN_08a02cb4(iVar2 + DAT_08af1178,iVar3,8,&LAB_08a2d1e0,0);
    }
    *(undefined4 *)(param_1 + 0x28) = uVar7;
    iVar2 = *(int *)(param_2 + 8);
    uVar8 = 0;
    *(int *)(param_1 + 0x30) = iVar2;
    if (iVar2 != 0) {
      iVar2 = 0;
      do {
        iVar3 = *piVar6;
        *(int *)(*(int *)(param_1 + 0x28) + iVar2) = iVar3;
        if (iVar3 == 0) {
          iVar4 = *piVar5;
          iVar3 = *(int *)(param_1 + 0x28);
        }
        else {
          fVar9 = (float)powf(0x41200000,(float)*piVar6);
          iVar3 = *(int *)(param_1 + 0x28);
          iVar4 = (int)((float)*piVar5 / fVar9);
        }
        *(int *)(iVar3 + iVar2 + 4) = iVar4;
        uVar8 = uVar8 + 1;
        piVar6 = piVar6 + 1;
        iVar2 = iVar2 + 8;
        piVar5 = piVar5 + 1;
      } while (uVar8 < *(uint *)(param_2 + 8));
    }
  }
  return *(int *)(param_2 + 8) * 8 + 8;
}

