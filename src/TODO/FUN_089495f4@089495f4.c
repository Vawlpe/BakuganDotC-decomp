#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089495f4(int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if ((*(byte *)(iVar3 + 2) & 0x10) == 0) {
    bVar2 = *(byte *)(iVar3 + 2);
  }
  else {
    if (0 < *(int *)(param_1 + 0x78)) {
      iVar3 = _DONE_NotZero_DAT_08AC5874();
      if (iVar3 != 0) {
        uVar1 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar1,1,0,0);
      }
      *(undefined4 *)(param_1 + 0x7c) = 1;
      return 1;
    }
    bVar2 = *(byte *)(iVar3 + 2);
  }
  if ((bVar2 & 0x40) == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x78) < 0xf) {
      iVar3 = _DONE_NotZero_DAT_08AC5874();
      if (iVar3 != 0) {
        uVar1 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar1,1,0,0);
      }
      *(undefined4 *)(param_1 + 0x7c) = 2;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return 0;
}

