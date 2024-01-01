#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f2db0(int *param_1,int param_2,char param_3)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  int iVar3;
  undefined4 in_V7D;
  
  if (param_2 < 1) {
    if (-1 < param_2) {
      param_1[6] = param_1[3];
      param_1[7] = param_1[4];
      param_1[8] = param_1[5];
      *param_1 = param_1[3];
      param_1[1] = param_1[4];
      param_1[2] = param_1[5];
    }
  }
  else if (param_2 < 2) {
    param_1[0x12] = param_1[0xf];
    param_1[0x13] = param_1[0x10];
    param_1[0x14] = param_1[0x11];
    param_1[0xc] = param_1[0xf];
    param_1[0xd] = param_1[0x10];
    param_1[0xe] = param_1[0x11];
  }
  else if (param_2 < 3) {
    *(undefined2 *)(param_1 + 0x19) = *(undefined2 *)((int)param_1 + 0x62);
    *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)((int)param_1 + 0x62);
  }
  iVar3 = DAT_08ac5c90;
  if (param_3 != '\0') {
    if (param_2 < 1) {
      if (-1 < param_2) {
        auVar2._4_4_ = (float)param_1[1] * 0.0002441406;
        auVar2._0_4_ = (float)*param_1 * 0.0002441406;
        auVar2._8_4_ = (float)param_1[2] * 0.0002441406;
        auVar1 = vscl_t(auVar2,0x41a00000);
        *(int *)(DAT_08ac5c90 + 0x50) = auVar1._0_4_;
        *(int *)(iVar3 + 0x54) = auVar1._4_4_;
        *(int *)(iVar3 + 0x58) = auVar1._8_4_;
        *(undefined4 *)(iVar3 + 0x5c) = in_V7D;
        return;
      }
    }
    else {
      if (param_2 < 2) {
        auVar1._4_4_ = (float)param_1[0xd] * 0.0002441406;
        auVar1._0_4_ = (float)param_1[0xc] * 0.0002441406;
        auVar1._8_4_ = (float)param_1[0xe] * 0.0002441406;
        auVar1 = vscl_t(auVar1,0x41a00000);
        *(int *)(DAT_08ac5c90 + 0x60) = auVar1._0_4_;
        *(int *)(iVar3 + 100) = auVar1._4_4_;
        *(int *)(iVar3 + 0x68) = auVar1._8_4_;
        *(undefined4 *)(iVar3 + 0x6c) = in_V7D;
        return;
      }
      if (param_2 < 3) {
        *(float *)(DAT_08ac5c90 + 0x158) = (float)(uint)*(ushort *)(param_1 + 0x18);
      }
    }
  }
  return;
}

