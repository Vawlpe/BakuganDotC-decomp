#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0896234c(int param_1,undefined param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  
  uVar4 = (uint)*(ushort *)(param_1 + 0x51ea);
  cVar5 = '\0';
  if (uVar4 < uVar4 + *(ushort *)(param_1 + 0x51ec)) {
    iVar3 = uVar4 << 2;
    iVar2 = param_1 + uVar4 * 0x28 + 0x78;
    do {
      cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41000000,param_2,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,1);
      cVar5 = cVar5 + cVar1;
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while ((int)uVar4 <
             (int)((uint)*(ushort *)(param_1 + 0x51ea) + (uint)*(ushort *)(param_1 + 0x51ec)));
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0x51ee);
  if (uVar4 < uVar4 + *(ushort *)(param_1 + 0x51f0)) {
    iVar3 = uVar4 << 2;
    iVar2 = param_1 + uVar4 * 0x28 + 0x78;
    do {
      cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41000000,param_2,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,1);
      cVar5 = cVar5 + cVar1;
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while ((int)uVar4 <
             (int)((uint)*(ushort *)(param_1 + 0x51ee) + (uint)*(ushort *)(param_1 + 0x51f0)));
  }
  return cVar5 != '\0';
}

