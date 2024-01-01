#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cee98(int param_1)

{
  bool bVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  code *pcVar5;
  
  if (DAT_08abec9d == '\0') {
    iVar2 = FUN_089bfa40(500);
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      iVar2 = FUN_089bf9c0();
      bVar1 = false;
      if (iVar2 != 0) {
        bVar1 = true;
      }
    }
    if (!bVar1) {
      *(undefined4 *)(param_1 + 0x28) = 5;
    }
    if (4 < *(uint *)(param_1 + 0x28)) {
      FUN_089bf7a8(param_1,1);
    }
    iVar2 = FUN_088cedd8(param_1);
    if ((iVar2 == 0) && (iVar2 = FUN_089bf93c(0x19a,1), iVar2 == 0)) {
      uVar4 = *(uint *)(param_1 + 0x28);
      if ((-1 < (int)uVar4) && (iVar2 = uVar4 * 8, uVar4 < 5)) {
        param_1 = param_1 + *(short *)(&UNK_08a94eec + iVar2);
        pcVar5 = *(code **)(&UNK_08a94ef0 + iVar2);
        if (*(short *)(&UNK_08a94eee + iVar2) != 0) {
          psVar3 = (short *)(*(int *)(pcVar5 + param_1) + *(short *)(&UNK_08a94eee + iVar2) * 8);
          pcVar5 = *(code **)(psVar3 + 2);
          param_1 = param_1 + *psVar3;
        }
        (*pcVar5)(param_1);
      }
    }
  }
  else if (1 < *(int *)(param_1 + 0x28)) {
    FUN_088cebf8(param_1);
    DAT_08abec9d = 0;
    DAT_08abec9c = 1;
    *(undefined4 *)(param_1 + 0x28) = 2;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    return;
  }
  return;
}

