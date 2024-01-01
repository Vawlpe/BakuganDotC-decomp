#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088632f8(undefined4 param_1,int param_2)

{
  if (param_2 < 0x5d) {
    switch(param_2) {
    case 0x31:
    case 0x33:
    case 0x34:
    case 0x3e:
    case 0x3f:
    case 0x44:
    case 0x47:
    case 0x48:
    case 0x4d:
      break;
    case 0x32:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x45:
    case 0x46:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
LAB_08863388:
      return 0;
    default:
      if (param_2 < 0x5b) {
        return 0;
      }
    }
  }
  else {
    switch(param_2) {
    case 0x85:
    case 0x86:
    case 0x87:
    case 0x91:
    case 0x93:
    case 0x94:
    case 0x97:
    case 0x98:
    case 0x9c:
    case 0x9f:
    case 0xa0:
      break;
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
    case 0x8c:
    case 0x8d:
    case 0x8e:
    case 0x8f:
    case 0x90:
    case 0x92:
    case 0x95:
    case 0x96:
    case 0x99:
    case 0x9a:
    case 0x9b:
    case 0x9d:
    case 0x9e:
      goto LAB_08863388;
    default:
      if (param_2 != 0xba) {
        return 0;
      }
    }
  }
  return 1;
}

