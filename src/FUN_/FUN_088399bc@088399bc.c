#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088399bc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_3 != 0) {
    iVar6 = 0;
    uVar5 = 0xffffffff;
    if (*(short *)(param_1 + param_4 * 2 + 0xb1e) == -1) {
      iVar1 = *(int *)(param_3 + 0x170);
      iVar4 = 0;
      if (iVar1 != 0) {
        iVar4 = FUN_08854e68(iVar1,0xf);
        iVar1 = *(int *)(param_3 + 0x170);
      }
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = FUN_08854e68(iVar1,10);
        iVar1 = *(int *)(param_3 + 0x170);
      }
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = FUN_08854e68(iVar1,0xb);
      }
      if (4 < iVar4 + iVar3 + iVar2) {
        iVar6 = 1;
      }
    }
    if (iVar6 != 0) {
      uVar5 = FUN_08838428(param_1,param_4,0);
    }
    FUN_08837e00(param_1,iVar6,uVar5,param_4);
  }
  return;
}

