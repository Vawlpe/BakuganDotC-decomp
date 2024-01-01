#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b7e58(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  iVar2 = FUN_089d9680();
  if (iVar2 != 0) {
    FUN_089e0860(param_1);
    iVar6 = *(int *)(param_1 + 8) + -0x58;
    piVar5 = (int *)(&PTR_DAT_08abd748)[iVar6];
    uVar3 = FUN_089d9674();
    iVar2 = FUN_089d9c84(uVar3,piVar5[1]);
    if (iVar2 == -1) {
      uVar3 = FUN_089d9674();
      uVar3 = FUN_089d9914(uVar3,(&PTR_s_00sp_dor_mot_gmo_08abd698)[iVar6]);
      *(undefined4 *)(param_1 + 0x1d4) = uVar3;
    }
    FUN_089d8634();
    uVar3 = FUN_089d81a4();
    FUN_089d816c(1);
    uVar4 = FUN_089d7d74(10,0,0);
    FUN_089d816c(uVar3);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x144) = uVar4;
    iVar6 = 0;
    iVar2 = 0;
    do {
      iVar6 = iVar6 + 1;
      *(undefined2 *)(*(int *)(param_1 + 0x144) + iVar2) = 0xffff;
      iVar2 = iVar2 + 2;
    } while (iVar6 < 5);
    iVar2 = 0;
    do {
      if (4 < *piVar5) {
        return;
      }
      uVar3 = FUN_089d9674();
      uVar1 = FUN_089d9c84(uVar3,piVar5[1]);
      iVar2 = iVar2 + 1;
      *(undefined2 *)(*(int *)(param_1 + 0x144) + *piVar5 * 2) = uVar1;
      piVar5 = piVar5 + 2;
    } while (iVar2 < 5);
  }
  return;
}

