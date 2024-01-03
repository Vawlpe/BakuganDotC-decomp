#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881c93c(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *ptr;
  uint uVar4;
  undefined auStack_50 [52];
  
  bVar1 = false;
  iVar2 = FUN_089d3ab4();
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else {
    uVar3 = FUN_089d3adc();
    iVar2 = FUN_089d3fac(uVar3);
    if (iVar2 == 0) {
      iVar2 = FUN_089cf6b4(auStack_50,0);
      if ((iVar2 != 0) && (iVar2 = FUN_089cf9a4(param_1 + 0xad), iVar2 == 0)) {
        FUN_0881b26c(param_1,4);
        *(undefined4 *)(param_1 + 0x14) = 0;
        return;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = 0;
      uVar4 = 0;
      ptr = (undefined *)(param_1 + 0x18);
      do {
        memset_jak(ptr,0,0x1f);
        uVar4 = uVar4 + 1;
        ptr = ptr + 0x1f;
      } while (uVar4 < 4);
      uVar3 = FUN_089d3adc();
      iVar2 = FUN_089d41d4(uVar3);
      if (iVar2 != 3) {
        bVar1 = true;
      }
    }
  }
  if (bVar1) {
    *(undefined4 *)(param_1 + 4) = 8;
    *(undefined4 *)(param_1 + 8) = 0;
    iVar2 = DONE_NotZero_DAT_08AAC9E0();
    if (iVar2 != 0) {
      uVar3 = DONE_Get_DAT_08AAC9E0();
      FUN_0880d0e8(uVar3,0x80);
    }
  }
  return;
}

