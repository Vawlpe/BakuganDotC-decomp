#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a2116c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *local_20;
  int *local_1c [3];
  
  piVar4 = &DAT_08afd89c + param_1;
  iVar1 = FUN_08a21434(*(undefined4 *)*piVar4,param_2,&local_20);
  uVar2 = 0x80450005;
  if (-1 < iVar1) {
    if (*local_20 == -1) {
      *param_3 = 1;
      *(undefined *)(param_3 + 3) = *(undefined *)(local_20 + 3);
    }
    else {
      iVar1 = FUN_08a213b4(*(undefined4 *)*piVar4,*local_20,local_1c);
      if (iVar1 < 0) {
        return 0x80450005;
      }
      *param_3 = 0;
      iVar5 = *local_1c[0];
      iVar3 = *(int *)(*piVar4 + 4);
      param_3[2] = local_1c[0][2];
      iVar1 = local_1c[0][1];
      param_3[1] = iVar3 + iVar5;
      param_3[4] = iVar1;
    }
    uVar2 = 0;
    param_3[6] = local_20[8];
    *(undefined *)(param_3 + 7) = *(undefined *)(local_20 + 9);
    param_3[8] = local_20[10];
    *(undefined *)(param_3 + 9) = *(undefined *)(local_20 + 0xb);
    param_3[10] = local_20[0x14];
    param_3[0xb] = local_20[0x15];
    *(undefined *)(param_3 + 0xc) = *(undefined *)(local_20 + 0xe);
    *(undefined *)((int)param_3 + 0x31) = *(undefined *)(local_20 + 0xc);
    *(undefined *)((int)param_3 + 0x32) = *(undefined *)(local_20 + 0xd);
    param_3[0xe] = local_20[2];
    param_3[0xf] = local_20[1];
    *(undefined *)((int)param_3 + 0x33) = *(undefined *)(local_20 + 0x10);
    *(undefined *)(param_3 + 0xd) = *(undefined *)(local_20 + 0x11);
  }
  return uVar2;
}

