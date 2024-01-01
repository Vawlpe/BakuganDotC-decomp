#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891d184(undefined *param_1,int param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  piVar1 = (int *)FUN_0880cc48();
  uVar8 = (uint)*(byte *)(*piVar1 + (uint)*(byte *)(param_2 + 0x78) + 0x84);
  puVar7 = &DAT_08a853d8;
  if (uVar8 == 0) {
    uVar9 = 0xff;
    uVar2 = 0xff;
  }
  else {
    uVar9 = (int)(uVar8 - 0xe) % 3 & 0xff;
    uVar2 = FUN_0891c54c(1,(int)(uVar8 - 0xe) / 3 & 0xff);
    uVar2 = uVar2 & 0xff;
  }
  uVar5 = *(undefined4 *)(puVar7 + ((param_4 & 0xff) * 3 + (param_3 & 0xff)) * 0x18 + 8);
  if (uVar8 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(puVar7 + (uVar2 * 3 + uVar9) * 0x18 + 8);
  }
  piVar1 = (int *)FUN_0880cc48();
  iVar10 = *(int *)(*piVar1 + 0x464);
  uVar3 = FUN_0880cc48();
  iVar4 = FUN_0880d0ac(uVar3,0x2d);
  *param_1 = (char)uVar9;
  param_1[1] = (char)uVar2;
  *(undefined4 *)(param_1 + 4) = uVar5;
  *(undefined4 *)(param_1 + 8) = uVar6;
  *(int *)(param_1 + 0xc) = iVar10 - iVar4;
  return;
}

