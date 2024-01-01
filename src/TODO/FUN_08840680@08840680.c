#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08840680(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == -999) {
    param_3 = FUN_0883f6e4(param_1,param_2);
  }
  iVar1 = param_2 * 4 >> 2;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    FUN_088404d4(param_1,*(undefined4 *)(param_1 + 0x60),param_3,iVar1);
    break;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
    FUN_088404d4(param_1,*(undefined4 *)(param_1 + 0x58),param_3,iVar1);
  }
  return;
}

