#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887f2c4(int param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined (*pauVar5) [12];
  undefined4 uVar6;
  undefined4 in_V7D;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0xf4) < 0x11) {
    if (*(int *)(param_1 + 0xf4) == 0) {
      *(undefined4 *)(param_1 + 0x84) = 0;
      pauVar5 = (undefined (*) [12])(param_1 + 0x80);
      uVar6 = vdot_t(*pauVar5,*pauVar5);
      uVar7 = vcmp_s(8,uVar6,*(undefined4 *)*pauVar5);
      vrsq_s(uVar6);
      uVar6 = vcmovt_s(in_V7D,(byte)uVar7 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(*pauVar5,uVar6);
      *(int *)*pauVar5 = auVar1._0_4_;
      *(int *)(param_1 + 0x84) = auVar1._4_4_;
      *(int *)(param_1 + 0x88) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x8c) = in_V7D;
      iVar3 = FUN_08824024(DAT_08b00920,0xe0,(undefined4 *)(param_1 + 0x60));
      *(int *)(param_1 + 0xbc) = iVar3;
      iVar4 = *(int *)(param_1 + 0xb0);
      *(int *)(iVar3 + 0x1fc) = iVar4;
      if (iVar4 != 0) {
        *(undefined4 *)(iVar3 + 0x200) = *(undefined4 *)(iVar4 + 0xc);
      }
      iVar3 = *(int *)(param_1 + 0xbc);
    }
    else {
      iVar3 = *(int *)(param_1 + 0xbc);
    }
    uVar6 = *(undefined4 *)(iVar3 + 100);
    uVar7 = *(undefined4 *)(iVar3 + 0x68);
    uVar2 = *(undefined4 *)(iVar3 + 0x6c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar3 + 0x60);
    *(undefined4 *)(param_1 + 100) = uVar6;
    *(undefined4 *)(param_1 + 0x68) = uVar7;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    uVar2 = DAT_08b001ac;
    uVar7 = DAT_08b001a8;
    uVar6 = DAT_08b001a4;
    *(undefined4 *)(param_1 + 0x70) = DAT_08b001a0;
    *(undefined4 *)(param_1 + 0x74) = uVar6;
    *(undefined4 *)(param_1 + 0x78) = uVar7;
    *(undefined4 *)(param_1 + 0x7c) = uVar2;
    if (*(int *)(param_1 + 0xf4) < 6) {
      uVar6 = 0x41c80000;
    }
    else {
      uVar6 = 0x42c80000;
    }
    *(undefined4 *)(param_1 + 0xcc) = uVar6;
    if (0 < *(int *)(param_1 + 0xf4)) {
      FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,*(int *)(param_1 + 0xbc) + 0x60,
                   param_1 + 0x80,0x59,3,0,0x31bf337e);
    }
    return;
  }
  FUN_08876ee0(param_1);
  return;
}

