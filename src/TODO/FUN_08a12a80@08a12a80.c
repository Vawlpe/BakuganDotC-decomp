#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a12a80(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  
  if (param_3 == (int *)0x0) {
    param_3 = (int *)(param_1 + 0xc + param_2 * 0x10);
  }
  if (*param_3 == 0) {
    iVar7 = param_3[2];
    if (param_3[1] == 0) {
      uVar12 = 0x10;
      if (iVar7 == 0) {
        uVar12 = 4;
      }
    }
    else {
      uVar12 = 0x40;
    }
  }
  else {
    iVar7 = param_3[2];
    uVar12 = 0x80;
  }
  iVar7 = *param_3 + param_3[1] + iVar7 + param_3[3];
  uVar10 = 1;
  if (iVar7 != 0) {
    iVar6 = param_2 * 0x24;
    uVar5 = (uint)(ushort)(&DAT_08af1348)[param_2 * 0x12];
    uVar8 = 3;
    uVar4 = uVar5;
    if (uVar5 <= uVar12) {
      uVar4 = uVar12;
    }
    if (3 < uVar4) {
      uVar8 = -iVar7 & 3;
    }
    iVar3 = (*(code *)(&PTR_FUN_08af1340)[param_2 * 9])(uVar8 + iVar7 + (uVar4 - uVar5) + 0x10);
    uVar10 = 0;
    if (iVar3 != 0) {
      uVar12 = (uVar12 + iVar3) - 1 & -uVar12;
      iVar11 = *(int *)(&DAT_08af134c + iVar6);
      piVar1 = (int *)(iVar7 + uVar12 + 3 & 0xfffffffc);
      *(int **)(&DAT_08af134c + iVar6) = piVar1;
      if (iVar11 != 0) {
        *(int **)(iVar11 + 4) = piVar1;
      }
      if (*(uint *)(&DAT_08af135c + iVar6) == 0) {
        *(uint *)(&DAT_08af135c + iVar6) = uVar12;
      }
      else if (uVar12 < *(uint *)(&DAT_08af135c + iVar6)) {
        *(uint *)(&DAT_08af135c + iVar6) = uVar12;
      }
      if (*(int **)(&DAT_08af1360 + iVar6) == (int *)0x0) {
        cVar2 = (char)uVar12 - (char)iVar3;
      }
      else {
        cVar2 = (char)uVar12 - (char)iVar3;
        if (piVar1 <= *(int **)(&DAT_08af1360 + iVar6)) {
          *(char *)((int)piVar1 + 0xd) = cVar2;
          *(char *)(piVar1 + 3) = (char)param_2;
          piVar9 = (int *)(param_1 + 0x3c + param_2 * 0x10);
          *piVar1 = iVar3;
          *(int **)(param_2 * 4 + param_1) = piVar1;
          iVar7 = *piVar1 + (uint)*(byte *)((int)piVar1 + 0xd);
          iVar6 = iVar7 + *param_3;
          iVar3 = iVar6 + param_3[1];
          piVar9[3] = iVar3 + param_3[2];
          piVar1[2] = iVar11;
          *(undefined2 *)((int)piVar1 + 0xe) = 1;
          piVar1[1] = 0;
          *piVar9 = iVar7;
          piVar9[1] = iVar6;
          piVar9[2] = iVar3;
          return 1;
        }
      }
      *(int **)(&DAT_08af1360 + iVar6) = piVar1;
      uVar10 = 1;
      *(char *)((int)piVar1 + 0xd) = cVar2;
      piVar9 = (int *)(param_1 + 0x3c + param_2 * 0x10);
      *(char *)(piVar1 + 3) = (char)param_2;
      *piVar1 = iVar3;
      *(int **)(param_2 * 4 + param_1) = piVar1;
      iVar7 = *piVar1 + (uint)*(byte *)((int)piVar1 + 0xd);
      iVar6 = iVar7 + *param_3;
      iVar3 = iVar6 + param_3[1];
      piVar9[3] = iVar3 + param_3[2];
      piVar1[2] = iVar11;
      *(undefined2 *)((int)piVar1 + 0xe) = 1;
      piVar1[1] = 0;
      *piVar9 = iVar7;
      piVar9[1] = iVar6;
      piVar9[2] = iVar3;
    }
  }
  return uVar10;
}

