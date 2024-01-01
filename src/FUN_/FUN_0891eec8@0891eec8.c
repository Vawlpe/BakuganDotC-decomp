#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891eec8(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  if (*(byte *)(param_1 + 0x20f8) == 0) {
    cVar1 = *(char *)(param_1 + 0x77);
    if (cVar1 < '\x01') {
      if (-1 < cVar1) {
        FUN_0890a598(param_1,0);
      }
    }
    else if (cVar1 < '\x02') {
      FUN_0890a598(param_1,1);
    }
    else if (cVar1 < '\x03') {
      FUN_0892be50();
      piVar2 = (int *)FUN_0880cc48();
      piVar3 = (int *)FUN_0880cc48();
      uVar6 = *(uint *)(*piVar3 + 0x48c);
      iVar5 = *piVar2 + ((int)(uVar6 + ((uint)((int)uVar6 >> 3) >> 0x1d)) >> 3);
      if ((int)uVar6 < 0) {
        uVar6 = -(-uVar6 & 7) & 0x1f;
      }
      else {
        uVar6 = uVar6 & 7;
      }
      *(byte *)(iVar5 + 0x525) = *(byte *)(iVar5 + 0x525) | (byte)(1 << uVar6);
      piVar2 = (int *)FUN_0880cc48();
      *(ushort *)(*piVar2 + 0x82) = *(ushort *)(*piVar2 + 0x82) & 0xffbf;
      FUN_0891ee2c(param_1,1);
      FUN_089b1cac(0,1);
      uVar4 = FUN_0880cc48();
      iVar5 = FUN_0880d0ac(uVar4,0x2e);
      if (iVar5 == 0) {
        FUN_0890a598(param_1,2);
      }
      else {
        FUN_0890a598(param_1,3);
      }
    }
  }
  else if (*(byte *)(param_1 + 0x20f8) < 2) {
    FUN_0890a598(param_1,4);
    FUN_0891ee2c(param_1,0);
  }
  return;
}

