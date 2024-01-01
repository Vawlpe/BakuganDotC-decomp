#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088e0454(undefined param_1,int *param_2)

{
  undefined auVar1 [12];
  byte bVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  auVar1._4_4_ = (float)param_2[1] * 0.0002441406;
  auVar1._0_4_ = (float)*param_2 * 0.0002441406;
  auVar1._8_4_ = (float)param_2[2] * 0.0002441406;
  auVar1 = vscl_t(auVar1,0x41a00000);
  local_30 = auVar1._0_4_;
  local_2c = auVar1._4_4_;
  local_28 = auVar1._8_4_;
  bVar2 = FUN_088dfa54(*(undefined *)((int)param_2 + 0x36));
  if (bVar2 == 0x2f) {
    iVar3 = FUN_088dffe4(0x2f,0,&local_30,param_2);
  }
  else {
    iVar3 = FUN_088dffe4(bVar2,3,&local_30,param_2);
  }
  *(undefined *)(iVar3 + 0x34c) = param_1;
  *(int **)(iVar3 + 0x350) = param_2;
  FUN_088df254(iVar3,1);
  FUN_088df5d8(iVar3);
  if (bVar2 < 0x21) {
    FUN_088df9a8(0x41200000,iVar3);
  }
  return iVar3;
}

