#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0886f6d4(int param_1,char param_2)

{
  int iVar1;
  
  if (*(int *)(DAT_08ac58c4 + 0x20) != 1) {
    iVar1 = 10;
    switch(param_1) {
    case 1:
    case 2:
    case 0x10:
      return 0x44;
    case 3:
    case 4:
      return 0x45;
    case 5:
    case 0x11:
      return 0x46;
    case 6:
    case 0x12:
      return 0x47;
    case 7:
    case 0x13:
      return 0x48;
    case 8:
    case 0x14:
      return 0x49;
    case 9:
    case 10:
      return 0x4a;
    case 0xb:
      return 0x4b;
    case 0xc:
      return 0x4c;
    case 0xd:
      return 0x4d;
    case 0xe:
      return 0x4e;
    case 0xf:
      iVar1 = 0xb;
    }
    return iVar1 + 0x44;
  }
  if (param_2 == '\0') {
    switch(*(undefined4 *)(DAT_08ac58c4 + 4)) {
    case 2:
      return 0x4e;
    case 3:
    case 4:
    case 5:
    case 7:
    case 0xb:
    case 0xc:
    case 0xf:
    case 0x11:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
      break;
    case 6:
      return 0x4c;
    case 8:
      iVar1 = 0x2b;
      if (param_1 == 0xf) {
        iVar1 = 0x2e;
      }
      return iVar1 + 0x21;
    case 9:
      iVar1 = 0x2d;
      if (param_1 == 0xb) {
        iVar1 = 0x2a;
      }
      return iVar1 + 0x21;
    case 10:
      return 0x4d;
    case 0xd:
      return 0x4a;
    case 0xe:
      return 0x4d;
    case 0x10:
      return 0x4f;
    case 0x12:
      return 0x4f;
    case 0x18:
      return 0x4a;
    case 0x24:
      return 0x50;
    case 0x25:
      return 0x4a;
    }
    return 0x4e;
  }
  return 0x50;
}

