#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e4c94(int param_1,int param_2,int param_3)

{
  undefined auVar1 [12];
  int iVar2;
  int iVar3;
  undefined (*pauVar4) [12];
  int iVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float local_a0 [4];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined (*local_4c) [12];
  int local_48;
  int local_44;
  undefined (*local_40) [12];
  undefined4 *local_3c;
  undefined4 *local_38;
  
  iVar2 = FUN_089e98b0(param_2,param_3);
  if (iVar2 != 0) {
    local_a0[0] = INFINITY;
    if (*(int *)(param_2 + 0x20) == 0) {
      FUN_089e4c94(param_1,*(undefined4 *)(param_2 + 0x28),param_3);
      FUN_089e4c94(param_1,*(undefined4 *)(param_2 + 0x2c),param_3);
    }
    else {
      iVar2 = 0;
      if (0 < *(int *)(param_2 + 0x20)) {
        local_4c = (undefined (*) [12])(param_3 + 0x20);
        local_38 = &DAT_08af8390;
        local_3c = &DAT_08af83a0;
        local_40 = (undefined (*) [12])(param_3 + 0x30);
        iVar7 = 0;
        local_48 = param_2;
        local_44 = param_3;
        do {
          iVar5 = *(int *)(param_1 + 0x14) +
                  (uint)*(ushort *)(*(int *)(local_48 + 0x24) + iVar7) * 10;
          uVar6 = (uint)*(char *)(DAT_08af83b0 + ((int)*(char *)(iVar5 + 8) & 0xfU));
          if (((((uVar6 == 0xffffffff) || ((1 << (uVar6 & 0x1f) & DAT_08af8380) != 0)) &&
               (pauVar4 = (undefined (*) [12])
                          (*(int *)(param_1 + 0xc) + (uint)*(ushort *)(iVar5 + 6) * 0x10),
               fVar8 = (float)vdot_t(*pauVar4,*local_4c), 0.0 <= fVar8 - *(float *)pauVar4[1])) &&
              ((iVar3 = FUN_089e4a8c(param_1,iVar5,local_44,local_a0), iVar3 != 0 &&
               ((DAT_08ac5ce8 == (code *)0x0 || (iVar3 = (*DAT_08ac5ce8)(param_1,iVar5), iVar3 != 0)
                ))))) && (local_a0[0] < DAT_08b002a0)) {
            DAT_08b002a0 = local_a0[0];
            DAT_08b00280 = *local_38;
            DAT_08b00284 = local_38[1];
            DAT_08b00288 = local_38[2];
            DAT_08b0028c = local_38[3];
            DAT_08b002a8 = DAT_08af8384;
            DAT_08b002b8 = DAT_08af8388;
            DAT_08b002a4 = DAT_08af838c;
            local_68 = DAT_08af838c;
            local_6c = DAT_08af838c;
            local_70 = DAT_08af838c;
            local_64 = 0;
            auVar1._4_4_ = DAT_08af838c;
            auVar1._0_4_ = DAT_08af838c;
            auVar1._8_4_ = DAT_08af838c;
            auVar1 = vmul_t(*local_40,auVar1);
            local_80 = auVar1._0_4_;
            uStack_7c = auVar1._4_4_;
            uStack_78 = auVar1._8_4_;
            uStack_84 = *(undefined4 *)local_4c[1];
            auVar1 = vadd_t(*local_4c,auVar1);
            local_90 = auVar1._0_4_;
            uStack_8c = auVar1._4_4_;
            uStack_88 = auVar1._8_4_;
            DAT_08b002ac = param_1;
            DAT_08b002b0 = iVar5;
            DAT_08b002b4 = uVar6;
            *local_3c = local_90;
            local_3c[1] = uStack_8c;
            local_3c[2] = uStack_88;
            local_3c[3] = uStack_84;
            DAT_08ac5c98 = 1;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 2;
        } while (iVar2 < *(int *)(local_48 + 0x20));
      }
    }
  }
  return;
}

