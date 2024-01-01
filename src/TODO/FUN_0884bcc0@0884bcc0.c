#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884bcc0(int param_1)

{
  undefined auVar1 [16];
  undefined (*pauVar2) [16];
  float fVar3;
  undefined4 uVar4;
  undefined4 in_V7C;
  
  DAT_08b0087c = DAT_08b0087c + 1;
  if (*(int *)(param_1 + 0x448) < 100) {
    FUN_088b2774();
    FUN_089e0f6c(*(undefined4 *)(param_1 + 0x45c));
    FUN_089e0f6c(*(undefined4 *)(param_1 + 0x468));
    FUN_089e0f6c(*(undefined4 *)(param_1 + 0x474));
    FUN_088a9578();
    FUN_08847334(param_1 + 0x20);
    FUN_089e32ac(DAT_08ac5c90);
    FUN_0884b7c4(param_1);
    FUN_089e2b14(DAT_08ac5c90,2);
    FUN_0889e228();
    FUN_0888b778();
    FUN_08878dac();
    FUN_088b75fc();
    FUN_0889eed0();
    if (*(int *)(param_1 + 0x4d4) != 0) {
      FUN_08823d74(*(undefined4 *)(param_1 + 0x4d4));
    }
    if (*(int *)(param_1 + 0x4d8) != 0) {
      FUN_08823d74(*(undefined4 *)(param_1 + 0x4d8));
    }
    FUN_089f50bc(*(undefined4 *)(param_1 + 0x438));
    FUN_089f50bc(*(undefined4 *)(param_1 + 0x434));
    FUN_088259a4();
    if (*(int *)(param_1 + 0x524) < 1) {
      fVar3 = *(float *)(param_1 + 0x520) - 0.05;
      if (fVar3 < 0.0) {
        fVar3 = 0.0;
      }
      *(float *)(param_1 + 0x520) = fVar3;
    }
    else {
      fVar3 = *(float *)(param_1 + 0x520) + 0.05;
      if (1.0 < fVar3) {
        fVar3 = 1.0;
      }
      *(float *)(param_1 + 0x520) = fVar3;
      *(int *)(param_1 + 0x524) = *(int *)(param_1 + 0x524) + -1;
    }
    pauVar2 = (undefined (*) [16])(param_1 + 0x500);
    uVar4 = vmul_s(*(float *)(param_1 + 0x520) * 3.141593,in_V7C);
    fVar3 = (float)vcos_s(uVar4);
    auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x510),*pauVar2);
    auVar1 = vscl_q(auVar1,(1.0 - fVar3) * 0.5);
    auVar1 = vadd_q(*pauVar2,auVar1);
    *(int *)*pauVar2 = auVar1._0_4_;
    *(int *)(param_1 + 0x504) = auVar1._4_4_;
    *(int *)(param_1 + 0x508) = auVar1._8_4_;
    *(int *)(param_1 + 0x50c) = auVar1._12_4_;
    uVar4 = vmul_s(*(float *)(param_1 + 0x520) * 3.141593,in_V7C);
    fVar3 = (float)vcos_s(uVar4);
    *(float *)(param_1 + 0x50c) = (1.0 - fVar3) * 0.5 * *(float *)(param_1 + 0x51c);
  }
  return;
}

