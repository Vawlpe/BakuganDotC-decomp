#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887fc44(int param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  int iVar3;
  undefined (*pauVar4) [12];
  
  if (60.0 < (float)*(int *)(param_1 + 0xf4)) {
    FUN_08876ee0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    *(undefined4 *)(param_1 + 0xe0) = 0x3c23d70a;
  }
  else {
    iVar3 = FUN_0887979c(param_1,0xb8);
    if (iVar3 == 0) {
      FUN_08877af0(0x43160000,0x42700000,param_1,1,0);
      pauVar4 = (undefined (*) [12])(param_1 + 0x60);
      iVar3 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar4,
                           (undefined (*) [12])(param_1 + 0x70),100,3,0,0x31bf337e);
      if (iVar3 != 0) {
        FUN_08878cc4(param_1,0xb8,&DAT_08aba930);
        return;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x6c);
      auVar1 = vadd_t(*pauVar4,*(undefined (*) [12])(param_1 + 0x70));
      *(int *)*pauVar4 = auVar1._0_4_;
      *(int *)(param_1 + 100) = auVar1._4_4_;
      *(int *)(param_1 + 0x68) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
    }
  }
  return;
}
