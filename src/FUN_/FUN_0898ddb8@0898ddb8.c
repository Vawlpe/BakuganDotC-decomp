#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0898ddb8(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  if ((-1 < *(char *)(param_1 + 0xe7d)) && (*(char *)(param_1 + 0xe7d) < '\x02')) {
    iVar3 = *(int *)(param_1 + 0x20);
    if ((*(byte *)(iVar3 + 8) & 0x10) == 0) {
      if ((*(byte *)(iVar3 + 8) & 0x40) == 0) {
        if (((int)*(char *)(iVar3 + 8) & 0x80U) == 0) {
          if ((*(byte *)(iVar3 + 8) & 0x20) != 0) {
            cVar1 = *(char *)(param_1 + 0xe78);
            if (((int)cVar1 % 3 != 2) &&
               ((int)cVar1 + *(char *)(param_1 + 0xe79) * 6 + 1 <
                (int)(uint)*(byte *)(param_1 + 0xe84))) {
              *(char *)(param_1 + 0xe78) = cVar1 + '\x01';
              return 1;
            }
          }
        }
        else if ((int)*(char *)(param_1 + 0xe78) % 3 != 0) {
          *(char *)(param_1 + 0xe78) = *(char *)(param_1 + 0xe78) + -1;
          return 1;
        }
      }
      else {
        cVar1 = *(char *)(param_1 + 0xe78);
        if (cVar1 < 3) {
          bVar2 = *(byte *)(param_1 + 0xe84);
          if (*(char *)(param_1 + 0xe79) * 6 + (int)cVar1 + 3 < (int)(uint)bVar2) {
            *(char *)(param_1 + 0xe78) = cVar1 + '\x03';
            return 1;
          }
          if (3 < (uint)bVar2 % 6) {
            *(byte *)(param_1 + 0xe78) = bVar2 % 6 - 1;
            return 1;
          }
        }
      }
    }
    else if ('\x02' < *(char *)(param_1 + 0xe78)) {
      *(char *)(param_1 + 0xe78) = *(char *)(param_1 + 0xe78) + -3;
      return 1;
    }
  }
  return 0;
}

