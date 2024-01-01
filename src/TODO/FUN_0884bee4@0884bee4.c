#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_0884bee4(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  switch(param_2) {
  case 3:
    uVar2 = (uint)*(byte *)(param_1 + 0x52e);
    break;
  case 4:
    uVar2 = (uint)*(byte *)(param_1 + 0x52f);
    break;
  case 5:
    uVar2 = (uint)*(byte *)(param_1 + 0x530);
    break;
  case 6:
    uVar2 = DAT_08aba778;
    break;
  case 7:
    uVar2 = (uint)*(byte *)(param_1 + 0x531);
    break;
  case 8:
    uVar2 = *(uint *)(param_1 + 0x534);
    break;
  case 9:
    iVar1 = FUN_0882c13c();
    if (iVar1 != 0) {
      FUN_0882c15c();
      uVar2 = FUN_0882c220(0xc);
    }
    break;
  case 10:
    uVar2 = (uint)*(byte *)(param_1 + 0x55a);
    break;
  case 0xb:
    uVar2 = *(uint *)(param_1 + 0x564);
    break;
  case 0xc:
    uVar2 = (uint)*(byte *)(param_1 + 0x532);
  }
  return uVar2;
}

