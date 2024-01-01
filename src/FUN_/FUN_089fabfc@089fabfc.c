#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089fabfc(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (*(char *)((int)param_1 + 10) == '\0') {
    iVar1 = zz_sceIoReadAsync(param_1[5],*(undefined4 *)(param_1[0x10] + 0x24),0x30000);
    param_1[8] = iVar1;
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined *)((int)param_1 + 9) = 1;
    return 0;
  }
  iVar1 = param_1[8];
  if (iVar1 < 0) {
    *(undefined *)((int)param_1 + 10) = 0;
    if (iVar1 != -0x7ffefffb) {
      return 0;
    }
    *(undefined *)((int)param_1 + 0x4a) = 0;
    *(undefined *)((int)param_1 + 0xe2) = 0;
    *(undefined *)(param_1 + 0x3b) = 1;
    *param_1 = 6;
    return 0;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1[0x10] + 0x2c) = 0;
    param_1[0x10] = 0;
    *param_1 = 6;
    *(undefined *)((int)param_1 + 10) = 0;
  }
  else {
    if (0x30000 < iVar1) {
      iVar1 = *param_1;
      goto LAB_089fad5c;
    }
    iVar2 = param_1[0x10];
    if (iVar2 == 0) {
      iVar1 = *param_1;
    }
    else if (*(int *)(iVar2 + 0x2c) == 1) {
      zz_sceKernelDcacheWritebackInvalidateRange(*(undefined4 *)(iVar2 + 0x24),iVar1);
      iVar1 = param_1[8];
      *(int *)(param_1[0x10] + 0x28) = iVar1;
      param_1[0xb] = param_1[0xb] + iVar1;
      *(undefined4 *)(param_1[0x10] + 0x2c) = 2;
      if (*(uint *)(param_1[0x10] + 0x28) < 0x30000) {
        *param_1 = 6;
        *(undefined *)((int)param_1 + 10) = 0;
        param_1[0x10] = 0;
      }
      else {
        param_1[0x10] = 0;
      }
      iVar1 = *param_1;
    }
    else {
      iVar1 = *param_1;
    }
    if (iVar1 == 6) {
      iVar1 = *param_1;
      goto LAB_089fad5c;
    }
    if (param_1[0x10] != 0) {
      iVar1 = *param_1;
      goto LAB_089fad5c;
    }
    iVar1 = param_1[param_1[0xc] + 0xe];
    if (*(int *)(iVar1 + 0x2c) != 0) {
      iVar1 = *param_1;
      goto LAB_089fad5c;
    }
    param_1[0x10] = iVar1;
    *(undefined4 *)(iVar1 + 0x2c) = 1;
    iVar1 = param_1[0xc];
    param_1[0xc] = iVar1 + 1;
    if (1 < iVar1 + 1) {
      param_1[0xc] = 0;
    }
    uVar3 = 1;
    *(undefined *)((int)param_1 + 10) = 0;
  }
  iVar1 = *param_1;
LAB_089fad5c:
  if (iVar1 == 6) {
    *(undefined *)((int)param_1 + 0xe2) = 1;
  }
  return uVar3;
}

