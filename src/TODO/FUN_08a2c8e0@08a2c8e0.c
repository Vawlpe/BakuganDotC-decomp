#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a2c8e0(int param_1,int **param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int *local_50;
  int local_1c;
  
  if (*(int *)(**param_2 + 0x5c) == 1) {
    if (*(int *)((*param_2)[1] + 0x5c) == 1) {
      local_50 = *param_2;
      local_90 = *(undefined4 *)(param_1 + 4);
      iVar4 = **(int **)(param_1 + 0xc);
      local_70 = *(undefined4 *)(iVar4 + 0x40);
      uStack_6c = *(undefined4 *)(iVar4 + 0x44);
      uStack_68 = *(undefined4 *)(iVar4 + 0x48);
      uStack_64 = *(undefined4 *)(iVar4 + 0x4c);
      iVar4 = *(int *)(param_1 + 4);
      local_60 = *(undefined4 *)(iVar4 + 0x10);
      uStack_5c = *(undefined4 *)(iVar4 + 0x14);
      uStack_58 = *(undefined4 *)(iVar4 + 0x18);
      uStack_54 = *(undefined4 *)(iVar4 + 0x1c);
      iVar4 = **(int **)(param_1 + 0xc);
      local_80 = *(undefined4 *)(iVar4 + 0x20);
      uStack_7c = *(undefined4 *)(iVar4 + 0x24);
      uStack_78 = *(undefined4 *)(iVar4 + 0x28);
      uStack_74 = *(undefined4 *)(iVar4 + 0x2c);
      local_8c = *(undefined4 *)(param_1 + 8);
      if ((**(int **)(param_1 + 0xc) != 0) && (**(int **)(param_1 + 0xc) != 0)) {
        if (**(int **)(param_1 + 0xc) == 0) {
          puVar3 = *(undefined4 **)(param_1 + 0xc);
        }
        else {
          iVar4 = ***(int ***)(param_1 + 0xc);
          (**(code **)(iVar4 + 0xc))((int)**(int ***)(param_1 + 0xc) + (int)*(short *)(iVar4 + 8),3)
          ;
          puVar3 = *(undefined4 **)(param_1 + 0xc);
        }
        *puVar3 = 0;
      }
      local_1c = 0;
      FUN_089d8634();
      uVar1 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar4 = FUN_089d7d74(0xa0,0,0);
      FUN_089d816c(uVar1);
      FUN_089d866c();
      if (iVar4 != 0) {
        FUN_088f908c(iVar4,&local_90);
        local_1c = iVar4;
      }
      **(int **)(param_1 + 0xc) = local_1c;
      return;
    }
    piVar2 = *(int **)(param_1 + 0xc);
  }
  else {
    piVar2 = *(int **)(param_1 + 0xc);
  }
  if (*(int *)(*piVar2 + 0x80) != 0) {
    FUN_088f9a1c(*(undefined4 *)(param_1 + 4));
  }
  return;
}

