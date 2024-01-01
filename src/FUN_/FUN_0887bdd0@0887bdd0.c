#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887bdd0(int param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined (*pauVar6) [12];
  undefined (*pauVar7) [12];
  float fVar8;
  undefined4 in_V7D;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (0x3c < *(int *)(param_1 + 0xf4)) {
    FUN_08824790(DAT_08b00920,0x98,param_1 + 0x60,2);
    FUN_08824790(DAT_08b00920,0x1ce,param_1 + 0x60,2);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    FUN_08876ee0(param_1);
    return;
  }
  fVar8 = *(float *)(param_1 + 0x104) + (60.0 - *(float *)(param_1 + 0x104)) * 0.2;
  *(float *)(param_1 + 0x104) = fVar8;
  if (fVar8 <= 50.0) {
    iVar5 = *(int *)(param_1 + 0xbc);
  }
  else {
    *(undefined4 *)(param_1 + 0x104) = 0x42480000;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    iVar5 = *(int *)(param_1 + 0xbc);
  }
  *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)(param_1 + 0x104);
  pauVar6 = (undefined (*) [12])(param_1 + 0x90);
  if (*(int *)(param_1 + 0xf4) == 0) {
    pauVar7 = (undefined (*) [12])(param_1 + 0x70);
    uVar2 = *(undefined4 *)(param_1 + 0x74);
    uVar3 = *(undefined4 *)(param_1 + 0x78);
    uVar4 = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)*pauVar6 = *(undefined4 *)*pauVar7;
    *(undefined4 *)(param_1 + 0x94) = uVar2;
    *(undefined4 *)(param_1 + 0x98) = uVar3;
    *(undefined4 *)(param_1 + 0x9c) = uVar4;
    auVar1 = vscl_t(*pauVar6,0xc3480000);
    *(int *)*pauVar6 = auVar1._0_4_;
    *(int *)(param_1 + 0x94) = auVar1._4_4_;
    *(int *)(param_1 + 0x98) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x9c) = in_V7D;
    auVar1 = vscl_t(*pauVar7,0x42480000);
    *(int *)*pauVar7 = auVar1._0_4_;
    *(int *)(param_1 + 0x74) = auVar1._4_4_;
    *(int *)(param_1 + 0x78) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x7c) = in_V7D;
  }
  else {
    pauVar6 = (undefined (*) [12])(param_1 + 0x60);
    if ((*(char *)(param_1 + 0x114) != '\0') || (iVar5 = FUN_088787a0(param_1), iVar5 != 0)) {
      FUN_08823f5c(DAT_08b00920,0x1b,pauVar6);
      FUN_08877060(param_1,0x200097,0,0,0);
      FUN_08876ee0(param_1);
      return;
    }
    uStack_54 = *(undefined4 *)(param_1 + 0x9c);
    auVar1 = vneg_t(*(undefined (*) [12])(param_1 + 0x90));
    auVar1 = vadd_t(auVar1,*(undefined (*) [12])(param_1 + 0x70));
    local_60 = auVar1._0_4_;
    uStack_5c = auVar1._4_4_;
    uStack_58 = auVar1._8_4_;
    uStack_44 = *(undefined4 *)(param_1 + 0x6c);
    auVar1 = vadd_t(*pauVar6,*(undefined (*) [12])(param_1 + 0x90));
    local_50 = auVar1._0_4_;
    uStack_4c = auVar1._4_4_;
    uStack_48 = auVar1._8_4_;
    iVar5 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,&local_50,&local_60,0x30,1,0,
                         0x31bf337e);
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0xf8);
    }
    else {
      if (DAT_08aba940 == 0) {
        FUN_08823f5c(DAT_08b00920,0x1b,pauVar6);
        FUN_08877060(param_1,0x200097,0,0,0);
        FUN_08876ee0(param_1);
        return;
      }
      if ((*(uint *)(param_1 + 0xfc) & 1) == 0) {
        FUN_08823f5c(DAT_08b00920,0x1b,&DAT_08aba930);
        iVar5 = *(int *)(param_1 + 0xfc);
      }
      else {
        iVar5 = *(int *)(param_1 + 0xfc);
      }
      *(uint *)(param_1 + 0xfc) = iVar5 + 1U;
      if ((iVar5 + 1U & 3) == 0) {
        FUN_08877060(param_1,0x200097,0,0,0);
      }
      iVar5 = *(int *)(param_1 + 0xf8);
    }
    if (iVar5 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x6c);
      auVar1 = vadd_t(*pauVar6,*(undefined (*) [12])(param_1 + 0x70));
      *(int *)*pauVar6 = auVar1._0_4_;
      *(int *)(param_1 + 100) = auVar1._4_4_;
      *(int *)(param_1 + 0x68) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
    }
  }
  return;
}

