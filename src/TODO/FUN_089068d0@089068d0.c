#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089068d0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (0x2df < param_2) {
    switch(param_2) {
    case 0x33c:
      return 0xa0000a;
    case 0x33d:
      return 0xa0000b;
    case 0x33e:
      return 0xa0000c;
    case 0x33f:
      return 0xc0000a;
    case 0x340:
      return 0xc0000b;
    case 0x341:
      return 0xc0000c;
    case 0x342:
      return 0xd0000a;
    case 0x343:
      return 0xd0000b;
    case 0x344:
      return 0xd0000c;
    case 0x345:
      return 0xe00009;
    case 0x346:
      return 0xe0000a;
    case 0x347:
      return 0xe0000b;
    case 0x348:
      return 0xf00009;
    case 0x349:
      return 0xf0000a;
    case 0x34a:
      return 0xf0000b;
    case 0x34b:
      return 0x1000009;
    case 0x34c:
      return 0x100000a;
    case 0x34d:
      return 0x100000b;
    default:
      switch(param_2) {
      case 0x7f6:
        return 0x430001e;
      case 0x7f7:
        return 0x430001f;
      case 0x7f8:
        return 0x4300020;
      case 0x7f9:
        return 0x4300021;
      case 0x7fa:
        return 0x4300022;
      case 0x7fb:
        return 0x4300023;
      case 0x7fc:
        return 0x4300024;
      case 0x7fd:
        return 0x4300025;
      case 0x7fe:
        return 0x4300026;
      case 0x7ff:
        return 0x4300027;
      case 0x800:
        return 0x4300028;
      case 0x801:
        return 0x4300029;
      case 0x802:
        return 0x430002a;
      }
      break;
    case -0x452e541f:
      break;
    }
  }
  if (0x2df >= param_2) {
    iVar1 = *(int *)(&DAT_08ac02a8 + param_2 * 4);
    if (iVar1 == -1) {
      iVar1 = -1;
    }
    return iVar1;
  }
  return -1;
}

