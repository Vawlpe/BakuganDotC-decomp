#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887ff00(int param_1)

{
  undefined auVar1 [12];
  int iVar2;
  undefined (*pauVar3) [12];
  undefined4 uVar4;
  undefined4 in_V7D;
  undefined4 uVar5;
  
  iVar2 = FUN_08878e5c(0x3dcccccd,0,param_1,0x68,0xdc,0xdc);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0xbc) != 0) {
      iVar2 = *(int *)(param_1 + 0xbc);
      uVar4 = *(undefined4 *)(param_1 + 0x7c);
      auVar1 = vneg_t(*(undefined (*) [12])(param_1 + 0x70));
      *(int *)(iVar2 + 0x90) = auVar1._0_4_;
      *(int *)(iVar2 + 0x94) = auVar1._4_4_;
      *(int *)(iVar2 + 0x98) = auVar1._8_4_;
      *(undefined4 *)(iVar2 + 0x9c) = uVar4;
      iVar2 = *(int *)(param_1 + 0xbc);
      pauVar3 = (undefined (*) [12])(iVar2 + 0x90);
      uVar4 = vdot_t(*pauVar3,*pauVar3);
      uVar5 = vcmp_s(8,uVar4,*(undefined4 *)*pauVar3);
      vrsq_s(uVar4);
      uVar4 = vcmovt_s(in_V7D,(byte)uVar5 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(*pauVar3,uVar4);
      *(int *)*pauVar3 = auVar1._0_4_;
      *(int *)(iVar2 + 0x94) = auVar1._4_4_;
      *(int *)(iVar2 + 0x98) = auVar1._8_4_;
      *(undefined4 *)(iVar2 + 0x9c) = in_V7D;
    }
  }
  else {
    FUN_08824658(DAT_08b00920,0xffffffff,param_1 + 0x60);
  }
  return;
}

