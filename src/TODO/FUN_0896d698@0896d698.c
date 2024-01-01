#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896d698(int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  memset_jak((undefined *)(param_1 + 0x2a70),0,0x14);
  *(char *)(param_1 + 0x2a72) = param_2;
  if ((param_2 == '\0') &&
     (uVar2 = (uint)*(byte *)(param_1 + 0x2b94),
     (int)uVar2 < (int)(uVar2 + (int)*(char *)(param_1 + 0x2b95)))) {
    iVar1 = uVar2 << 2;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar1);
      uVar2 = uVar2 + 1;
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
      iVar1 = iVar1 + 4;
    } while ((int)uVar2 <
             (int)((uint)*(byte *)(param_1 + 0x2b94) + (int)*(char *)(param_1 + 0x2b95)));
  }
  return;
}

