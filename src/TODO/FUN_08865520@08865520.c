#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08865520(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x394) != 0x10) {
    uVar1 = 0;
    iVar2 = param_1 + 0x300;
    if (*(int *)(param_1 + 0x394) != 0) {
      uVar1 = 5;
    }
    *(undefined4 *)(param_1 + 0x398) = uVar1;
    *(undefined4 *)(param_1 + 0x394) = 0x10;
    if (*(int *)(param_1 + 8) == 0x15) {
      FUN_088243d8(DAT_08abd5b0,0x5e,iVar2);
      FUN_08824914(DAT_08abd5b0,0x5e,iVar2);
      FUN_08824914(DAT_08abd5b0,0x11f,iVar2);
      FUN_08824914(DAT_08abd5b0,0x120,iVar2);
    }
    else {
      FUN_088243d8(DAT_08ac5c70,0x37,iVar2);
      FUN_08824914(DAT_08ac5c70,0x37,iVar2);
      FUN_08824914(DAT_08ac5c70,0x163,iVar2);
      FUN_08824914(DAT_08ac5c70,0x164,iVar2);
    }
  }
  return;
}

