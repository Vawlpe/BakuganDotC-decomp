#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_08a0fd1c(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = param_1 * 0x24;
  uVar8 = 3;
  uVar5 = (uint)*(ushort *)(&DAT_08af1260 + iVar2);
  uVar6 = uVar5;
  if (uVar5 < param_2) {
    uVar6 = param_2;
  }
  if (3 < uVar6) {
    uVar8 = -param_3 & 3;
  }
  iVar3 = (*(code *)(&PTR_FUN_08af1258)[param_1 * 9])(uVar8 + (uVar6 - uVar5) + param_3 + 0x10);
  if (iVar3 == 0) {
    return (int *)0x0;
  }
  uVar6 = (param_2 + iVar3) - 1 & -param_2;
  iVar7 = *(int *)(&DAT_08af1264 + iVar2);
  piVar1 = (int *)(param_3 + uVar6 + 3 & 0xfffffffc);
  *(int **)(&DAT_08af1264 + iVar2) = piVar1;
  if (iVar7 != 0) {
    *(int **)(iVar7 + 4) = piVar1;
  }
  if (*(uint *)(&DAT_08af1274 + iVar2) == 0) {
    *(uint *)(&DAT_08af1274 + iVar2) = uVar6;
LAB_08a0fe40:
    piVar4 = *(int **)(&DAT_08af1278 + iVar2);
    if (piVar4 == (int *)0x0) {
      *(int **)(&DAT_08af1278 + iVar2) = piVar1;
      goto LAB_08a0fdfc;
    }
  }
  else {
    if (uVar6 < *(uint *)(&DAT_08af1274 + iVar2)) {
      *(uint *)(&DAT_08af1274 + iVar2) = uVar6;
      goto LAB_08a0fe40;
    }
    piVar4 = *(int **)(&DAT_08af1278 + iVar2);
    if (piVar4 == (int *)0x0) {
      *(int **)(&DAT_08af1278 + iVar2) = piVar1;
      goto LAB_08a0fdfc;
    }
  }
  if (piVar4 < piVar1) {
    *(int **)(&DAT_08af1278 + iVar2) = piVar1;
  }
LAB_08a0fdfc:
  piVar1[2] = iVar7;
  *(char *)(piVar1 + 3) = (char)param_1;
  *(char *)((int)piVar1 + 0xd) = (char)uVar6 - (char)iVar3;
  *(undefined2 *)((int)piVar1 + 0xe) = 1;
  *piVar1 = iVar3;
  piVar1[1] = 0;
  return piVar1;
}

