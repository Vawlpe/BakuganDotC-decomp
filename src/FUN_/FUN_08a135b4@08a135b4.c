#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a135b4(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if (param_3 != 0) {
    iVar2 = param_1 * 0x24;
    uVar4 = (uint)(ushort)(&DAT_08af1348)[param_1 * 0x12];
    uVar6 = 3;
    uVar5 = uVar4;
    if (uVar4 <= param_2) {
      uVar5 = param_2;
    }
    if (3 < uVar5) {
      uVar6 = -param_3 & 3;
    }
    iVar3 = (*(code *)(&PTR_FUN_08af1340)[param_1 * 9])(uVar6 + param_3 + (uVar5 - uVar4) + 0x10);
    if (iVar3 != 0) {
      uVar5 = (param_2 + iVar3) - 1 & -param_2;
      iVar7 = *(int *)(&DAT_08af134c + iVar2);
      piVar1 = (int *)(param_3 + uVar5 + 3 & 0xfffffffc);
      *(int **)(&DAT_08af134c + iVar2) = piVar1;
      if (iVar7 != 0) {
        *(int **)(iVar7 + 4) = piVar1;
      }
      if (*(uint *)(&DAT_08af135c + iVar2) == 0) {
        *(uint *)(&DAT_08af135c + iVar2) = uVar5;
      }
      else if (uVar5 < *(uint *)(&DAT_08af135c + iVar2)) {
        *(uint *)(&DAT_08af135c + iVar2) = uVar5;
      }
      if (*(int **)(&DAT_08af1360 + iVar2) == (int *)0x0) {
        *(int **)(&DAT_08af1360 + iVar2) = piVar1;
      }
      else if (*(int **)(&DAT_08af1360 + iVar2) < piVar1) {
        *(int **)(&DAT_08af1360 + iVar2) = piVar1;
      }
      *(undefined2 *)((int)piVar1 + 0xe) = 1;
      piVar1[2] = iVar7;
      *(char *)(piVar1 + 3) = (char)param_1;
      *piVar1 = iVar3;
      piVar1[1] = 0;
      *(char *)((int)piVar1 + 0xd) = (char)(uVar5 - iVar3);
      return iVar3 + (uVar5 - iVar3 & 0xff);
    }
  }
  return 0;
}

