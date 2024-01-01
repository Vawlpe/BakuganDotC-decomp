#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e9f30(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined auVar1 [12];
  char cVar2;
  undefined (*pauVar3) [12];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_V7D;
  undefined4 uVar6;
  
  if (DAT_08af84e0 == 0) {
    DAT_08af84e0 = 1;
    DAT_08af84f4 = &DAT_08af5504;
    DAT_08af84f0 = 1;
  }
  pauVar3 = (undefined (*) [12])(param_2 + 0x20);
  uVar4 = vdot_t(*pauVar3,*pauVar3);
  uVar4 = vsqrt_s(uVar4);
  DAT_08af8500 = *(undefined4 *)*(undefined (*) [12])(param_2 + 0x10);
  DAT_08af8504 = *(undefined4 *)(param_2 + 0x14);
  DAT_08af8508 = *(undefined4 *)(param_2 + 0x18);
  DAT_08af850c = *(undefined4 *)(param_2 + 0x1c);
  uVar5 = vdot_t(*pauVar3,*pauVar3);
  uVar6 = vcmp_s(8,uVar5,*(undefined4 *)*pauVar3);
  vrsq_s(uVar5);
  uVar5 = vcmovt_s(in_V7D,(byte)uVar6 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(*pauVar3,uVar5);
  DAT_08af8510 = auVar1._0_4_;
  DAT_08af8514 = auVar1._4_4_;
  DAT_08af8518 = auVar1._8_4_;
  uVar5 = vcmp_s(8,DAT_08af8510,DAT_08af8510);
  vrcp_s(DAT_08af8510);
  DAT_08af8520 = vcmovt_s(in_V7D,(byte)uVar5 & 1);
  uVar5 = vcmp_s(8,DAT_08af8514,DAT_08af8510);
  vrcp_s(DAT_08af8514);
  DAT_08af8524 = vcmovt_s(in_V7D,(byte)uVar5 & 1);
  uVar5 = vcmp_s(8,DAT_08af8518,DAT_08af8510);
  vrcp_s(DAT_08af8518);
  DAT_08af8528 = vcmovt_s(in_V7D,(byte)uVar5 & 1);
  DAT_08af851c = in_V7D;
  DAT_08af852c = in_V7D;
  cVar2 = FUN_089e9bac(uVar4,param_1,&DAT_08af84f0);
  if (cVar2 != '\0') {
    auVar1._4_4_ = DAT_08af8514;
    auVar1._0_4_ = DAT_08af8510;
    auVar1._8_4_ = DAT_08af8518;
    auVar1 = vscl_t(auVar1,DAT_08ac5d68);
    uVar4 = *(undefined4 *)(param_2 + 0x1c);
    auVar1 = vadd_t(*(undefined (*) [12])(param_2 + 0x10),auVar1);
    *param_3 = auVar1._0_4_;
    param_3[1] = auVar1._4_4_;
    param_3[2] = auVar1._8_4_;
    param_3[3] = uVar4;
  }
  return;
}

