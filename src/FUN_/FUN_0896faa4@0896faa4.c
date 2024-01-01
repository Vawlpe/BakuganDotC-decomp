#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896faa4(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  memset_jak(param_1 + 0x74,0,1);
  memset_jak(param_1 + 0xb8c,0,0x10);
  FUN_0896f7fc(param_1,0);
  *(undefined *)(param_1 + 0xbb9) = 0;
  uVar5 = 0;
  do {
    if (uVar5 == 3) {
      uVar3 = FUN_0880cc48();
      iVar4 = FUN_0880d0ac(uVar3,7);
      if (iVar4 != 0) break;
      bVar1 = *(byte *)(param_1 + 0xbb9);
    }
    else {
      bVar1 = *(byte *)(param_1 + 0xbb9);
    }
    uVar2 = uVar5 & 0x1f;
    uVar5 = uVar5 + 1;
    *(byte *)(param_1 + 0xbb9) = bVar1 | (byte)(1 << uVar2);
  } while (uVar5 < 4);
  iVar4 = FUN_0880d354();
  if (iVar4 != 0) {
    *(undefined *)(param_1 + 0x74) = 1;
    *(byte *)(param_1 + 0xbb9) = *(byte *)(param_1 + 0xbb9) & 0xfe;
  }
  return;
}

