#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0897bee8(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  cVar1 = *(char *)(param_1 + 0xee1);
  cVar2 = *(char *)(param_1 + 0xee5);
  *(char *)(param_1 + 0xee2) = cVar1;
  if (cVar2 < '\x02') {
    if (-1 < cVar2) {
      if (((int)*(char *)(*(int *)(param_1 + 0x20) + 8) & 0x80U) == 0) {
        if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x20) != 0) {
          uVar5 = *(byte *)(param_1 + 0xeec) + 5;
          if ((int)cVar1 != uVar5 / 6 - 1) {
            if ((int)*(char *)(param_1 + 0xee0) % 3 == 2) {
              *(char *)(param_1 + 0xee2) = *(char *)(param_1 + 0xee2) + '\x01';
              if ((int)(uVar5 / 6 - 1) < (int)*(char *)(param_1 + 0xee2)) {
                *(undefined *)(param_1 + 0xee2) = 0;
              }
              *(undefined *)(param_1 + 0xee3) = 2;
              return 1;
            }
            if ((int)(uint)*(byte *)(param_1 + 0xeec) <=
                (int)*(char *)(param_1 + 0xee0) + cVar1 * 6 + 1) {
              *(char *)(param_1 + 0xee2) = *(char *)(param_1 + 0xee2) + '\x01';
              if ((int)(uVar5 / 6 - 1) < (int)*(char *)(param_1 + 0xee2)) {
                *(undefined *)(param_1 + 0xee2) = 0;
              }
              *(undefined *)(param_1 + 0xee3) = 2;
              return 1;
            }
          }
        }
      }
      else if (((int)*(char *)(param_1 + 0xee0) % 3 == 0) && (*(char *)(param_1 + 0xee2) != '\0')) {
        *(char *)(param_1 + 0xee2) = *(char *)(param_1 + 0xee2) + -1;
        if (*(char *)(param_1 + 0xee2) < '\0') {
          *(char *)(param_1 + 0xee2) = (char)((*(byte *)(param_1 + 0xeec) + 5) / 6) + -1;
        }
        *(undefined *)(param_1 + 0xee3) = 1;
        return 1;
      }
    }
  }
  else if (cVar2 < '\x03') {
    iVar3 = FUN_0897a03c(param_1,cVar1);
    iVar4 = *(int *)(param_1 + 0x20);
    if (iVar3 == 0) {
      if (((int)*(char *)(iVar4 + 8) & 0x80U) == 0) {
        if (((*(byte *)(iVar4 + 8) & 0x20) != 0) && ((int)*(char *)(param_1 + 0xee0) % 3 == 2)) {
          *(undefined *)(param_1 + 0xee3) = 2;
          *(char *)(param_1 + 0xee2) = *(char *)(param_1 + 0xee2) + '\x01';
          return 1;
        }
      }
      else if (((int)*(char *)(param_1 + 0xee0) % 3 == 0) && (*(char *)(param_1 + 0xee2) != '\0')) {
        *(char *)(param_1 + 0xee2) = *(char *)(param_1 + 0xee2) + -1;
        *(undefined *)(param_1 + 0xee3) = 1;
        return 1;
      }
    }
    else if (((int)*(char *)(iVar4 + 8) & 0x80U) == 0) {
      if (((*(byte *)(iVar4 + 8) & 0x20) != 0) && (*(char *)(param_1 + 0xee2) != '\x05')) {
        *(char *)(param_1 + 0xee2) = *(char *)(param_1 + 0xee2) + '\x01';
        *(undefined *)(param_1 + 0xee3) = 2;
        return 1;
      }
    }
    else if (*(char *)(param_1 + 0xee2) != '\0') {
      *(char *)(param_1 + 0xee2) = *(char *)(param_1 + 0xee2) + -1;
      *(undefined *)(param_1 + 0xee3) = 1;
      return 1;
    }
  }
  return 0;
}

