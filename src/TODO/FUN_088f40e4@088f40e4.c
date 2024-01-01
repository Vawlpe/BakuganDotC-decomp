#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f40e4(int param_1,uint param_2,undefined param_3,undefined4 *param_4,char param_5)

{
  undefined2 uVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  
  param_2 = param_2 & 0xff;
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0x48,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  piVar8 = &DAT_08b00d40 + param_2;
  piVar9 = (int *)(param_1 + param_2 * 4);
  iVar6 = 0;
  if (iVar4 != 0) {
    FUN_088f4d94(iVar4,param_2);
    iVar6 = iVar4;
  }
  *piVar8 = iVar6;
  *(undefined *)(iVar6 + 0x36) = *(undefined *)((int)param_4 + 0x12);
  puVar5 = (undefined4 *)*piVar8;
  uVar3 = param_4[1];
  uVar7 = param_4[2];
  *puVar5 = *param_4;
  puVar5[1] = uVar3;
  puVar5[2] = uVar7;
  uVar1 = *(undefined2 *)(param_4 + 3);
  iVar6 = *piVar8;
  *(undefined2 *)(iVar6 + 0xc) = 0;
  *(undefined2 *)(iVar6 + 0xe) = uVar1;
  *(undefined2 *)(iVar6 + 0x10) = 0;
  *(undefined *)(*piVar8 + 0x39) = *(undefined *)(param_4 + 5);
  *(undefined2 *)(*piVar8 + 0x30) = *(undefined2 *)((int)param_4 + 0xe);
  *(undefined *)(*piVar8 + 0x3b) = *(undefined *)((int)param_4 + 0x15);
  *(undefined *)(*piVar8 + 0x3c) = param_3;
  *(undefined *)(*piVar8 + 0x3e) = *(undefined *)((int)param_4 + 0x13);
  *(undefined *)(*piVar8 + 0x40) = *(undefined *)((int)param_4 + 0x13);
  iVar6 = *piVar8;
  uVar2 = FUN_088f40bc(param_1,*(undefined *)((int)param_4 + 0x12));
  *(undefined *)(iVar6 + 0x37) = uVar2;
  *(undefined *)(*piVar8 + 0x42) = *(undefined *)((int)param_4 + 0x17);
  *(char *)(*piVar8 + 0x45) = (char)*(undefined2 *)(param_4 + 4);
  if ((param_5 == '\0') || (*(char *)((int)param_4 + 0x12) != '\f')) {
    iVar6 = FUN_088e0454(param_2,*piVar8);
    *piVar9 = iVar6;
    (**(code **)(*(int *)(iVar6 + 0x14) + 0x6c))(iVar6 + *(short *)(*(int *)(iVar6 + 0x14) + 0x68));
  }
  else {
    iVar6 = FUN_088e0574(param_2,*piVar8);
    *piVar9 = iVar6;
    (**(code **)(*(int *)(iVar6 + 0x14) + 0x6c))(iVar6 + *(short *)(*(int *)(iVar6 + 0x14) + 0x68));
  }
  return;
}

