#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089926d4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar2 = FUN_089f2178(0x43af0000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),1);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar2);
    uVar2 = FUN_089f2178(0x43a00000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),2);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar2);
    uVar2 = FUN_089f2178(0x43b40000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),4);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar2);
  }
  uVar1 = DAT_08b0019c;
  uVar4 = DAT_08b00198;
  uVar2 = DAT_08b00194;
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar3 = *(int *)(param_1 + 0x94);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x90);
    *(undefined4 *)(iVar3 + 0xc0) = DAT_08b00190;
    *(undefined4 *)(iVar3 + 0xc4) = uVar2;
    *(undefined4 *)(iVar3 + 200) = uVar4;
    *(undefined4 *)(iVar3 + 0xcc) = uVar1;
    uVar4 = *(undefined4 *)(param_1 + 0x90);
    uVar2 = FUN_089f2178(0x43b40000);
    FUN_089f5084(uVar4,uVar2);
    iVar3 = *(int *)(param_1 + 0x94);
  }
  uVar1 = DAT_08b0019c;
  uVar4 = DAT_08b00198;
  uVar2 = DAT_08b00194;
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x94);
    *(undefined4 *)(iVar3 + 0xc0) = DAT_08b00190;
    *(undefined4 *)(iVar3 + 0xc4) = uVar2;
    *(undefined4 *)(iVar3 + 200) = uVar4;
    *(undefined4 *)(iVar3 + 0xcc) = uVar1;
    uVar4 = *(undefined4 *)(param_1 + 0x94);
    uVar2 = FUN_089f2178(0x43b40000);
    FUN_089f5084(uVar4,uVar2);
  }
  return;
}

