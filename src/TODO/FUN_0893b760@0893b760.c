#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893b760(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined auStack_90 [64];
  undefined auStack_50 [64];
  
  *(undefined4 *)(param_1 + 0x7a0) = 0;
  if ((*(int *)(param_1 + 0x794) != 0) && (*(char *)(param_1 + 0x5ee) == '\x05')) {
    strncpy(auStack_90,*(int *)(param_1 + 0x794) + 0xbd,0x40);
    uVar1 = FUN_089b5248(auStack_90,&DAT_08a9c8d0);
    strncpy(param_1 + 0x7a8,uVar1,0x40);
    FUN_089b4c84(auStack_50,"%s_motion.gmo",uVar1);
    uVar2 = FUN_089d9674();
    FUN_089d9914(uVar2,auStack_50);
    FUN_089e0860(*(undefined4 *)(param_1 + 0x794));
    FUN_089df3b0(0x3e4ccccd,*(undefined4 *)(param_1 + 0x794),uVar1,0);
    iVar3 = *(int *)(*(int *)(param_1 + 0x794) + 0x14);
    (**(code **)(iVar3 + 0x34))
              (0x3f800000,*(int *)(param_1 + 0x794) + (int)*(short *)(iVar3 + 0x30));
    iVar3 = *(int *)(*(int *)(param_1 + 0x794) + 0x14);
    (**(code **)(iVar3 + 0x3c))(*(int *)(param_1 + 0x794) + (int)*(short *)(iVar3 + 0x38));
  }
  return;
}

