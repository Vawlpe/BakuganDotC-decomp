#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08839d7c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_1 + param_3 * 2;
  iVar3 = 0;
  uVar2 = 0xffffffff;
  if ((*(short *)(iVar1 + 0xb1e) == -1) && (0x30c < *(int *)(param_1 + 0xbc))) {
    *(undefined2 *)(iVar1 + 0xb1e) = 0;
    iVar1 = FUN_08888bc0(0x3f000000,param_2 + 0x434);
    if (iVar1 != 0) {
      iVar3 = 1;
    }
  }
  if (iVar3 != 0) {
    uVar2 = FUN_08838428(param_1,param_3,0);
  }
  FUN_08837e00(param_1,iVar3,uVar2,param_3);
  return;
}

