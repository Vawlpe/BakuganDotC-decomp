#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088a1388(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af23fc;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x30);
  *puVar3 = in_V72;
  *(undefined4 *)(param_1 + 0x34) = in_V76;
  *(undefined4 *)(param_1 + 0x38) = in_V7A;
  *(undefined4 *)(param_1 + 0x3c) = in_V7E;
  iVar2 = FUN_088be254();
  if (iVar2 == 0) {
    uVar1 = FUN_0889e854(puVar3);
  }
  else {
    uVar1 = FUN_088d446c(puVar3);
  }
  *(undefined *)(param_1 + 0x10) = uVar1;
  return param_1;
}

