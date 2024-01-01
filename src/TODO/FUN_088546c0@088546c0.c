#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088546c0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af192c;
  *(int *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0xa0,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    uVar1 = FUN_089be054(DAT_08ac520c,"particle_00.ptb");
    FUN_08823ae4(iVar2,uVar1);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x18) = iVar3;
  uVar1 = 0x85;
  iVar3 = FUN_088483fc(DAT_08ac5c90);
  if (iVar3 != 0) {
    uVar1 = 0x86;
  }
  iVar3 = FUN_088243d8(*(undefined4 *)(param_1 + 0x18),uVar1,DAT_08ac5c90 + 0x60);
  uVar1 = (**(code **)(*(int *)(param_2 + 0x14) + 0xa4))
                    (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0xa0));
  *(undefined4 *)(iVar3 + 0xd8) = uVar1;
  FUN_08823d74(*(undefined4 *)(param_1 + 0x18));
  DAT_08ac601c = 0;
  return param_1;
}

