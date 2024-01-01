#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088396c8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = param_1 + param_3 * 2;
  iVar3 = 0;
  uVar4 = 0xffffffff;
  if (*(short *)(iVar5 + 0xb1e) == -1) {
    iVar2 = *(int *)(param_2 + 0x170);
    iVar6 = 0;
    if (iVar2 != 0) {
      iVar6 = FUN_08854e68(iVar2,0);
      iVar2 = *(int *)(param_2 + 0x170);
    }
    iVar7 = 0;
    if (iVar2 != 0) {
      iVar7 = FUN_08854e68(iVar2,1);
      iVar2 = *(int *)(param_2 + 0x170);
    }
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_08854e68(iVar2,2);
    }
    if (0x13 < iVar6 + iVar7 + iVar1) {
      *(undefined2 *)(iVar5 + 0xb1e) = 0;
      iVar6 = *(int *)(param_2 + 0x170);
      iVar5 = 0;
      if (iVar6 != 0) {
        iVar5 = FUN_08854e68(iVar6,3);
        iVar6 = *(int *)(param_2 + 0x170);
      }
      iVar2 = 0;
      if (iVar6 != 0) {
        iVar2 = FUN_08854e68(iVar6,4);
        iVar6 = *(int *)(param_2 + 0x170);
      }
      iVar7 = 0;
      if (iVar6 != 0) {
        iVar7 = FUN_08854e68(iVar6,5);
      }
      if (iVar5 + iVar2 + iVar7 == 0) {
        iVar3 = 1;
      }
    }
  }
  if (iVar3 != 0) {
    uVar4 = FUN_08838428(param_1,param_3,0);
  }
  FUN_08837e00(param_1,iVar3,uVar4,param_3);
  return;
}

