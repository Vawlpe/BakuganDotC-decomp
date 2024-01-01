#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b292c(int param_1,undefined4 *param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,undefined2 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined2 *)(param_1 + 0x32) = param_3;
  *(undefined2 *)(param_1 + 0x38) = param_3;
  *(undefined2 *)(param_1 + 0x30) = param_4;
  *(undefined2 *)(param_1 + 0x34) = param_5;
  *(undefined2 *)(param_1 + 0x36) = param_6;
  switch(*(undefined4 *)(DAT_08ac58c4 + 4)) {
  case 0:
  case 1:
  case 2:
  case 3:
    piVar4 = (int *)FUN_0880cc48();
    *(undefined *)(*piVar4 + 0x80) = 0;
    return;
  case 8:
  case 9:
  case 10:
  case 0xb:
    piVar4 = (int *)FUN_0880cc48();
    *(undefined *)(*piVar4 + 0x80) = 1;
  }
  return;
}

