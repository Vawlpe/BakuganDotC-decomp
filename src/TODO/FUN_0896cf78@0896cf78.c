#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896cf78(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x2b92);
  if ((int)uVar2 < (int)(uVar2 + (int)*(char *)(param_1 + 0x2b93))) {
    iVar4 = uVar2 << 2;
    uVar5 = uVar2;
    do {
      if ((int)(uVar5 - uVar2) < (int)*(char *)(param_1 + 0x29bd)) {
        FUN_0896a294(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
        uVar2 = (uint)*(byte *)(param_1 + 0x2b92);
        cVar1 = *(char *)(param_1 + 0x2b93);
      }
      else {
        cVar1 = *(char *)(param_1 + 0x2b93);
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while ((int)uVar5 < (int)(uVar2 + (int)cVar1));
  }
  return;
}

