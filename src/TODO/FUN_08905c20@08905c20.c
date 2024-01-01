#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08905c20(int param_1,undefined4 param_2,undefined (*param_3) [12],int param_4)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined local_30 [12];
  char local_20 [8];
  
  local_20[0] = '\0';
  iVar3 = FUN_089059cc(param_1,param_2,local_20);
  if (iVar3 != -1) {
    if (iVar3 < 0x38) {
      if (0x36 < iVar3) {
        iVar3 = *(int *)(param_1 + 0x14);
LAB_08905cb4:
        *(undefined *)(iVar3 + 0x758) = 1;
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x684) = 0x3f4ccccd;
        return;
      }
    }
    else if (iVar3 == 0xe0) {
      iVar3 = *(int *)(param_1 + 0x14);
      goto LAB_08905cb4;
    }
    FUN_088ff3f4(local_30);
    uVar2 = *(undefined4 *)param_3[1];
    auVar1 = vadd_t(*param_3,local_30);
    *(int *)*param_3 = auVar1._0_4_;
    *(int *)(*param_3 + 4) = auVar1._4_4_;
    *(int *)(*param_3 + 8) = auVar1._8_4_;
    *(undefined4 *)param_3[1] = uVar2;
    if (param_4 == 0) {
      if (*(char *)(param_1 + 0x55) == '\0') {
        iVar4 = FUN_08823f5c(DAT_08ac5c70,iVar3,param_3);
      }
      else {
        iVar4 = FUN_08823f5c(DAT_08abd5b0,iVar3,param_3);
      }
    }
    else if (*(char *)(param_1 + 0x55) == '\0') {
      iVar4 = FUN_088241ec(DAT_08ac5c70,iVar3,param_4);
    }
    else {
      iVar4 = FUN_088241ec(DAT_08abd5b0,iVar3,param_4);
    }
    if ((((local_20[0] != '\0') && (*(int *)(param_1 + 0x18) != 0)) && (iVar4 != 0)) &&
       ((*(int *)(iVar4 + 0x160) = *(int *)(param_1 + 0x18) + 0x250, 0x6f < iVar3 && (iVar3 < 0x76))
       )) {
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x3cc) = 0xdead;
      iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 0x14);
      (**(code **)(iVar3 + 0x14c))(*(int *)(param_1 + 0x18) + (int)*(short *)(iVar3 + 0x148));
      *(int *)(iVar4 + 0x160) = *(int *)(param_1 + 0x18) + 0x3f0;
    }
  }
  return;
}

