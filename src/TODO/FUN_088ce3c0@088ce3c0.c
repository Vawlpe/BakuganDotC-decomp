#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ce3c0(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af2dbc;
    if (*(int *)(param_1 + 0x10) != 4) {
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 0x70) {
        *(undefined4 *)(DAT_08ac58c4 + 4) = 0x25;
        uVar1 = _DONE_Get_DAT_08AAC9E0();
        FUN_0880cd9c(uVar1,0x33,0x25);
      }
      else if (iVar2 == 0x71) {
        *(undefined4 *)(DAT_08ac58c4 + 4) = 0x25;
        uVar1 = _DONE_Get_DAT_08AAC9E0();
        FUN_0880cd9c(uVar1,0x33,0x25);
      }
      else if (iVar2 == 0x72) {
        *(undefined4 *)(DAT_08ac58c4 + 4) = 0x18;
        uVar1 = _DONE_Get_DAT_08AAC9E0();
        FUN_0880cd9c(uVar1,0x33,0x18);
      }
      else if (iVar2 == 0x3b) {
        *(undefined4 *)(DAT_08ac58c4 + 4) = 0x24;
        uVar1 = _DONE_Get_DAT_08AAC9E0();
        FUN_0880cd9c(uVar1,0x33,0x24);
      }
      FUN_088ce0d8(param_1);
    }
    FUN_089bf25c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

