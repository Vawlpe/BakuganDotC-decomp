#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0896c914(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) != 0) {
    iVar4 = (int)*(char *)(param_1 + 0x77);
    if (iVar4 < 1) {
      if (-1 < iVar4) {
        uVar3 = 2;
        if (((uint)*(byte *)(param_1 + 0x2a58) &
            1 << ((int)*(char *)(param_1 + iVar4 + 0x74) & 0x1fU)) != 0) {
          uVar3 = 1;
        }
        return uVar3;
      }
    }
    else if (iVar4 < 2) {
      cVar1 = *(char *)(param_1 + 0x29be);
      cVar2 = *(char *)(param_1 + iVar4 + 0x74);
      iVar4 = param_1 + cVar1 * 4 + (int)cVar2;
      if (*(char *)(iVar4 + 0x29ec) == -1) {
        return 2;
      }
      if ((*(byte *)(iVar4 + 0x29fc) & 1) != 0) {
        FUN_0896c78c(param_1,0,cVar1,cVar2);
        return 1;
      }
      FUN_0896c78c(param_1,1,cVar1,cVar2);
      return 1;
    }
  }
  return 0;
}

