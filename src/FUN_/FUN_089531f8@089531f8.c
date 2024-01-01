#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089531f8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xa35) != '\0') {
    cVar1 = *(char *)(param_1 + 0x74);
    iVar2 = (int)cVar1;
    if (*(char *)(param_1 + 0xa34) == '\0') {
      *(char *)(param_1 + 0x75) = cVar1;
      iVar3 = 0;
      do {
        iVar2 = (int)(char)((char)iVar2 + '\x01');
        if (3 < iVar2) {
          iVar2 = 0;
        }
      } while ((*(char *)(param_1 + iVar2 + 0x5f9) == '\0') && (iVar3 = iVar3 + 1, iVar3 < 4));
      *(char *)(param_1 + 0x74) = (char)iVar2;
      memset_jak(param_1 + 0xa34,0,0xc);
      *(undefined *)(param_1 + 0xa34) = 0;
      *(undefined4 *)(param_1 + 0xa38) = 0x41000000;
      return 1;
    }
    *(char *)(param_1 + 0x75) = cVar1;
    iVar3 = 0;
    do {
      iVar2 = (int)(char)((char)iVar2 + -1);
      if (iVar2 < 0) {
        iVar2 = 3;
      }
      iVar3 = iVar3 + 1;
    } while ((*(char *)(param_1 + iVar2 + 0x5f9) == '\0') && (iVar3 < 4));
    *(char *)(param_1 + 0x74) = (char)iVar2;
    memset_jak(param_1 + 0xa34,0,0xc);
    *(undefined *)(param_1 + 0xa34) = 1;
    *(undefined4 *)(param_1 + 0xa38) = 0x41000000;
    return 1;
  }
  if (((int)*(char *)(*(int *)(param_1 + 0x20) + 2) & 0x80U) != 0) {
    iVar3 = (int)*(char *)(param_1 + 0x74);
    iVar2 = 0;
    *(char *)(param_1 + 0x75) = *(char *)(param_1 + 0x74);
    do {
      iVar3 = (int)(char)((char)iVar3 + '\x01');
      if (3 < iVar3) {
        iVar3 = 0;
      }
    } while ((*(char *)(param_1 + iVar3 + 0x5f9) == '\0') && (iVar2 = iVar2 + 1, iVar2 < 4));
    *(char *)(param_1 + 0x74) = (char)iVar3;
    memset_jak(param_1 + 0xa34,0,0xc);
    *(undefined *)(param_1 + 0xa34) = 0;
    *(undefined4 *)(param_1 + 0xa38) = 0x41000000;
    return 1;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 2) & 0x20) == 0) {
    return 0;
  }
  iVar3 = (int)*(char *)(param_1 + 0x74);
  iVar2 = 0;
  *(char *)(param_1 + 0x75) = *(char *)(param_1 + 0x74);
  do {
    iVar3 = (int)(char)((char)iVar3 + -1);
    if (iVar3 < 0) {
      iVar3 = 3;
    }
    iVar2 = iVar2 + 1;
  } while ((*(char *)(param_1 + iVar3 + 0x5f9) == '\0') && (iVar2 < 4));
  *(char *)(param_1 + 0x74) = (char)iVar3;
  memset_jak(param_1 + 0xa34,0,0xc);
  *(undefined *)(param_1 + 0xa34) = 1;
  *(undefined4 *)(param_1 + 0xa38) = 0x41000000;
  return 1;
}

