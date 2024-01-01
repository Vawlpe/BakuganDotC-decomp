#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08839bd8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 != 0) {
    iVar4 = 0;
    if (((*(short *)(param_1 + 0xb3e) != -1) && (*(short *)(param_1 + 0xb40) != -1)) &&
       (*(short *)(param_1 + param_4 * 2 + 0xb1e) == -1)) {
      iVar1 = *(int *)(param_3 + 0x170);
      iVar5 = 0;
      if (iVar1 != 0) {
        iVar5 = FUN_08854e68(iVar1,0xf);
        iVar1 = *(int *)(param_3 + 0x170);
      }
      iVar6 = 0;
      if (iVar1 != 0) {
        iVar6 = FUN_08854e68(iVar1,10);
        iVar1 = *(int *)(param_3 + 0x170);
      }
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = FUN_08854e68(iVar1,0xb);
      }
      if (0xe < iVar5 + iVar6 + iVar3) {
        iVar4 = 1;
      }
    }
    uVar2 = 0xffffffff;
    if (iVar4 != 0) {
      uVar2 = FUN_08838428(param_1,param_4,0);
    }
    FUN_08837e00(param_1,iVar4,uVar2,param_4);
  }
  return;
}

