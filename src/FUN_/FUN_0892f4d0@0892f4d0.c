#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892f4d0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x178);
  *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
  *(undefined *)(param_1 + *(char *)(param_1 + 0x74) * 0xc + 0x1ba5) = 0;
  piVar1 = (int *)FUN_0880cc48();
  uVar3 = (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x74) * 0xc + 0x1ba4);
  iVar2 = *piVar1 + ((int)uVar3 >> 3);
  if ((int)uVar3 < 0) {
    uVar3 = -(-uVar3 & 7) & 0x1f;
  }
  else {
    uVar3 = uVar3 & 7;
  }
  *(byte *)(iVar2 + 0x525) = *(byte *)(iVar2 + 0x525) | (byte)(1 << uVar3);
  *(undefined *)(param_1 + 0x1b7e) =
       *(undefined *)(param_1 + *(char *)(param_1 + 0x74) * 0xc + 0x1ba4);
  piVar1 = (int *)FUN_0880cc48();
  *(uint *)(*piVar1 + 0x48c) = (uint)*(byte *)(param_1 + 0x1b7e);
  return;
}

