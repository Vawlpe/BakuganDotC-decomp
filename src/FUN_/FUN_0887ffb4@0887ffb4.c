#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887ffb4(int param_1,undefined4 param_2)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined (*pauVar3) [12];
  int iVar4;
  
  if (0x5a < *(int *)(param_1 + 0xf4)) {
    FUN_08876ee0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    iVar4 = (int)*(float *)(param_1 + 0x10c);
    if (0 < iVar4) {
      if (iVar4 < 2) {
        *(undefined4 *)(param_1 + 0xe0) = 0;
        *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + 60.0;
      }
      else if (iVar4 < 3) {
        *(undefined4 *)(param_1 + 0xe0) = 0;
        *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + 60.0;
      }
    }
  }
  else {
    iVar4 = FUN_0887979c(param_1,0xc5);
    if (iVar4 == 0) {
      FUN_08877af0(0x42200000,0x42700000,param_1,1,0);
      pauVar3 = (undefined (*) [12])(param_1 + 0x60);
      iVar4 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar3,
                           (undefined (*) [12])(param_1 + 0x70),param_2,3,0,0x31bf337e);
      if (iVar4 != 0) {
        FUN_08878cc4(param_1,0xc5,&DAT_08aba930);
        return;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x6c);
      auVar1 = vadd_t(*pauVar3,*(undefined (*) [12])(param_1 + 0x70));
      *(int *)*pauVar3 = auVar1._0_4_;
      *(int *)(param_1 + 100) = auVar1._4_4_;
      *(int *)(param_1 + 0x68) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
    }
  }
  return;
}

