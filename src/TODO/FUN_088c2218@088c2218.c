#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c2218(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  param_2 = param_2 & 0xff;
  if (param_2 < 6) {
    if (4 < param_2) {
      uVar1 = FUN_0881a300(0xc,0x41);
      *(uint *)(*(int *)(param_1 + 0x6b4) + 0xd0) = *(uint *)(*(int *)(param_1 + 0x6b4) + 0xd0) | 1;
      *(undefined *)(param_1 + 0x6e0) = 1;
      iVar2 = *(int *)(param_1 + 0x6b0);
      goto LAB_088c22d8;
    }
  }
  else if (param_2 < 7) {
    uVar1 = FUN_0881a300(0xc,0x42);
    *(uint *)(*(int *)(param_1 + 0x6b4) + 0xd0) = *(uint *)(*(int *)(param_1 + 0x6b4) + 0xd0) | 1;
    *(undefined *)(param_1 + 0x6e0) = 1;
    iVar2 = *(int *)(param_1 + 0x6b0);
    goto LAB_088c22d8;
  }
  uVar1 = FUN_0881a300(0xc,param_2 + 0x31);
  *(uint *)(*(int *)(param_1 + 0x6b4) + 0xd0) =
       *(uint *)(*(int *)(param_1 + 0x6b4) + 0xd0) & 0xfffffffe;
  *(undefined *)(param_1 + 0x6e0) = 0;
  iVar2 = *(int *)(param_1 + 0x6b0);
LAB_088c22d8:
  if (iVar2 != 0) {
    FUN_089f5124(*(undefined4 *)(param_1 + 0x5f4),iVar2);
  }
  iVar2 = FUN_088c1680(param_1,uVar1);
  *(int *)(param_1 + 0x6b0) = iVar2;
  *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
  if (*(char *)(param_1 + 0x6e0) != '\0') {
    FUN_088c1cd8(param_1);
  }
  return;
}

