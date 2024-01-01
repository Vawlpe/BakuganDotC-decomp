#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089cf6b4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  
  bVar5 = false;
  if ((((DAT_08ac5938 != (int *)0x0) && (DAT_08ac593c != '\0')) && (param_1 != (undefined4 *)0x0))
     && (*DAT_08ac5938 != 0)) {
    FUN_089bb728(DAT_08ac5938[1]);
    iVar1 = FUN_089cf8ec(param_2);
    bVar5 = iVar1 != 0;
    if (bVar5) {
      FUN_089bb728(*(undefined4 *)(iVar1 + 8));
      uVar3 = *(undefined4 *)(iVar1 + 0x10);
      uVar4 = *(undefined4 *)(iVar1 + 0x14);
      *param_1 = *(undefined4 *)(iVar1 + 0xc);
      uVar2 = *(undefined4 *)(iVar1 + 0x18);
      param_1[1] = uVar3;
      uVar3 = *(undefined4 *)(iVar1 + 0x1c);
      param_1[2] = uVar4;
      uVar4 = *(undefined4 *)(iVar1 + 0x20);
      param_1[3] = uVar2;
      uVar2 = *(undefined4 *)(iVar1 + 0x24);
      param_1[4] = uVar3;
      uVar3 = *(undefined4 *)(iVar1 + 0x28);
      param_1[5] = uVar4;
      uVar4 = *(undefined4 *)(iVar1 + 0x2c);
      param_1[6] = uVar2;
      uVar2 = *(undefined4 *)(iVar1 + 0x30);
      param_1[7] = uVar3;
      uVar3 = *(undefined4 *)(iVar1 + 0x34);
      param_1[8] = uVar4;
      uVar4 = *(undefined4 *)(iVar1 + 0x38);
      param_1[9] = uVar2;
      uVar2 = *(undefined4 *)(iVar1 + 0x3c);
      param_1[10] = uVar3;
      param_1[0xb] = uVar4;
      param_1[0xc] = uVar2;
      FUN_089bb790(*(undefined4 *)(iVar1 + 8));
    }
    FUN_089bb790(DAT_08ac5938[1]);
  }
  return bVar5;
}

