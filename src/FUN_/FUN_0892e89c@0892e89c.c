#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892e89c(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined local_20 [4];
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 1;
  local_20[3] = 0;
  local_1c = 1;
  local_1b = 1;
  local_1a = 0;
  local_19 = 1;
  if (*(char *)(param_1 + 0x1cbc) != '\0') {
    iVar5 = 0x72;
    uVar4 = 0;
    iVar3 = 0x1c8;
    do {
      if ((*(uint *)(param_1 + 0x1cf0) &
          1 << (*(byte *)(param_1 + ((int)uVar4 / 2 & 0xffU) * 0xc + 0x1ba4) & 0x1f)) != 0) {
        iVar2 = (uint)*(byte *)(param_1 + 0x1cbd) * 2;
        if ((int)uVar4 < 0) {
          uVar1 = local_20[iVar2 - (uVar4 & 1)];
        }
        else {
          uVar1 = local_20[iVar2 + (uVar4 & 1)];
        }
        FUN_0892e838(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),uVar1);
      }
      iVar5 = iVar5 + 1;
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar5 < 0x7e);
    if ((float)(uint)*(byte *)(param_1 + 0x1cbe) == 8.0) {
      *(undefined *)(param_1 + 0x1cbe) = 0;
      *(byte *)(param_1 + 0x1cbd) = *(char *)(param_1 + 0x1cbd) + 1U & 3;
    }
    else {
      *(byte *)(param_1 + 0x1cbe) = *(byte *)(param_1 + 0x1cbe) + 1;
    }
  }
  return;
}

