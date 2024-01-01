#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891958c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined auStack_3a [26];
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
  if (*(char *)(param_1 + 0x8d0) != '\0') {
    iVar2 = 0x1a;
    iVar1 = 0x68;
    do {
      FUN_08919034(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1),
                   auStack_3a[(uint)*(byte *)(param_1 + 0x8d2) * 2 + iVar2]);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < 0x1c);
    if ((float)(uint)*(byte *)(param_1 + 0x8d3) == 8.0) {
      *(undefined *)(param_1 + 0x8d3) = 0;
      *(byte *)(param_1 + 0x8d2) = *(char *)(param_1 + 0x8d2) + 1U & 3;
    }
    else {
      *(byte *)(param_1 + 0x8d3) = *(byte *)(param_1 + 0x8d3) + 1;
    }
  }
  return;
}

