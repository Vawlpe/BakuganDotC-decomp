#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088bf230(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)(DAT_08ac58c4 + 4) * 4 >> 2;
  switch(*(int *)(DAT_08ac58c4 + 4)) {
  case 0:
  case 1:
  case 2:
  case 3:
    iVar3 = 4;
    if (iVar2 == 0) {
      iVar1 = FUN_089c9b48(6,DAT_08ac58c8);
      iVar2 = *(int *)(DAT_08ac58c4 + 4);
      if (iVar1 != 0) {
        iVar3 = 0x21;
      }
    }
    if ((iVar2 == 1) && (iVar2 = FUN_089c9b48(7,DAT_08ac58c8), iVar2 != 0)) {
      iVar3 = 0x1c;
    }
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    iVar3 = 5;
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    iVar3 = 6;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    iVar3 = 7;
    break;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    iVar3 = 8;
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    iVar3 = 9;
    break;
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
    iVar3 = 9;
    break;
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
    iVar3 = 3;
    break;
  case 0x24:
  case 0x26:
  case 0x27:
    iVar3 = 0x23;
    iVar2 = FUN_089c9b48(0x1c,DAT_08ac58c8);
    if (iVar2 != 0) {
      iVar3 = 0x1c;
    }
  }
  if (iVar3 != 0) {
    FUN_089c8734(0,iVar3,1,0);
  }
  return;
}

