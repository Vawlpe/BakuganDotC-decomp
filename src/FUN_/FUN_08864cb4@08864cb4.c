#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08864cb4(int param_1,char param_2)

{
  undefined auVar1 [12];
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 local_30;
  float local_2c;
  undefined4 uStack_28;
  
  fVar4 = 0.0;
  auVar1._4_4_ = 0;
  auVar1._0_4_ = *(uint *)(param_1 + 0x80);
  auVar1._8_4_ = *(undefined4 *)(param_1 + 0x88);
  auVar1 = vscl_t(auVar1,0x40400000);
  auVar1 = vadd_t(auVar1,*(undefined (*) [12])(param_1 + 0x340));
  local_30 = auVar1._0_4_;
  local_2c = auVar1._4_4_;
  uStack_28 = auVar1._8_4_;
  iVar2 = FUN_0885fcf8(param_1);
  if (iVar2 == 0) {
    if (*(float *)(*(int *)(param_1 + 0x4bc) + 0x70) == fVar4) {
      uVar3 = 1;
      if ((DAT_08abd488 == 0xc || DAT_08abd488 == 0xe) || DAT_08abd488 == 0xf) {
        uVar3 = 6;
      }
      FUN_08823f5c(DAT_08ac5c70,uVar3,&local_30);
    }
    else {
      uVar3 = 2;
      if ((DAT_08abd488 == 0xc || DAT_08abd488 == 0xe) || DAT_08abd488 == 0xf) {
        uVar3 = 7;
      }
      FUN_08823f5c(DAT_08ac5c70,uVar3,&local_30);
    }
  }
  else {
    iVar2 = FUN_0885fd08(param_1);
    if (iVar2 != 0) {
      fVar4 = (float)FUN_0889d654();
      local_2c = local_2c + fVar4;
      if (param_2 != '\0') {
        FUN_08823f5c(DAT_08ac5c70,0x2c,&local_30);
      }
    }
  }
  return;
}

