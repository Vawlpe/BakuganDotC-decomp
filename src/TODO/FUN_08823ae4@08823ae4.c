#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08823ae4(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
  FUN_089f4f54(param_1,1);
  *(undefined **)(param_1 + 0x74) = &DAT_08af16e4;
  *(int **)(param_1 + 0x80) = param_2;
  puVar3 = (uint *)((int)param_2 + *param_2);
  *(uint **)(param_1 + 0x88) = puVar3;
  uVar4 = *puVar3 - *param_2;
  if (*puVar3 < 0x1000001) {
    *(uint *)(param_1 + 0x84) = uVar4 >> 5;
    iVar5 = 0;
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x84)) {
      do {
        iVar5 = iVar5 + 1;
        *(int *)((int)puVar3 + iVar1) = *(int *)((int)puVar3 + iVar1) + (int)param_2;
        param_2 = *(int **)(param_1 + 0x80);
        iVar1 = iVar1 + 0x20;
        puVar3 = *(uint **)(param_1 + 0x88);
      } while (iVar5 < *(int *)(param_1 + 0x84));
    }
    puVar6 = (uint *)(param_2 + 1);
  }
  else {
    *(uint *)(param_1 + 0x84) = uVar4 - (int)param_2 >> 5;
    puVar6 = (uint *)(param_2 + 1);
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  if (puVar6 < puVar3) {
    cVar2 = *(char *)puVar6;
    while (cVar2 != '\0') {
      iVar1 = strlen(puVar6);
      puVar6 = (uint *)((int)puVar6 + iVar1 + 1);
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
      if (*(uint **)(param_1 + 0x88) <= puVar6) goto LAB_08823bf0;
      cVar2 = *(char *)puVar6;
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  else {
LAB_08823bf0:
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  FUN_088239f4(param_1);
  *(undefined *)(param_1 + 4) = 1;
  iVar1 = FUN_0881b22c();
  if ((iVar1 != 0) && (iVar1 = FUN_0880d354(), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x18) = 200;
  }
  DAT_08ab9e30 = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(undefined *)(param_1 + 0x97) = 0;
  *(undefined *)(param_1 + 0x96) = 0;
  *(undefined *)(param_1 + 0x95) = 0;
  DAT_08ab9e10 = 0;
  *(undefined *)(DAT_08ab9e38 + 0xbc) = 1;
  *(undefined *)(DAT_08ab9e3c + 0xbc) = 1;
  *(undefined *)(DAT_08ab9e40 + 0xbc) = 1;
  *(undefined *)(DAT_08ab9e44 + 0xbc) = 1;
  *(undefined *)(DAT_08ab9e48 + 0xbc) = 1;
  return param_1;
}

