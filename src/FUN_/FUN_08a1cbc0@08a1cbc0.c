#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a1cbc0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined uVar1;
  undefined uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) {
    if (param_1 != param_2) {
      FUN_08a14304();
      uVar6 = *(undefined4 *)(param_2 + 4);
      uVar3 = *(undefined2 *)(param_2 + 0xe);
      uVar4 = *(undefined2 *)(param_2 + 8);
      uVar5 = *(undefined2 *)(param_2 + 10);
      uVar1 = *(undefined *)(param_2 + 0xc);
      uVar2 = *(undefined *)(param_2 + 0xd);
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
      *(undefined2 *)(param_1 + 8) = uVar4;
      *(undefined2 *)(param_1 + 10) = uVar5;
      *(undefined *)(param_1 + 0xc) = uVar1;
      *(undefined *)(param_1 + 0xd) = uVar2;
      *(undefined2 *)(param_1 + 0xe) = uVar3;
      *(undefined4 *)(param_1 + 4) = uVar6;
      FUN_08a13120(0,uVar6);
    }
    return param_1;
  }
  return 0;
}

