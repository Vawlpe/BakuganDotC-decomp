#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088efb94(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x284) == 0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    uVar2 = FUN_089d7d74(0x1300,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x284) = uVar2;
  }
  uVar4 = 0;
  if (*(char *)(DAT_08abf710 + 0xc9) != '\0') {
    iVar3 = 0;
    do {
      memset_jak((undefined *)(*(int *)(param_1 + 0x284) + uVar4 * -4 + iVar3 * 5),0,0x4c);
      *(char *)(param_1 + (uint)*(byte *)((&DAT_08b00d40)[uVar4] + 0x3c) + 0x292) = (char)uVar4;
      uVar4 = uVar4 + 1 & 0xff;
      iVar3 = uVar4 << 4;
    } while (uVar4 < *(byte *)(DAT_08abf710 + 0xc9));
  }
  return;
}

