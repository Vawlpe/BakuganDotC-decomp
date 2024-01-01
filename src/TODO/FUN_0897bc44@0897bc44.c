#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0897bc44(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *(char *)(param_1 + 0xee5);
  if (cVar2 < '\x02') {
    if (-1 < cVar2) {
      iVar3 = *(int *)(param_1 + 0x20);
      if ((*(byte *)(iVar3 + 8) & 0x10) == 0) {
        if ((*(byte *)(iVar3 + 8) & 0x40) == 0) {
          if (((int)*(char *)(iVar3 + 8) & 0x80U) == 0) {
            if ((*(byte *)(iVar3 + 8) & 0x20) != 0) {
              cVar2 = *(char *)(param_1 + 0xee0);
              if (((int)cVar2 % 3 != 2) &&
                 ((int)cVar2 + *(char *)(param_1 + 0xee1) * 6 + 1 <
                  (int)(uint)*(byte *)(param_1 + 0xeec))) {
                *(char *)(param_1 + 0xee0) = cVar2 + '\x01';
                return 1;
              }
            }
          }
          else if ((int)*(char *)(param_1 + 0xee0) % 3 != 0) {
            *(char *)(param_1 + 0xee0) = *(char *)(param_1 + 0xee0) + -1;
            return 1;
          }
        }
        else {
          cVar2 = *(char *)(param_1 + 0xee0);
          if (cVar2 < 3) {
            bVar1 = *(byte *)(param_1 + 0xeec);
            if (*(char *)(param_1 + 0xee1) * 6 + (int)cVar2 + 3 < (int)(uint)bVar1) {
              *(char *)(param_1 + 0xee0) = cVar2 + '\x03';
              return 1;
            }
            if (3 < (uint)bVar1 % 6) {
              *(byte *)(param_1 + 0xee0) = bVar1 % 6 - 1;
              return 1;
            }
          }
        }
      }
      else if ('\x02' < *(char *)(param_1 + 0xee0)) {
        *(char *)(param_1 + 0xee0) = *(char *)(param_1 + 0xee0) + -3;
        return 1;
      }
    }
  }
  else if ((cVar2 < '\x03') &&
          (cVar2 = FUN_0897a03c(param_1,*(undefined *)(param_1 + 0xee1)), cVar2 == '\0')) {
    iVar3 = *(int *)(param_1 + 0x20);
    if ((*(byte *)(iVar3 + 8) & 0x10) == 0) {
      if ((*(byte *)(iVar3 + 8) & 0x40) == 0) {
        if (((int)*(char *)(iVar3 + 8) & 0x80U) == 0) {
          if (((*(byte *)(iVar3 + 8) & 0x20) != 0) && ((int)*(char *)(param_1 + 0xee0) % 3 != 2)) {
            *(char *)(param_1 + 0xee0) = *(char *)(param_1 + 0xee0) + '\x01';
            return 1;
          }
        }
        else if ((int)*(char *)(param_1 + 0xee0) % 3 != 0) {
          *(char *)(param_1 + 0xee0) = *(char *)(param_1 + 0xee0) + -1;
          return 1;
        }
      }
      else if (*(char *)(param_1 + 0xee0) < '\x03') {
        *(char *)(param_1 + 0xee0) = *(char *)(param_1 + 0xee0) + '\x03';
        return 1;
      }
    }
    else if ('\x02' < *(char *)(param_1 + 0xee0)) {
      *(char *)(param_1 + 0xee0) = *(char *)(param_1 + 0xee0) + -3;
      return 1;
    }
  }
  return 0;
}

