#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891752c(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  memset_jak(param_1 + 0x8a0,0,0x18);
  *(undefined *)(param_1 + 0x75) = 0;
  uVar3 = 0;
  iVar5 = param_1;
  do {
    uVar1 = FUN_089174a8(param_1,1,uVar3 & 0xff);
    uVar4 = uVar1 & 0xff;
    piVar2 = (int *)FUN_0880cc48();
    if ((int)uVar4 < 0) {
      uVar6 = -(-uVar4 & 7) & 0x1f;
    }
    else {
      uVar6 = uVar1 & 7;
    }
    if (((uint)*(byte *)(*piVar2 + ((int)uVar4 >> 3) + 0x50e) & 1 << uVar6) != 0) {
      *(char *)(iVar5 + 0x8a0) = (char)uVar1;
      uVar1 = FUN_0892ae34(0,uVar4);
      uVar6 = uVar1 & 0xff;
      *(char *)(iVar5 + 0x8a1) = (char)uVar1;
      piVar2 = (int *)FUN_0880cc48();
      if ((int)uVar6 < 0) {
        uVar1 = -(-uVar6 & 7) & 0x1f;
      }
      else {
        uVar1 = uVar1 & 7;
      }
      if (((uint)*(byte *)(*piVar2 + ((int)uVar6 >> 3) + 0x50e) & 1 << uVar1) == 0) {
        *(char *)(param_1 + 0x75) = *(char *)(param_1 + 0x75) + '\x01';
        piVar2 = (int *)FUN_0880cc48();
        if (*(uint *)(*piVar2 + 0x48c) == uVar4) {
          *(undefined *)(iVar5 + 0x8a3) = 1;
        }
      }
      else {
        *(undefined *)(iVar5 + 0x8a2) = 1;
      }
    }
    uVar3 = uVar3 + 1;
    iVar5 = iVar5 + 4;
  } while ((int)uVar3 < 6);
  return;
}

