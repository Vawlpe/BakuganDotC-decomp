#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08921fac(int param_1,char param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x2258);
  if (param_2 == '\0') {
    if (iVar3 == 0) {
      return 1;
    }
    *(int *)(param_1 + 0x2258) = iVar3 + -100;
    uVar1 = DONE_Get_DAT_08AAC9E0();
    iVar3 = FUN_0880d0ac(uVar1,0x2d);
    uVar1 = DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar1,0x2d,iVar3 + 100);
  }
  else {
    if (iVar3 == 0) {
      return 1;
    }
    *(int *)(param_1 + 0x2258) = iVar3 + -100;
    uVar1 = DONE_Get_DAT_08AAC9E0();
    iVar3 = FUN_0880d0ac(uVar1,0x2d);
    uVar1 = DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar1,0x2d,iVar3 + -100);
  }
  uVar1 = DONE_Get_DAT_08AAC9E0();
  uVar1 = FUN_0880d0ac(uVar1,0x2d);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0xac);
  FUN_0891fd70(*(undefined4 *)(iVar3 + 0x60),*(undefined4 *)(iVar3 + 100),param_1,uVar1,0x2b,1);
  piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
  iVar5 = *(int *)(*piVar2 + 0x464);
  uVar1 = DONE_Get_DAT_08AAC9E0();
  iVar3 = FUN_0880d0ac(uVar1,0x2d);
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 200);
  FUN_0891fd70(*(undefined4 *)(iVar4 + 0x60),*(undefined4 *)(iVar4 + 100),param_1,iVar5 - iVar3,0x32
               ,0);
  return 0;
}

