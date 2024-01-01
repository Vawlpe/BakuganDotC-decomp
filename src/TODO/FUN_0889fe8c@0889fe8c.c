#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889fe8c(int param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  byte bVar3;
  undefined (*pauVar4) [12];
  undefined (*pauVar5) [12];
  undefined (*pauVar6) [12];
  undefined (*pauVar7) [12];
  undefined4 extraout_f0;
  float fVar8;
  undefined4 in_V7D;
  
  pauVar7 = (undefined (*) [12])(param_1 + 0x270);
  pauVar6 = (undefined (*) [12])(param_1 + 0x280);
  pauVar5 = (undefined (*) [12])(param_1 + 0x290);
  uVar2 = FUN_0889f9bc(*(undefined4 *)(param_1 + 0x2c4),(float)(int)*(short *)(param_1 + 0x2cc),
                       param_1 + 0x200,pauVar7,pauVar6,pauVar5);
  fVar8 = (float)FUN_0889f9ec(extraout_f0,uVar2);
  if (*(char *)(param_1 + 0x2d0) == '\0') {
    vscl_t(*(undefined (*) [12])(param_1 + 0x2a0),
           DAT_08abd510 * 2.0 * fVar8 * (1.0 - fVar8) + fVar8 * fVar8);
    *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x250);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x254);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 600);
  *(short *)(param_1 + 0x2ce) = *(short *)(param_1 + 0x2ce) + 1;
  if (*(short *)(param_1 + 0x2cc) <= *(short *)(param_1 + 0x2ce)) {
    bVar3 = *(char *)(param_1 + 0x2d0) + 1;
    *(byte *)(param_1 + 0x2d0) = bVar3;
    if (bVar3 < DAT_08abd514) {
      pauVar4 = (undefined (*) [12])(param_1 + 0x2b0);
      if ((int)(uint)*(byte *)(param_1 + 0x2d0) < (int)(DAT_08abd514 - 2)) {
        auVar1 = vscl_t(*pauVar4,DAT_08abd518);
        *(int *)*pauVar4 = auVar1._0_4_;
        *(int *)(param_1 + 0x2b4) = auVar1._4_4_;
        *(int *)(param_1 + 0x2b8) = auVar1._8_4_;
        *(undefined4 *)(param_1 + 700) = in_V7D;
      }
      *(undefined2 *)(param_1 + 0x2ce) = 0;
      *(short *)(param_1 + 0x2cc) =
           (short)((int)DAT_08abd516 / (int)(uint)*(byte *)(param_1 + 0x2d0));
      *(undefined4 *)(param_1 + 0x2c4) = 0x3f000000;
      *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_1 + 0x290);
      *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(param_1 + 0x294);
      *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_1 + 0x298);
      uVar2 = *(undefined4 *)pauVar5[1];
      auVar1 = vadd_t(*pauVar5,*pauVar4);
      *(int *)*pauVar5 = auVar1._0_4_;
      *(int *)(*pauVar5 + 4) = auVar1._4_4_;
      *(int *)(*pauVar5 + 8) = auVar1._8_4_;
      *(undefined4 *)pauVar5[1] = uVar2;
      *(float *)(param_1 + 0x2c8) = *(float *)(param_1 + 0x2c8) * DAT_08abd518;
      uVar2 = *(undefined4 *)pauVar5[1];
      auVar1 = vadd_t(*pauVar5,*pauVar7);
      *(int *)*pauVar6 = auVar1._0_4_;
      *(int *)(*pauVar6 + 4) = auVar1._4_4_;
      *(int *)(*pauVar6 + 8) = auVar1._8_4_;
      *(undefined4 *)pauVar6[1] = uVar2;
      auVar1 = vscl_t(*pauVar6,0x3f000000);
      *(int *)*pauVar6 = auVar1._0_4_;
      *(int *)(*pauVar6 + 4) = auVar1._4_4_;
      *(int *)(*pauVar6 + 8) = auVar1._8_4_;
      *(undefined4 *)pauVar6[1] = in_V7D;
      if (DAT_08b00944 == 0) {
        DAT_08b00944 = 1;
        DAT_08b00940 = 0;
      }
      *(float *)(param_1 + 0x284) = *(float *)(param_1 + 0x284) + *(float *)(param_1 + 0x2c8);
    }
    else {
      if (*(char *)(param_1 + 0x2c1) != '\0') {
        FUN_08824658(DAT_08ac5c70,0xe,*(int *)(param_1 + 0x130) + 0xb0);
        *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x24);
        *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x2c);
        (**(code **)(*(int *)(param_1 + 0x1b4) + 0x4c))
                  (param_1 + 0x1b0 + (int)*(short *)(*(int *)(param_1 + 0x1b4) + 0x48));
        *(undefined *)(param_1 + 0x2c1) = 0;
      }
      *(undefined2 *)(param_1 + 0x2ce) = *(undefined2 *)(param_1 + 0x2cc);
      *(byte *)(param_1 + 0x2d0) = DAT_08abd514;
    }
  }
  return;
}

