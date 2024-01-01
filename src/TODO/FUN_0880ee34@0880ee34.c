#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880ee34(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  
  sVar1 = FUN_089c9d1c();
  piVar4 = (int *)FUN_089c9ed8(param_1,2);
  sVar2 = FUN_089c9d1c(param_1);
  iVar5 = FUN_089c9da8(param_1);
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  uVar7 = 2;
  local_34 = 0.0;
  local_40 = FUN_089c9e3c(param_1);
  local_3c = FUN_089c9e3c(param_1);
  local_38 = FUN_089c9e3c(param_1);
  local_34 = (float)FUN_089c9e3c(param_1);
  local_34 = local_34 * 0.01745329;
  sVar3 = FUN_089c9d1c(param_1);
  if (((iVar5 < 1) || (iVar5 >= 0x15)) && ((iVar5 < 0x15 || (0x20 < iVar5)))) {
    return 0;
  }
  if (sVar1 == 1) {
    uVar7 = 4;
  }
  iVar6 = FUN_0886f934(iVar5,uVar7,&local_40);
  *piVar4 = iVar6;
  *(int *)(iVar6 + 0x6a0) = (int)sVar2;
  FUN_08862ba4(iVar6);
  *(undefined4 *)(iVar6 + 0x150) = 4;
  FUN_088625e8(iVar6,5);
  FUN_0889acb4(iVar6,(int)sVar3);
  if (sVar1 != 2) {
    FUN_0889ab54(iVar6,1);
  }
  if (sVar1 == 1) {
    *(undefined4 *)(*(int *)(iVar6 + 0x168) + 0x14) = 0;
    FUN_08888a64(iVar6 + 0x434,0);
    if (iVar5 == 0x15) {
      FUN_08886c58(0x42700000,iVar6 + 0x434);
      *(undefined4 *)(iVar6 + 0x6b8) = 0;
      *(undefined4 *)(*(int *)(iVar6 + 0x168) + 0x14) = 0xffffbff3;
    }
    iVar5 = *(int *)(iVar6 + 0x14);
  }
  else {
    iVar5 = *(int *)(iVar6 + 0x14);
  }
  (**(code **)(iVar5 + 0x3c))(iVar6 + *(short *)(iVar5 + 0x38));
  return 0;
}

