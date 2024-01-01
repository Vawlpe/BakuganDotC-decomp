#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088afa14(int param_1)

{
  if (param_1 < 0x25) {
    switch(param_1) {
    case 1:
    case 3:
    case 4:
    case 5:
      break;
    case 2:
      goto LAB_088afad0;
    case 6:
      return 3;
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
      goto switchD_088afa48_caseD_7;
    default:
      if (param_1 < 0x22) {
        return 0;
      }
    }
  }
  else {
    switch(param_1) {
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
switchD_088afa48_caseD_7:
      return 2;
    case 0x35:
    case 0x3a:
    case 0x40:
    case 0x41:
    case 0x42:
      break;
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
LAB_088afad0:
      return 0;
    default:
      switch(param_1) {
      case 0x56:
      case 0x57:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x6c:
      case 0x6e:
      case 0x72:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x85:
      case 0x87:
        goto switchD_088afa48_caseD_7;
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6d:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x73:
      case 0x74:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x83:
      case 0x84:
      case 0x86:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
        goto LAB_088afad0;
      }
    }
  }
  return 1;
}

