#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b4b14(undefined *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  
  if (param_1 == PTR_DAT_08ac46dc) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      piVar7 = *(int **)(iVar1 + iVar4);
      if (piVar7 != (int *)0x0) {
        do {
          piVar8 = (int *)*piVar7;
          _free_r(param_1,piVar7);
          piVar7 = piVar8;
        } while (piVar8 != (int *)0x0);
        iVar1 = *(int *)(param_1 + 0x4c);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar2 < 0xf);
    _free_r(param_1,iVar1);
  }
  puVar5 = *(undefined4 **)(param_1 + 0x148);
  puVar3 = (undefined4 *)(param_1 + 0x14c);
  if (puVar5 != (undefined4 *)0x0) {
    if (puVar5 == puVar3) {
      iVar1 = *(int *)(param_1 + 0x54);
      goto LAB_089b4bcc;
    }
    if (puVar5 == puVar3) {
      iVar1 = *(int *)(param_1 + 0x54);
      goto LAB_089b4bcc;
    }
    do {
      puVar6 = (undefined4 *)*puVar5;
      _free_r(param_1,puVar5);
      puVar5 = puVar6;
    } while (puVar6 != puVar3);
  }
  iVar1 = *(int *)(param_1 + 0x54);
LAB_089b4bcc:
  if (iVar1 != 0) {
    _free_r(param_1,iVar1);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    (**(code **)(param_1 + 0x3c))(param_1);
    if (*(int *)(param_1 + 0x1d8) != 0) {
      FUN_089b4ac8(param_1,*(int *)(param_1 + 0x1d8));
    }
  }
  return;
}

