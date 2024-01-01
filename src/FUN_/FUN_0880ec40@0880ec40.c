#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880ec40(undefined4 param_1)

{
  bool bVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  
  sVar2 = FUN_089c9d1c();
  piVar3 = (int *)FUN_089c9ed8(param_1,2);
  iVar4 = FUN_089c9da8(param_1);
  iVar5 = FUN_089c9da8(param_1);
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  bVar1 = false;
  local_24 = 0.0;
  local_30 = FUN_089c9e3c(param_1);
  local_2c = FUN_089c9e3c(param_1);
  local_28 = FUN_089c9e3c(param_1);
  local_24 = (float)FUN_089c9e3c(param_1);
  local_24 = local_24 * 0.01745329;
  if (sVar2 == 1) {
    iVar5 = 4;
  }
  if (iVar4 == 0) {
    uVar6 = FUN_0880cc48(0);
    iVar4 = FUN_0880d0ac(uVar6,3);
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    if (iVar5 == 4) {
      iVar4 = 1;
    }
    bVar1 = true;
  }
  iVar4 = FUN_0886f934(iVar4,iVar5,&local_30);
  *piVar3 = iVar4;
  FUN_08862ba4(iVar4);
  if (bVar1) {
    *(undefined *)(iVar4 + 0x158) = 1;
    *(undefined4 *)(iVar4 + 0x268) = 0;
    *(undefined4 *)(iVar4 + 0x150) = 0;
    FUN_088625e8(iVar4,1);
    if (sVar2 == 1) {
      FUN_08888a64(iVar4 + 0x434,4);
      iVar5 = (**(code **)(*(int *)(iVar4 + 0x14) + 0x94))
                        (iVar4 + *(short *)(*(int *)(iVar4 + 0x14) + 0x90));
      if (iVar5 != 0) {
        *(undefined *)(iVar4 + 0x6f5) = 1;
      }
    }
  }
  else {
    *(undefined4 *)(iVar4 + 0x150) = 4;
    FUN_088625e8(iVar4,5);
  }
  if (bVar1) {
    iVar5 = FUN_0884b248();
    if (iVar5 != 0) {
      if (DAT_08aba77c == '\0') {
        iVar5 = *(int *)(iVar4 + 0x14);
        goto LAB_0880edf8;
      }
      *(undefined *)(*(int *)(iVar4 + 0x168) + 0xc) = 1;
    }
    iVar5 = *(int *)(iVar4 + 0x14);
  }
  else {
    iVar5 = *(int *)(iVar4 + 0x14);
  }
LAB_0880edf8:
  (**(code **)(iVar5 + 0x3c))(iVar4 + *(short *)(iVar5 + 0x38));
  return 0;
}

