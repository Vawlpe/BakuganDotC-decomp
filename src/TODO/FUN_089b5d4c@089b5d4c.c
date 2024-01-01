#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b5d4c(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_2;
  pcVar2 = param_2;
  while (cVar1 != '\0') {
    if (cVar1 == '%') {
      if (pcVar2[1] == '\0') {
        pcVar2 = pcVar2 + 1;
      }
      else {
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar2;
        while ((cVar1 < 0x41 && (pcVar2[1] != '\0'))) {
          pcVar2 = pcVar2 + 1;
          cVar1 = *pcVar2;
        }
        switch((int)cVar1) {
        case 0x45:
        case 0x47:
        case 0x4c:
        case 0x65:
        case 0x66:
        case 0x67:
          FUN_089b5e3c(*(undefined4 *)(param_1 + 0x54),param_1,param_2,param_3);
          return;
        case 0x46:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5b:
        case 0x5c:
        case 0x5d:
        case 0x5e:
        case 0x5f:
        case 0x60:
        case 0x61:
        case 0x62:
        case 99:
        case 100:
          pcVar2 = pcVar2 + 1;
          break;
        default:
          pcVar2 = pcVar2 + 1;
        }
      }
    }
    else {
      pcVar2 = pcVar2 + 1;
    }
    cVar1 = *pcVar2;
  }
  FUN_089b77dc(*(undefined4 *)(param_1 + 0x54),param_1,param_2,param_3);
  return;
}

