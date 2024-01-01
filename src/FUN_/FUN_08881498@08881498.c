#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08881498(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_28;
  
  if (*(int *)(param_1 + 0xf4) == 0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    FUN_08877060(param_1,0xa00029,0,0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x74) = 0;
    if (0x14 < *(int *)(param_1 + 0xf4)) {
      *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x108) * 0.9;
    }
    if (0x28 < *(int *)(param_1 + 0xf4)) {
      iVar3 = FUN_08823f5c(DAT_08b00920,0xf6,param_1 + 0x60);
      iVar6 = *(int *)(param_1 + 0xb0);
      *(int *)(iVar3 + 0x1fc) = iVar6;
      if (iVar6 != 0) {
        *(undefined4 *)(iVar3 + 0x200) = *(undefined4 *)(iVar6 + 0xc);
      }
      FUN_08876ee0(param_1);
      iVar3 = 0;
      do {
        local_28 = 0;
        FUN_089d8634();
        uVar4 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar5 = FUN_089d7d74(0x160,0,0);
        FUN_089d816c(uVar4);
        FUN_089d866c();
        iVar6 = local_28;
        if (iVar5 != 0) {
          FUN_08876d00(iVar5,*(undefined4 *)(param_1 + 0xb0),0x5e);
          iVar6 = iVar5;
        }
        uVar4 = vmul_s((float)iVar3 * 0.785398,in_V7C);
        auVar2 = vrot_q(uVar4,1,0,2,0);
        auVar1 = auVar2._0_12_;
        uVar4 = vdot_t(auVar1,auVar1);
        uVar7 = vcmp_s(8,uVar4,auVar2._0_4_);
        vrsq_s(uVar4);
        uVar4 = vcmovt_s(in_V7D,(byte)uVar7 & 1);
        vpfxd(4,4,4,5);
        auVar1 = vscl_t(auVar1,uVar4);
        local_40 = auVar1._0_4_;
        uStack_3c = auVar1._4_4_;
        uStack_38 = auVar1._8_4_;
        FUN_08877904(iVar6,param_1 + 0x60,&local_40,0);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 8);
      FUN_08877060(param_1,0x200098,0,0,0);
      return;
    }
  }
  FUN_08878e5c(0x3dcccccd,*(undefined4 *)(param_1 + 0x10c),param_1,0x7f,0xb0,0xb0);
  return;
}

