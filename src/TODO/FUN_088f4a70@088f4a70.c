#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f4a70(int param_1,char param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar4 = 0;
  iVar3 = 0;
  do {
    if (*(char *)(*(int *)((int)&DAT_08b00d40 + iVar3) + 0x3c) == param_2) break;
    uVar4 = uVar4 + 1 & 0xff;
    iVar3 = uVar4 << 2;
  } while (uVar4 < *(byte *)(param_1 + 0xc9));
  if (uVar4 < *(byte *)(param_1 + 0xc9)) {
    FUN_088f46a8(param_1,uVar4);
    puVar5 = (undefined4 *)(param_1 + uVar4 * 4);
    FUN_089d8870(*puVar5);
    FUN_089de940(*puVar5,0);
    *(char *)(param_1 + 0xc9) = *(char *)(param_1 + 0xc9) + -1;
    uVar1 = (uint)*(byte *)(param_1 + 0xc9);
    if (uVar4 < uVar1) {
      do {
        (&DAT_08b00d40)[uVar4] = (&DAT_08b00d44)[uVar4];
        *(char *)((&DAT_08b00d44)[uVar4] + 0x13) = (char)uVar4;
        piVar2 = (int *)(param_1 + uVar4 * 4);
        iVar3 = piVar2[1];
        *piVar2 = iVar3;
        *(char *)(iVar3 + 0x34c) = (char)uVar4;
        uVar1 = (uint)*(byte *)(param_1 + 0xc9);
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < uVar1);
    }
    (&DAT_08b00d40)[uVar1] = 0;
    *(undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0xc9) * 4) = 0;
    FUN_088f4320(param_1);
  }
  return;
}

