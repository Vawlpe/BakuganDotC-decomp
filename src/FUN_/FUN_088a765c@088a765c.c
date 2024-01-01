#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088a765c(int param_1,int param_2,float *param_3,char *param_4)

{
  undefined auVar1 [12];
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  
  uVar3 = 0;
  if (param_2 == 0) {
    return 0;
  }
  iVar2 = (**(code **)(*(int *)(param_2 + 0x14) + 0x54))
                    (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0x50));
  if ((iVar2 == 0) &&
     (iVar2 = (**(code **)(*(int *)(param_2 + 0x14) + 100))
                        (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0x60)), iVar2 == 0)) {
    return 0;
  }
  auVar1._4_4_ = *(float *)(param_2 + 0x24) + *(float *)(*(int *)(param_2 + 0x4bc) + 4) * 0.5;
  auVar1._0_4_ = *(undefined4 *)(param_2 + 0x20);
  auVar1._8_4_ = *(undefined4 *)(param_2 + 0x28);
  auVar1 = vsub_t(auVar1,*(undefined (*) [12])(DAT_08ac5c90 + 0x50));
  if (*(int *)(param_1 + 0x3a8) != 0) {
    DAT_08b00410 = *(undefined4 *)*(undefined (*) [12])(DAT_08ac5c90 + 0x50);
    DAT_08b00414 = *(undefined4 *)(DAT_08ac5c90 + 0x54);
    DAT_08b00418 = *(undefined4 *)(DAT_08ac5c90 + 0x58);
    DAT_08b0041c = *(undefined4 *)(DAT_08ac5c90 + 0x5c);
    DAT_08b00420 = auVar1._0_4_;
    DAT_08b00424 = auVar1._4_4_;
    DAT_08b00428 = auVar1._8_4_;
    DAT_08b0042c = *(undefined4 *)(param_2 + 0x2c);
    iVar2 = FUN_089ea250(*(undefined4 *)(param_1 + 0x3a8));
    if (iVar2 == 0) {
      if ((*param_3 < 1.0) && (*param_4 == '\0')) {
        *param_4 = '\x01';
      }
    }
    else {
      fVar4 = *param_3;
      uVar3 = 1;
      *param_3 = fVar4 - 0.1;
      if (fVar4 - 0.1 < 0.5) {
        *param_3 = 0.5;
      }
      if (*param_4 == '\x01') {
        *param_4 = '\0';
      }
    }
  }
  return uVar3;
}

