#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0896c360(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)*(char *)(param_1 + 0x77);
  if (iVar4 < 1) {
    if (-1 < iVar4) {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x10) != 0) {
        iVar4 = param_1 + iVar4;
        if (*(char *)(iVar4 + 0x74) == '\0') {
          *(char *)(iVar4 + 0x74) = *(char *)(param_1 + 0x2b73) + -1;
          return 1;
        }
        *(char *)(iVar4 + 0x74) = *(char *)(iVar4 + 0x74) + -1;
        return 1;
      }
      iVar4 = param_1 + iVar4;
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x40) != 0) {
        if ((int)*(char *)(iVar4 + 0x74) == *(char *)(param_1 + 0x2b73) + -1) {
          *(undefined *)(iVar4 + 0x74) = 0;
          return 1;
        }
        *(char *)(iVar4 + 0x74) = *(char *)(iVar4 + 0x74) + '\x01';
        return 1;
      }
    }
  }
  else if (iVar4 < 2) {
    iVar5 = *(int *)(param_1 + 0x20);
    if (*(char *)(param_1 + 0x29bd) < '\x03') {
      if ((*(byte *)(iVar5 + 8) & 0x10) == 0) {
        if ((*(byte *)(iVar5 + 8) & 0x40) == 0) {
          if (((int)*(char *)(iVar5 + 8) & 0x80U) == 0) {
            if ((*(byte *)(iVar5 + 8) & 0x20) != 0) {
              cVar1 = *(char *)(param_1 + iVar4 + 0x74);
              uVar2 = (int)cVar1 & 1;
              if (cVar1 < 0) {
                uVar2 = -uVar2;
              }
              if (uVar2 == 0) {
                *(char *)(param_1 + iVar4 + 0x74) = cVar1 + '\x01';
                return 1;
              }
            }
          }
          else {
            cVar1 = *(char *)(param_1 + iVar4 + 0x74);
            uVar2 = (int)cVar1 & 1;
            if (cVar1 < 0) {
              uVar2 = -uVar2;
            }
            if (uVar2 == 1) {
              *(char *)(param_1 + iVar4 + 0x74) = cVar1 + -1;
              return 1;
            }
          }
        }
        else {
          cVar1 = *(char *)(param_1 + iVar4 + 0x74);
          if (cVar1 < '\x02') {
            *(char *)(param_1 + iVar4 + 0x74) = cVar1 + '\x02';
            return 1;
          }
        }
      }
      else {
        cVar1 = *(char *)(param_1 + iVar4 + 0x74);
        if ('\x01' < cVar1) {
          *(char *)(param_1 + iVar4 + 0x74) = cVar1 + -2;
          return 1;
        }
      }
    }
    else if (((int)*(char *)(iVar5 + 8) & 0x80U) == 0) {
      if ((*(byte *)(iVar5 + 8) & 0x20) != 0) {
        cVar1 = *(char *)(param_1 + iVar4 + 0x74);
        uVar3 = (uint)cVar1;
        uVar2 = uVar3 & 3;
        if ((int)uVar3 < 0) {
          uVar2 = -(-uVar3 & 3);
        }
        if (uVar2 != 3) {
          *(char *)(param_1 + iVar4 + 0x74) = cVar1 + '\x01';
          return 1;
        }
      }
    }
    else {
      cVar1 = *(char *)(param_1 + iVar4 + 0x74);
      uVar3 = (uint)cVar1;
      uVar2 = uVar3 & 3;
      if ((int)uVar3 < 0) {
        uVar2 = -(-uVar3 & 3);
      }
      if (uVar2 != 0) {
        *(char *)(param_1 + iVar4 + 0x74) = cVar1 + -1;
        return 1;
      }
    }
  }
  return 0;
}

