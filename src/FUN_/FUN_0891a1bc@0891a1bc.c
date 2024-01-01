#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0891a1bc(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  if (((int)*(char *)(*(int *)(param_1 + 0x20) + 8) & 0x80U) != 0) {
    cVar1 = *(char *)(param_1 + 0x74);
    iVar3 = (int)cVar1;
    iVar2 = 0;
    while( true ) {
      cVar4 = '\x05';
      if (iVar3 % 6 != 0) {
        cVar4 = (char)((uint)((iVar3 + -1) * 0x1000000) >> 0x18);
      }
      iVar3 = (int)cVar4;
      iVar2 = iVar2 + 1;
      if (*(char *)(param_1 + iVar3 * 4 + 0x8a2) == '\0') break;
      if (4 < iVar2) {
        *(char *)(param_1 + 0x74) = cVar4;
        *(char *)(param_1 + 0x74) = cVar1;
        return 0;
      }
    }
    *(char *)(param_1 + 0x74) = cVar4;
    return 1;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x20) != 0) {
    cVar1 = *(char *)(param_1 + 0x74);
    iVar3 = (int)cVar1;
    iVar2 = 0;
    do {
      cVar4 = '\0';
      if (iVar3 % 6 != 5) {
        cVar4 = (char)((uint)((iVar3 + 1) * 0x1000000) >> 0x18);
      }
      iVar3 = (int)cVar4;
      iVar2 = iVar2 + 1;
      if (*(char *)(param_1 + iVar3 * 4 + 0x8a2) == '\0') {
        *(char *)(param_1 + 0x74) = cVar4;
        return 1;
      }
    } while (iVar2 < 5);
    *(char *)(param_1 + 0x74) = cVar4;
    *(char *)(param_1 + 0x74) = cVar1;
  }
  return 0;
}

