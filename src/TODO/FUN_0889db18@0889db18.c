#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889db18(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar1 = FUN_0889da6c();
  if (iVar1 != 0) {
    uVar5 = 0;
    ppuVar4 = &PTR_PTR_s_f0_planttower01_08abd3bc;
    do {
      iVar1 = strstr(param_1 + 0xbd,*(undefined4 *)*ppuVar4);
      uVar5 = uVar5 + 1;
      if (iVar1 != 0) {
        iVar1 = 0;
        if (*(int *)(*ppuVar4 + 4) < 1) {
          return;
        }
        iVar6 = 0;
        do {
          iVar2 = FUN_089f5700(DAT_08ac5c68,
                               (&PTR_s_f0_light00_0_08abd3d0)
                               [(int)*(float *)(*ppuVar4 + iVar6 + 0x1c)]);
          *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
          puVar3 = (undefined4 *)(*ppuVar4 + iVar6 + 0x10);
          local_60 = *puVar3;
          local_5c = puVar3[1];
          local_58 = puVar3[2];
          local_54 = 0;
          *(undefined4 *)(iVar2 + 0x90) = local_60;
          *(undefined4 *)(iVar2 + 0x94) = local_5c;
          *(undefined4 *)(iVar2 + 0x98) = local_58;
          *(undefined4 *)(iVar2 + 0x9c) = 0;
          puVar3 = (undefined4 *)(iVar2 + 0x60);
          iVar2 = FUN_08a29834(*(int *)(param_1 + 0x130) + 0x80,&local_50,&local_60);
          *puVar3 = local_50;
          puVar3[1] = uStack_4c;
          puVar3[2] = uStack_48;
          puVar3[3] = uStack_44;
          *(undefined4 *)(iVar2 + 0x70) = 0x42a00000;
          *(undefined4 *)(iVar2 + 0x74) = 0x42a00000;
          *(undefined4 *)(iVar2 + 0x78) = 0x42a00000;
          *(undefined4 *)(iVar2 + 0x7c) = 0;
          *(undefined4 *)(iVar2 + 0xdc) = 2;
          FUN_088acaf8(param_1,iVar2);
          iVar1 = iVar1 + 1;
          iVar6 = iVar6 + 0x10;
        } while (iVar1 < *(int *)(*ppuVar4 + 4));
        return;
      }
      ppuVar4 = ppuVar4 + 1;
    } while (uVar5 < 5);
  }
  return;
}

