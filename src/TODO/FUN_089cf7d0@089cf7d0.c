#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089cf7d0(undefined4 *param_1,undefined4 param_2)

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
      uVar3 = *(undefined4 *)(iVar1 + 0x44);
      uVar4 = *(undefined4 *)(iVar1 + 0x48);
      *param_1 = *(undefined4 *)(iVar1 + 0x40);
      uVar2 = *(undefined4 *)(iVar1 + 0x4c);
      param_1[1] = uVar3;
      uVar3 = *(undefined4 *)(iVar1 + 0x50);
      param_1[2] = uVar4;
      uVar4 = *(undefined4 *)(iVar1 + 0x54);
      param_1[3] = uVar2;
      uVar2 = *(undefined4 *)(iVar1 + 0x58);
      param_1[4] = uVar3;
      uVar3 = *(undefined4 *)(iVar1 + 0x5c);
      param_1[5] = uVar4;
      uVar4 = *(undefined4 *)(iVar1 + 0x60);
      param_1[6] = uVar2;
      uVar2 = *(undefined4 *)(iVar1 + 100);
      param_1[7] = uVar3;
      uVar3 = *(undefined4 *)(iVar1 + 0x68);
      param_1[8] = uVar4;
      uVar4 = *(undefined4 *)(iVar1 + 0x6c);
      param_1[9] = uVar2;
      uVar2 = *(undefined4 *)(iVar1 + 0x70);
      param_1[10] = uVar3;
      param_1[0xb] = uVar4;
      param_1[0xc] = uVar2;
      FUN_089bb790(*(undefined4 *)(iVar1 + 8));
    }
    FUN_089bb790(DAT_08ac5938[1]);
  }
  return bVar5;
}

