#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088dae18(int param_1)

{
  undefined auVar1 [12];
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (*(char *)(param_1 + 0x15e) != '\0') {
    *(byte *)(param_1 + 0x15f) = *(byte *)(param_1 + 0x15f) & 0xfd;
    iVar2 = *(int *)(param_1 + 0x170);
    auVar1._4_4_ = (float)*(int *)(iVar2 + 0x10) * 0.0002441406;
    auVar1._0_4_ = (float)*(int *)(iVar2 + 0xc) * 0.0002441406;
    auVar1._8_4_ = (float)*(int *)(iVar2 + 0x14) * 0.0002441406;
    auVar1 = vscl_t(auVar1,0x41a00000);
    local_20 = auVar1._0_4_;
    uStack_1c = auVar1._4_4_;
    uStack_18 = auVar1._8_4_;
    if (local_20 < 12.0) {
      local_20 = 12.0;
    }
    local_30 = *(undefined4 *)(param_1 + 0x20);
    local_2c = *(undefined4 *)(param_1 + 0x24);
    local_28 = *(undefined4 *)(param_1 + 0x28);
    local_24 = *(undefined4 *)(param_1 + 0x2c);
    iVar2 = FUN_088d940c(0x41700000,param_1,&local_30);
    if (iVar2 != 0) {
      *(byte *)(param_1 + 0x15f) = *(byte *)(param_1 + 0x15f) | 2;
    }
  }
  return;
}

