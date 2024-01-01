#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08929b94(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if (*(byte *)(param_1 + 0x6f0) != 0) {
    if (1 < *(byte *)(param_1 + 0x6f0)) {
      return 1;
    }
    DAT_08ac0e70 = 1;
    iVar4 = FUN_089bf93c(0x1fe,1);
    if (iVar4 != 0) {
      return 0;
    }
    *(undefined *)(param_1 + 0x6f0) = 2;
    return 0;
  }
  DAT_08ac0e70 = 1;
  iVar4 = FUN_089bf6e8(0x1fe,100);
  iVar3 = FUN_0880dc00("DWHologramHelp");
  FUN_088cc354(iVar3);
  FUN_0890e844(*(undefined4 *)(iVar3 + (uint)*(ushort *)(param_1 + 0x4ba) * 4));
  bVar1 = *(byte *)(param_1 + 0x485);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined4 *)(iVar4 + 0x7c) = 0;
LAB_08929c98:
      *(undefined4 *)(iVar4 + 0x84) = 1;
      cVar2 = *(char *)(param_1 + 0x6f0);
      goto LAB_08929ca4;
    }
    *(undefined *)(iVar4 + 0x91) = 0;
  }
  else {
    if (bVar1 != 7) {
      *(undefined4 *)(iVar4 + 0x7c) = 0;
      goto LAB_08929c98;
    }
    *(undefined *)(iVar4 + 0x91) = 0;
  }
  *(undefined4 *)(iVar4 + 0x7c) = 0;
  *(undefined4 *)(iVar4 + 0x84) = 1;
  cVar2 = *(char *)(param_1 + 0x6f0);
LAB_08929ca4:
  *(char *)(param_1 + 0x6f0) = cVar2 + '\x01';
  return 0;
}

