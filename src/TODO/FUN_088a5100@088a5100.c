#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a5100(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x344);
  if (iVar1 < 1) {
    if (iVar1 < 0) goto LAB_088a5244;
    iVar1 = FUN_08860188(*(undefined4 *)(param_1 + 0x324));
    if (iVar1 == 0) {
      return;
    }
    iVar2 = 0;
    iVar1 = FUN_089c9b48(5,DAT_08ac58c8);
    if (iVar1 == 0) {
      uVar3 = vrndi_s();
      iVar2 = ((uVar3 >> 0x10) * 0x1e >> 0x10) + *(int *)(param_1 + 0x340) * 0x3c + 200;
      iVar1 = *(int *)(param_1 + 0x344);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x344);
    }
    *(int *)(param_1 + 0x35c) = iVar2;
    *(int *)(param_1 + 0x344) = iVar1 + 1;
LAB_088a51c0:
    iVar1 = FUN_089c9b48(5,DAT_08ac58c8);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x35c);
    }
    else if (*(char *)(param_1 + 0x385) == '\0') {
      iVar1 = *(int *)(param_1 + 0x35c);
    }
    else {
      iVar1 = FUN_0889ac28();
      if (iVar1 != 0) {
        return;
      }
      iVar1 = *(int *)(param_1 + 0x35c);
    }
    *(int *)(param_1 + 0x35c) = iVar1 + -1;
    if (0 < iVar1 + -1) {
      return;
    }
    *(int *)(param_1 + 0x344) = *(int *)(param_1 + 0x344) + 1;
  }
  else {
    if (iVar1 < 2) goto LAB_088a51c0;
    if (2 < iVar1) goto LAB_088a5244;
  }
  iVar1 = FUN_088a4f0c(param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x344) = 1;
    *(undefined4 *)(param_1 + 0x35c) = 0x3c;
    return;
  }
  *(int *)(param_1 + 0x344) = *(int *)(param_1 + 0x344) + 1;
LAB_088a5244:
  FUN_088a3cf8(param_1,0);
  *(undefined *)(param_1 + 0x281) = 1;
  return;
}

