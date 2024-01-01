#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088e89c4(int param_1,int param_2)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 in_V7D;
  
  FUN_088e5a50();
  *(undefined **)(param_1 + 0x14) = &DAT_08af3e94;
  if (0x50 < param_2) {
    if (param_2 < 0x53) {
      if (0x51 < param_2) {
        *(undefined4 *)(param_1 + 0x404) = 0x42fa0000;
        *(undefined4 *)(param_1 + 0x408) = 0x41f00000;
        *(undefined4 *)(param_1 + 0x40c) = 0x3f490fdb;
        *(undefined4 *)(param_1 + 0x410) = 0x3ff99999;
        auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x40),0x3f000000);
        *(int *)*(undefined (*) [12])(param_1 + 0x40) = auVar1._0_4_;
        *(int *)(param_1 + 0x44) = auVar1._4_4_;
        *(int *)(param_1 + 0x48) = auVar1._8_4_;
        *(undefined4 *)(param_1 + 0x4c) = in_V7D;
        *(undefined4 *)(param_1 + 0x1f0) = 0;
        *(undefined4 *)(param_1 + 500) = 0;
        *(undefined4 *)(param_1 + 0x1f8) = 0;
        *(undefined4 *)(param_1 + 0x200) = 0;
        *(undefined4 *)(param_1 + 0x204) = 0x40e00000;
        *(undefined4 *)(param_1 + 0x208) = 0;
        *(undefined4 *)(param_1 + 0x20c) = 0;
        *(undefined4 *)(param_1 + 0x210) = 0x40600000;
        *(undefined4 *)(param_1 + 0x1fc) = 0x41440000;
        uVar2 = vdot_t(*(undefined (*) [12])(param_1 + 0x200),*(undefined (*) [12])(param_1 + 0x200)
                      );
        uVar2 = vsqrt_s(uVar2);
        *(undefined4 *)(param_1 + 0x20c) = uVar2;
        goto LAB_088e8b88;
      }
    }
    else if (0x53 < param_2) goto LAB_088e8b88;
    *(undefined4 *)(param_1 + 0x404) = 0x437a0000;
    *(undefined4 *)(param_1 + 0x408) = 0x42860000;
    *(undefined4 *)(param_1 + 0x40c) = 0x3f490fdb;
    if (*(int *)(DAT_08ac58c4 + 4) == 8) {
      *(undefined4 *)(param_1 + 0x40c) = 0x3f32b8c2;
    }
    *(undefined4 *)(param_1 + 0x410) = 0x3fa66666;
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 500) = 0;
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    *(undefined4 *)(param_1 + 0x200) = 0;
    *(undefined4 *)(param_1 + 0x204) = 0x41700000;
    *(undefined4 *)(param_1 + 0x208) = 0;
    *(undefined4 *)(param_1 + 0x20c) = 0;
    *(undefined4 *)(param_1 + 0x210) = 0x40e00000;
    *(undefined4 *)(param_1 + 0x1fc) = 0x42440000;
    uVar2 = vdot_t(*(undefined (*) [12])(param_1 + 0x200),*(undefined (*) [12])(param_1 + 0x200));
    uVar2 = vsqrt_s(uVar2);
    *(undefined4 *)(param_1 + 0x20c) = uVar2;
  }
LAB_088e8b88:
  FUN_088e8974(param_1,0);
  *(undefined2 *)(param_1 + 0x430) = 0x2a38;
  return param_1;
}

