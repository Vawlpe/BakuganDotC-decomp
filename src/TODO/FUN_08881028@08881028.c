#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08881028(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  int iVar3;
  int iVar4;
  undefined (*pauVar5) [12];
  undefined (*pauVar6) [12];
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 in_V7D;
  undefined4 local_80;
  float local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined auStack_60 [4];
  float local_5c;
  
  if (*(int *)(param_1 + 0xf4) < 0x15) {
    pauVar5 = (undefined (*) [12])(param_1 + 0x70);
    if (*(int *)(param_1 + 0xf4) == 0) {
      auVar1 = vscl_t(*pauVar5,0x43480000);
      *(int *)*pauVar5 = auVar1._0_4_;
      *(int *)(param_1 + 0x74) = auVar1._4_4_;
      *(int *)(param_1 + 0x78) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x7c) = in_V7D;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      iVar3 = FUN_0884b248();
      if (iVar3 != 0) {
        iVar3 = FUN_0884b268();
        *(undefined4 *)(iVar3 + 0x4e0) = 0x40000000;
      }
    }
    else {
      pauVar6 = (undefined (*) [12])(param_1 + 0x60);
      if ((*(int *)(param_1 + 0xf4) == 8) && (iVar3 = FUN_0884b248(), iVar3 != 0)) {
        iVar3 = FUN_0884b268();
        *(undefined4 *)(iVar3 + 0x4e0) = 0;
      }
      iVar3 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar6,pauVar5,0x7d,3,0,
                           0x31bf337e);
      if (iVar3 == 0) {
        local_80 = *(undefined4 *)*pauVar6;
        local_7c = *(float *)(param_1 + 100);
        uStack_78 = *(undefined4 *)(param_1 + 0x68);
        uStack_74 = *(undefined4 *)(param_1 + 0x6c);
        uVar8 = vdot_t(*pauVar5,*pauVar5);
        fVar9 = (float)vsqrt_s(uVar8);
        fVar9 = fVar9 * 0.03 + 0.5;
        iVar7 = (int)fVar9;
        auVar1 = vscl_t(*pauVar5,1.0 / fVar9);
        local_70 = auVar1._0_4_;
        uStack_6c = auVar1._4_4_;
        uStack_68 = auVar1._8_4_;
        iVar3 = 0;
        if ((0 < iVar7) && (0 < iVar7)) {
          do {
            iVar4 = FUN_0889d57c(&local_80,auStack_60);
            if ((iVar4 != 0) && (local_7c - 200.0 < local_5c)) {
              FUN_08824024(DAT_08b00920,0xf5,auStack_60,param_1 + 0x80);
            }
            auVar1._4_4_ = local_7c;
            auVar1._0_4_ = local_80;
            auVar1._8_4_ = uStack_78;
            auVar2._4_4_ = uStack_6c;
            auVar2._0_4_ = local_70;
            auVar2._8_4_ = uStack_68;
            auVar1 = vadd_t(auVar1,auVar2);
            local_80 = auVar1._0_4_;
            local_7c = auVar1._4_4_;
            uStack_78 = auVar1._8_4_;
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar7);
        }
        uVar8 = *(undefined4 *)(param_1 + 0x6c);
        auVar1 = vadd_t(*pauVar6,*pauVar5);
        *(int *)*pauVar6 = auVar1._0_4_;
        *(int *)(param_1 + 100) = auVar1._4_4_;
        *(int *)(param_1 + 0x68) = auVar1._8_4_;
        *(undefined4 *)(param_1 + 0x6c) = uVar8;
        auVar1 = vscl_t(*pauVar5,0x3f666666);
        *(int *)*pauVar5 = auVar1._0_4_;
        *(int *)(param_1 + 0x74) = auVar1._4_4_;
        *(int *)(param_1 + 0x78) = auVar1._8_4_;
        *(undefined4 *)(param_1 + 0x7c) = in_V7D;
      }
      else {
        FUN_08823f5c(DAT_08b00920,0x7f,&DAT_08aba930);
        FUN_08824658(DAT_08b00920,0x26a,pauVar6);
        FUN_08824658(DAT_08b00920,0x26b,pauVar6);
        FUN_08876ee0(param_1);
        if (*(int *)(param_1 + 0xf4) < 9) {
          iVar3 = FUN_0884b268();
          *(undefined4 *)(iVar3 + 0x4e0) = 0;
        }
      }
    }
    return;
  }
  FUN_08824658(DAT_08b00920,0x26a,param_1 + 0x60);
  FUN_08824658(DAT_08b00920,0x26b,param_1 + 0x60);
  FUN_08876ee0(param_1);
  return;
}

