#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08948378(float param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_089edb80();
  uVar4 = param_2[1];
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  *(undefined4 *)(iVar3 + 0x30) = *param_2;
  *(undefined4 *)(iVar3 + 0x34) = uVar4;
  *(undefined4 *)(iVar3 + 0x38) = uVar1;
  *(undefined4 *)(iVar3 + 0x3c) = uVar2;
  iVar3 = FUN_089edb80();
  uVar4 = param_3[1];
  uVar1 = param_3[2];
  uVar2 = param_3[3];
  *(undefined4 *)(iVar3 + 0x40) = *param_3;
  *(undefined4 *)(iVar3 + 0x44) = uVar4;
  *(undefined4 *)(iVar3 + 0x48) = uVar1;
  *(undefined4 *)(iVar3 + 0x4c) = uVar2;
  uVar4 = FUN_089edb80();
  FUN_089edf24(uVar4,(int)param_1);
  return;
}

