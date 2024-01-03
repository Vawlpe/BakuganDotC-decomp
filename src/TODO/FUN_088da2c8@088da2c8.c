#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088da2c8(int param_1)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  int iVar3;
  undefined (*pauVar4) [16];
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*(char *)(param_1 + 0x15e) != '\0') {
    iVar3 = *(int *)(param_1 + 0x170);
    *(byte *)(param_1 + 0x15f) = *(byte *)(param_1 + 0x15f) & 0xfd;
    local_60 = (float)*(int *)(iVar3 + 0xc) * 0.0002441406;
    local_5c = (float)*(int *)(iVar3 + 0x10) * 0.0002441406;
    local_58 = (float)*(int *)(iVar3 + 0x14) * 0.0002441406;
    local_54 = 0;
    iVar3 = FUN_088da22c(param_1,param_1 + 0x20,&local_60);
    pauVar4 = (undefined (*) [16])(param_1 + 0x250);
    if (iVar3 == 1) {
      *(byte *)(param_1 + 0x15f) = *(byte *)(param_1 + 0x15f) | 2;
      if ((*(int *)(param_1 + 0x240) == 0) && (*(short *)(param_1 + 0x142) == 0x324)) {
        uVar2 = FUN_08823f5c(DAT_08ac5c70,0x41,param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x240) = uVar2;
      }
      if (((*(short *)(param_1 + 0x142) == 0x324) && (*(char *)(param_1 + 0x260) == '\0')) &&
         (iVar3 = DONE_NotZero_DAT_08AC5874(), iVar3 != 0)) {
        uVar2 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar2,0x2c00043,0,0);
      }
      *(undefined *)(param_1 + 0x260) = 1;
      local_50 = 0x3f800000;
      local_4c = 0x3f800000;
      local_48 = 0x3f800000;
      local_44 = 0x3f800000;
      local_30 = 0x3dcccccd;
      auVar1._8_4_ = 0x3f800000;
      auVar1._0_8_ = 0x3f8000003f800000;
      auVar1._12_4_ = 0x3f800000;
      auVar1 = vsub_q(auVar1,*pauVar4);
      auVar1 = vscl_q(auVar1,0x3dcccccd);
      auVar1 = vadd_q(*pauVar4,auVar1);
      *(int *)*pauVar4 = auVar1._0_4_;
      *(int *)(param_1 + 0x254) = auVar1._4_4_;
      *(int *)(param_1 + 600) = auVar1._8_4_;
      *(int *)(param_1 + 0x25c) = auVar1._12_4_;
      iVar3 = *(int *)(param_1 + 0x240);
    }
    else {
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_2c = 0x3dcccccd;
      auVar1 = vsub_q(ZEXT816(0),*pauVar4);
      auVar1 = vscl_q(auVar1,0x3dcccccd);
      auVar1 = vadd_q(*pauVar4,auVar1);
      *(int *)*pauVar4 = auVar1._0_4_;
      *(int *)(param_1 + 0x254) = auVar1._4_4_;
      *(int *)(param_1 + 600) = auVar1._8_4_;
      *(int *)(param_1 + 0x25c) = auVar1._12_4_;
      *(undefined *)(param_1 + 0x260) = 0;
      iVar3 = *(int *)(param_1 + 0x240);
    }
    if ((iVar3 != 0) && (*(short *)(param_1 + 0x142) == 0x324)) {
      FUN_08824828(DAT_08ac5c70,0x41,0,pauVar4);
      FUN_08824828(DAT_08ac5c70,0x42,0,pauVar4);
      FUN_08824828(DAT_08ac5c70,0x43,0,pauVar4);
    }
  }
  return;
}

