#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08870318(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined auStack_c0 [128];
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 *local_30;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (0 < iVar3) {
    if (iVar3 < 2) {
      iVar3 = FUN_089bda88(*(undefined4 *)(param_1 + 0x24),
                           PTR_s_data_battle_bakugan_bakugan_tex__08aba8b8,10,0,0);
      if (iVar3 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x10) = 2;
      uVar4 = *(undefined4 *)(param_1 + 0x24);
    }
    else {
      if (2 < iVar3) {
        return;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x24);
    }
    iVar3 = FUN_089bdb90(uVar4,0);
    if (iVar3 != 0) {
      local_40 = param_1;
      iVar3 = FUN_08870274(param_1 + 0x14,param_1 + 0x28);
      uVar4 = 1;
      if (iVar3 != 0) {
        local_3c = 1;
        ppuVar8 = &PTR_s_00_P_Dragonoid_N_U_08aba8c0;
        puVar9 = &DAT_08b00900;
        iVar3 = local_40;
        do {
          iVar7 = iVar3 + local_3c;
          iVar6 = 1;
          if ((1 < *(byte *)(iVar7 + 0x28)) && (1 < *(byte *)(iVar7 + 0x28))) {
            do {
              FUN_089b4c84(auStack_c0,"%s.%03d.tm2",*ppuVar8,iVar6);
              iVar3 = FUN_089be228(*(undefined4 *)(iVar3 + 0x24),auStack_c0);
              if (iVar3 == 0) {
                bVar1 = *(byte *)(iVar7 + 0x28);
              }
              else {
                uVar10 = *(undefined4 *)(iVar3 + 8);
                piVar5 = puVar9 + DAT_08aba910 * 2;
                local_34 = uVar4;
                local_30 = puVar9;
                FUN_089d8634();
                uVar4 = FUN_089d81a4();
                FUN_089d816c(1);
                iVar2 = FUN_089d7d74(uVar10,0,0);
                FUN_089d816c(uVar4);
                FUN_089d866c();
                piVar5[1] = iVar2;
                memcpy_jak(iVar2,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
                local_38 = 0;
                FUN_089d8634();
                uVar4 = FUN_089d81a4();
                FUN_089d816c(1);
                iVar2 = FUN_089d7d74(0x140,0,0);
                FUN_089d816c(uVar4);
                FUN_089d866c();
                puVar9 = local_30;
                uVar4 = local_34;
                iVar3 = local_38;
                if (iVar2 != 0) {
                  FUN_089f6cdc(iVar2,auStack_c0,piVar5[1],1);
                  iVar3 = iVar2;
                }
                *piVar5 = iVar3;
                *(char *)(iVar3 + 0x128) = (char)uVar4;
                DAT_08aba910 = DAT_08aba910 + 1;
                bVar1 = *(byte *)(iVar7 + 0x28);
              }
              iVar6 = iVar6 + 1;
              iVar3 = local_40;
            } while (iVar6 < (int)(uint)bVar1);
          }
          ppuVar8 = ppuVar8 + 1;
          local_3c = local_3c + 1;
        } while (local_3c < 0x15);
      }
      iVar3 = *(int *)(local_40 + 0x24);
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x20) + 0xc))
                  (iVar3 + *(short *)(*(int *)(iVar3 + 0x20) + 8),3);
        *(undefined4 *)(local_40 + 0x24) = 0;
      }
      FUN_089bf7a8(local_40,1);
    }
  }
  return;
}

