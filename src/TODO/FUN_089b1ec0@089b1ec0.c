#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b1ec0(undefined2 *param_1,uint param_2,uint param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int iVar10;
  
  iVar10 = ((uint)(byte)(&DAT_08ac3ef0)[param_2 & 0xff] + (param_3 & 0xff)) * 0x14;
  uVar1 = *(undefined2 *)(&DAT_08ac3d8a + iVar10);
  uVar2 = *(undefined2 *)(&DAT_08ac3d8c + iVar10);
  uVar3 = *(undefined2 *)(&DAT_08ac3d8e + iVar10);
  uVar4 = *(undefined2 *)(&DAT_08ac3d90 + iVar10);
  uVar5 = *(undefined2 *)(&DAT_08ac3d92 + iVar10);
  uVar6 = *(undefined2 *)(&DAT_08ac3d94 + iVar10);
  uVar7 = *(undefined2 *)(&DAT_08ac3d96 + iVar10);
  uVar8 = *(undefined2 *)(&DAT_08ac3d98 + iVar10);
  uVar9 = *(undefined2 *)(&DAT_08ac3d9a + iVar10);
  *param_1 = *(undefined2 *)(&DAT_08ac3d88 + iVar10);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  return;
}

