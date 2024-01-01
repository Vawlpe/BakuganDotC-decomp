#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08935e00(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x1af0) != 0) && (*(char *)(param_1 + 0x1b5c) != '\0')) {
    if (*(char *)(param_1 + 0x1b5d) == '\0') {
      FUN_089e0860();
      FUN_089df3b0(0x3e4ccccd,*(undefined4 *)(param_1 + 0x1af0),"12_editm_see_gauntlet_push",0);
      iVar1 = *(int *)(*(int *)(param_1 + 0x1af0) + 0x14);
      (**(code **)(iVar1 + 0x34))
                (0x3f000000,*(int *)(param_1 + 0x1af0) + (int)*(short *)(iVar1 + 0x30));
      iVar1 = *(int *)(*(int *)(param_1 + 0x1af0) + 0x14);
      (**(code **)(iVar1 + 0x3c))(*(int *)(param_1 + 0x1af0) + (int)*(short *)(iVar1 + 0x38));
      *(undefined *)(param_1 + 0x1b5d) = 1;
    }
    else if (*(char *)(*(int *)(param_1 + 0x1af0) + 0xb0) == '\x01') {
      FUN_089e0860();
      FUN_089df3b0(0x3e4ccccd,*(undefined4 *)(param_1 + 0x1af0),"12_editm_see_gauntlet",1);
      iVar1 = *(int *)(*(int *)(param_1 + 0x1af0) + 0x14);
      (**(code **)(iVar1 + 0x34))
                (0x3f000000,*(int *)(param_1 + 0x1af0) + (int)*(short *)(iVar1 + 0x30));
      iVar1 = *(int *)(*(int *)(param_1 + 0x1af0) + 0x14);
      (**(code **)(iVar1 + 0x3c))(*(int *)(param_1 + 0x1af0) + (int)*(short *)(iVar1 + 0x38));
      *(undefined *)(param_1 + 0x1b5c) = 0;
      *(undefined *)(param_1 + 0x1b5d) = 0;
    }
  }
  return;
}

