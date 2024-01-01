#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08835c64(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x14) + 0x278) + 0xbc) = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 0x14) + 0x278);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
  *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x14) + 0x278) + 0x60) = param_1;
  *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x14) + 0x278) + 100) = 0x43100000;
  iVar1 = *(int *)(*(int *)(param_2 + 0x14) + 0x278);
  *(undefined4 *)(iVar1 + 0x90) = in_V72;
  *(undefined4 *)(iVar1 + 0x94) = in_V76;
  *(undefined4 *)(iVar1 + 0x98) = in_V7A;
  *(undefined4 *)(iVar1 + 0x9c) = in_V7E;
  FUN_089f4bf4((float)*(int *)(&DAT_08a64a78 + param_3 * 0x18),
               *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x278));
  uVar3 = 0;
  iVar1 = 0;
  do {
    iVar4 = *(int *)(*(int *)(param_2 + 0x14) + iVar1 + 0x3dc);
    *(undefined4 *)(iVar4 + 0x60) =
         *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x14) + 0x278) + 0x60);
    *(undefined4 *)(iVar4 + 100) = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x14) + 0x278) + 100)
    ;
    *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
    *(undefined4 *)(iVar4 + 0xbc) = 0;
    *(undefined4 *)(iVar4 + 0x90) = in_V72;
    *(undefined4 *)(iVar4 + 0x94) = in_V76;
    *(undefined4 *)(iVar4 + 0x98) = in_V7A;
    *(undefined4 *)(iVar4 + 0x9c) = in_V7E;
    FUN_089f4bf4((float)*(int *)(&DAT_08a64a78 + param_3 * 0x18),iVar4);
    uVar2 = uVar3 & 1;
    if ((int)uVar3 < 2) {
      uVar2 = uVar3 & 1;
      pfVar5 = (float *)(iVar4 + 0x60);
      if ((int)uVar3 < 0) {
        uVar2 = -uVar2;
      }
      if (uVar2 == 0) {
        *pfVar5 = *pfVar5 - 1.0;
      }
      else {
        *pfVar5 = *pfVar5 + 1.0;
      }
    }
    else {
      pfVar5 = (float *)(iVar4 + 100);
      if ((int)uVar3 < 0) {
        uVar2 = -uVar2;
      }
      if (uVar2 == 0) {
        *pfVar5 = *pfVar5 - 1.0;
      }
      else {
        *pfVar5 = *pfVar5 + 1.0;
      }
    }
    uVar3 = uVar3 + 1;
    iVar1 = iVar1 + 4;
  } while ((int)uVar3 < 4);
  return;
}

