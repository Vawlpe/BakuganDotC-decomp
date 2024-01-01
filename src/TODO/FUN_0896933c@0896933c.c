#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896933c(int param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char local_10 [16];
  
  pcVar1 = local_10;
  pcVar5 = local_10;
  local_10[0] = '\x01';
  local_10[1] = 1;
  local_10[2] = 0;
  local_10[3] = 1;
  local_10[4] = 1;
  local_10[5] = 1;
  local_10[6] = 1;
  local_10[7] = 0;
  local_10[8] = 1;
  *(undefined *)(param_1 + 0x2a58) = 0;
  local_10[9] = 1;
  uVar4 = (uint)*(byte *)(param_1 + 0x2a58);
  if ('\x02' < *(char *)(param_1 + 0x29bd)) {
    uVar3 = 0;
    do {
      if (pcVar5[4] != '\0') {
        uVar4 = uVar4 | 1 << (uVar3 & 0x1f) & 0xffU;
      }
      if ((uVar3 == 5) && (*(char *)(param_1 + 0x29bd) < '\x04')) {
        uVar4 = uVar4 & 0xffffffdf;
      }
      uVar2 = uVar3 + 1;
      pcVar5 = local_10 + uVar3 + 1;
      uVar3 = uVar2;
    } while ((int)uVar2 < 6);
    *(char *)(param_1 + 0x2a58) = (char)uVar4;
    return;
  }
  uVar3 = 0;
  do {
    if (*pcVar1 != '\0') {
      uVar4 = uVar4 | 1 << (uVar3 & 0x1f) & 0xffU;
    }
    uVar2 = uVar3 + 1;
    pcVar1 = local_10 + uVar3 + 1;
    uVar3 = uVar2;
  } while ((int)uVar2 < 4);
  *(char *)(param_1 + 0x2a58) = (char)uVar4;
  return;
}

