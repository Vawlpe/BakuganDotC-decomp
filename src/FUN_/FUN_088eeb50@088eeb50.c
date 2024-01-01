#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088eeb50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(char *)(param_1 + 0x272) != '\0') &&
      (((*(char *)(param_1 + 0x269) == '\x01' || (*(char *)(param_1 + 0x269) == '\x02')) &&
       (DAT_08ac5928 != 0)))) && ((*(byte *)(DAT_08ac5928 + 4) & 8) != 0)) {
    *(byte *)(param_1 + 0x273) = *(byte *)(param_1 + 0x273) | 1;
    if (*(char *)(param_1 + 0x272) != '\x03') {
      iVar1 = FUN_089edb80();
      *(undefined4 *)(iVar1 + 0x30) = 0;
      *(undefined4 *)(iVar1 + 0x34) = 0;
      *(undefined4 *)(iVar1 + 0x38) = 0;
      *(undefined4 *)(iVar1 + 0x3c) = 0;
      iVar1 = FUN_089edb80();
      *(undefined4 *)(iVar1 + 0x40) = 0;
      *(undefined4 *)(iVar1 + 0x44) = 0;
      *(undefined4 *)(iVar1 + 0x48) = 0;
      *(undefined4 *)(iVar1 + 0x4c) = 0x3f800000;
      uVar2 = FUN_089edb80();
      FUN_089edf24(uVar2,5);
    }
    *(undefined *)(param_1 + 0x265) = 0;
    *(undefined *)(param_1 + 0x264) = 4;
  }
  return;
}

