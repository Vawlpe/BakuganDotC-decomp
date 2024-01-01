#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d0a74(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  bVar1 = true;
  FUN_089bb728(*(undefined4 *)(param_1 + 8));
  if (((*(char *)(param_1 + 0x120) != '\0') &&
      (bVar1 = false, *(uint *)(param_1 + 0x124) <= *(int *)(param_1 + 0x13c) + 3U)) &&
     (*(uint *)(param_1 + 0x140) < 4)) {
    bVar1 = true;
  }
  if (bVar1) {
    *(undefined *)(param_1 + 0x120) = 1;
    if ((*(uint *)(param_1 + 0x140) < 5) &&
       (iVar2 = *(uint *)(param_1 + 0x140) * 0x28,
       piVar6 = (int *)(*(int *)(param_1 + 0xf0) + iVar2), iVar2 + 0x28U < 0x7cc)) {
      *(undefined *)(param_1 + 0x120) = 0;
      iVar3 = param_2[1];
      iVar4 = param_2[2];
      *piVar6 = *param_2;
      iVar2 = param_2[3];
      piVar6[1] = iVar3;
      iVar3 = param_2[4];
      piVar6[2] = iVar4;
      iVar4 = param_2[5];
      piVar6[3] = iVar2;
      iVar2 = param_2[6];
      piVar6[4] = iVar3;
      iVar3 = param_2[7];
      piVar6[5] = iVar4;
      iVar4 = param_2[8];
      piVar6[6] = iVar2;
      iVar2 = param_2[9];
      piVar6[7] = iVar3;
      piVar6[8] = iVar4;
      piVar6[9] = iVar2;
      iVar2 = FUN_089d0178();
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x124);
      }
      else {
        piVar6[1] = piVar6[1] | 0x10000000;
        iVar2 = *(int *)(param_1 + 0x124);
      }
      uVar5 = 1;
      *piVar6 = iVar2 + 1;
      *(int *)(param_1 + 0x124) = iVar2 + 1;
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
    }
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 8));
  return uVar5;
}

