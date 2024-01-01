#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d0bcc(int param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  FUN_089bb728(*(undefined4 *)(param_1 + 8));
  if (*(int *)(param_1 + 0x14c) == 0) goto LAB_089d0d10;
  iVar2 = FUN_089d3ab4();
  if (iVar2 != 0) {
    if (param_2 == -1) {
      param_2 = 1;
    }
    else if (param_2 == -2) {
      param_2 = 0;
    }
    else {
      iVar2 = FUN_089d3adc();
      if (*(int *)(iVar2 + 0x28) != 2) {
        param_2 = 1 - param_2;
      }
    }
  }
  if (param_3 == (undefined4 *)0x0) {
LAB_089d0cf0:
    cVar1 = *(char *)(param_1 + 5);
  }
  else {
    zz_sceKernelDcacheWritebackInvalidateRange(DAT_08ac5940 + param_2 * 0x28,0x28);
    puVar3 = (undefined4 *)(DAT_08ac5940 + param_2 * 0x28);
    uVar4 = puVar3[1];
    uVar5 = puVar3[2];
    *param_3 = *puVar3;
    uVar6 = puVar3[3];
    param_3[1] = uVar4;
    uVar4 = puVar3[4];
    param_3[2] = uVar5;
    uVar5 = puVar3[5];
    param_3[3] = uVar6;
    uVar6 = puVar3[6];
    param_3[4] = uVar4;
    uVar4 = puVar3[7];
    param_3[5] = uVar5;
    uVar5 = puVar3[8];
    param_3[6] = uVar6;
    uVar6 = puVar3[9];
    param_3[7] = uVar4;
    param_3[8] = uVar5;
    param_3[9] = uVar6;
    zz_sceKernelDcacheWritebackInvalidateRange(param_3,0x28);
    if (*(int *)(param_1 + 0x154) < 0) {
      *(undefined4 *)(param_1 + 0x154) = *param_3;
      goto LAB_089d0cf0;
    }
    cVar1 = *(char *)(param_1 + 5);
  }
  uVar6 = 1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 5) = 1;
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  }
LAB_089d0d10:
  FUN_089bb790(*(undefined4 *)(param_1 + 8));
  return uVar6;
}

