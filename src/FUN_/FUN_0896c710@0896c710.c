#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896c710(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x2a59) != '\0') {
    bVar1 = *(byte *)(param_1 + 0x2a58);
    while( true ) {
      if (((uint)bVar1 & 1 << (uVar2 & 0x1f)) == 0) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + (*(byte *)(param_1 + 0x2b76) + uVar2) * 4);
        *(undefined4 *)(iVar3 + 0xb0) = 0x3f000000;
        *(undefined4 *)(iVar3 + 0xb4) = 0x3f000000;
        *(undefined4 *)(iVar3 + 0xb8) = 0x3f000000;
        *(undefined4 *)(iVar3 + 0xbc) = 0x3f800000;
        bVar1 = *(byte *)(param_1 + 0x2a59);
      }
      else {
        bVar1 = *(byte *)(param_1 + 0x2a59);
      }
      uVar2 = uVar2 + 1;
      if ((int)(uint)bVar1 <= (int)uVar2) break;
      bVar1 = *(byte *)(param_1 + 0x2a58);
    }
  }
  return;
}

