#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0897196c(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x74);
  if (cVar1 < '\x04') {
    if (cVar1 < '\x02') {
      if (-1 < cVar1) {
        iVar2 = *(int *)(param_1 + 0x20);
        if (cVar1 < '\x01') {
          if (((int)*(char *)(iVar2 + 2) & 0x80U) == 0) {
            if (((*(byte *)(iVar2 + 2) & 0x20) != 0) &&
               ((int)*(char *)(param_1 + 0xba9) < *(char *)(param_1 + 0xbad) + -1)) {
              *(char *)(param_1 + 0xba9) = *(char *)(param_1 + 0xba9) + '\x01';
              *(undefined *)(param_1 + 3000) = 1;
              return 1;
            }
          }
          else if ('\0' < *(char *)(param_1 + 0xba9)) {
            *(char *)(param_1 + 0xba9) = *(char *)(param_1 + 0xba9) + -1;
            *(undefined *)(param_1 + 3000) = 0;
            return 1;
          }
        }
        else if (((int)*(char *)(iVar2 + 2) & 0x80U) == 0) {
          if (((*(byte *)(iVar2 + 2) & 0x20) != 0) &&
             ((int)*(char *)(param_1 + 0xbaa) < *(char *)(param_1 + 0xbae) + -1)) {
            *(char *)(param_1 + 0xbaa) = *(char *)(param_1 + 0xbaa) + '\x01';
            *(undefined *)(param_1 + 3000) = 1;
            return 1;
          }
        }
        else if ('\0' < *(char *)(param_1 + 0xbaa)) {
          *(char *)(param_1 + 0xbaa) = *(char *)(param_1 + 0xbaa) + -1;
          *(undefined *)(param_1 + 3000) = 0;
          return 1;
        }
      }
    }
    else if (cVar1 < '\x03') {
      if (((int)*(char *)(*(int *)(param_1 + 0x20) + 2) & 0x80U) == 0) {
        if (((*(byte *)(*(int *)(param_1 + 0x20) + 2) & 0x20) != 0) &&
           ((int)*(char *)(param_1 + 0xbab) < *(char *)(param_1 + 0xbaf) + -1)) {
          *(char *)(param_1 + 0xbab) = *(char *)(param_1 + 0xbab) + '\x01';
          *(undefined *)(param_1 + 3000) = 1;
          return 1;
        }
      }
      else if ('\0' < *(char *)(param_1 + 0xbab)) {
        *(char *)(param_1 + 0xbab) = *(char *)(param_1 + 0xbab) + -1;
        *(undefined *)(param_1 + 3000) = 0;
        return 1;
      }
    }
    else if (cVar1 < '\x04') {
      cVar1 = *(char *)(param_1 + 0xbac);
      iVar2 = (int)cVar1;
      if (iVar2 != -1) {
        if (((int)*(char *)(*(int *)(param_1 + 0x20) + 2) & 0x80U) == 0) {
          if (((*(byte *)(*(int *)(param_1 + 0x20) + 2) & 0x20) != 0) &&
             (iVar2 < *(char *)(param_1 + 0xbb0) + -1)) {
            *(char *)(param_1 + 0xbac) = cVar1 + '\x01';
            *(undefined *)(param_1 + 3000) = 1;
            return 1;
          }
        }
        else if (0 < iVar2) {
          *(char *)(param_1 + 0xbac) = cVar1 + -1;
          *(undefined *)(param_1 + 3000) = 0;
          return 1;
        }
      }
    }
  }
  return 0;
}

