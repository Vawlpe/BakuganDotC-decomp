#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0887979c(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined auVar2 [12];
  int iVar3;
  undefined (*pauVar4) [12];
  undefined4 uVar5;
  undefined4 in_V7D;
  undefined4 uVar6;
  
  uVar5 = 0;
  iVar3 = FUN_088779d4();
  if (iVar3 != 0xc) {
    if (*(char *)(param_1 + 0x114) == '\0') {
      iVar3 = FUN_088787a0(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      cVar1 = *(char *)(param_1 + 0x116);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x116);
    }
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x115) == '\0') {
        iVar3 = FUN_088837c8(param_1,*(undefined4 *)(param_1 + 0xb8));
        if (iVar3 == 0) {
          FUN_08823f5c(DAT_08b00920,param_2,param_1 + 0x60);
        }
        else {
          FUN_08823f5c(DAT_08abd5b0,param_2,param_1 + 0x60);
        }
        FUN_0887805c(param_1);
        FUN_08876ee0(param_1);
        uVar5 = 1;
      }
      else {
        FUN_08877c98(param_1);
      }
    }
    else {
      FUN_0887805c(param_1);
      pauVar4 = (undefined (*) [12])(param_1 + 0x60);
      if (*(char *)(param_1 + 0x117) == '\0') {
        uVar5 = *(undefined4 *)(param_1 + 0x6c);
        auVar2 = vsub_t(*pauVar4,*(undefined (*) [12])(param_1 + 0x90));
        *(int *)*pauVar4 = auVar2._0_4_;
        *(int *)(param_1 + 100) = auVar2._4_4_;
        *(int *)(param_1 + 0x68) = auVar2._8_4_;
        *(undefined4 *)(param_1 + 0x6c) = uVar5;
        uVar5 = vdot_t(*pauVar4,*pauVar4);
        uVar6 = vcmp_s(8,uVar5,*(undefined4 *)*pauVar4);
        vrsq_s(uVar5);
        uVar5 = vcmovt_s(in_V7D,(byte)uVar6 & 1);
        vpfxd(4,4,4,5);
        auVar2 = vscl_t(*pauVar4,uVar5);
        *(int *)*pauVar4 = auVar2._0_4_;
        *(int *)(param_1 + 100) = auVar2._4_4_;
        *(int *)(param_1 + 0x68) = auVar2._8_4_;
        *(undefined4 *)(param_1 + 0x6c) = in_V7D;
        FUN_08824024(DAT_08b00920,0x38);
      }
      FUN_08876ee0(param_1);
      uVar5 = 1;
    }
  }
  return uVar5;
}

