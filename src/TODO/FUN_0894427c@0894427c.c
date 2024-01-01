#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894427c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined auStack_90 [128];
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      if (*(int *)(param_1 + 0x2c) == DAT_08ac1bd4) {
        iVar1 = *(int *)(param_1 + 0x14);
      }
      else {
        *(int *)(param_1 + 0x2c) = DAT_08ac1bd4;
        if (*(int *)(param_1 + 0x20) != 0) {
          FUN_089eb2e0(auStack_90,
                       *(undefined4 *)
                        (PTR_PTR_DAT_08aae714 +
                        *(int *)(&DAT_08a9d020 + *(int *)(param_1 + 0x2c) * 4) * 4));
          FUN_089eb14c(*(undefined4 *)(param_1 + 0x20),0xf0,0x88,auStack_90,1,0);
          iVar1 = FUN_089eb248(*(undefined4 *)(param_1 + 0x20));
          iVar4 = *(int *)(iVar1 + 0x84);
          iVar1 = FUN_089eb248(*(undefined4 *)(param_1 + 0x20));
          iVar2 = *(int *)(iVar1 + 0x88);
          *(int *)(param_1 + 0x24) = iVar4;
          iVar1 = 0;
          *(int *)(param_1 + 0x28) = iVar2;
          if (0 < iVar2) {
            do {
              uVar3 = *(uint *)(iVar4 + 0xd0);
              iVar1 = iVar1 + 1;
              *(uint *)(iVar4 + 0xd0) = uVar3 | 0x20;
              *(uint *)(iVar4 + 0xd0) = uVar3 & 0xfffffffe | 0x20;
              iVar4 = iVar4 + 0x160;
            } while (iVar1 < iVar2);
          }
        }
        iVar1 = *(int *)(param_1 + 0x14);
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(int *)(param_1 + 0x14) = iVar1 + 1;
      goto LAB_089443dc;
    }
  }
  else if (iVar1 < 2) {
    if (*(float *)(param_1 + 0x1c) < 1.0) {
      *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) + 0.0333;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
      *(int *)(param_1 + 0x14) = iVar1 + 1;
    }
    goto LAB_089443dc;
  }
  *(undefined4 *)(param_1 + 0x10) = 3;
  *(undefined4 *)(param_1 + 0x14) = 0;
LAB_089443dc:
  FUN_08944094(param_1);
  return;
}

