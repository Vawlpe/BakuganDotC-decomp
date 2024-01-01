#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887bb04(int param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined (*pauVar5) [12];
  undefined (*pauVar6) [12];
  undefined4 in_V7D;
  
  if (0x3c < *(int *)(param_1 + 0xf4)) {
    FUN_08876ee0(param_1);
    return;
  }
  pauVar6 = (undefined (*) [12])(param_1 + 0x70);
  if (*(int *)(param_1 + 0xf4) == 0) {
    auVar1 = vscl_t(*pauVar6,0x42480000);
    *(int *)*pauVar6 = auVar1._0_4_;
    *(int *)(param_1 + 0x74) = auVar1._4_4_;
    *(int *)(param_1 + 0x78) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x7c) = in_V7D;
  }
  else {
    FUN_088787a0(param_1);
    pauVar5 = (undefined (*) [12])(param_1 + 0x60);
    iVar3 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar5,pauVar6,0x2c,3,0,0x31bf337e
                        );
    if (iVar3 != 0) {
      iVar3 = FUN_08823f5c(DAT_08b00920,0x7e,&DAT_08aba930);
      iVar4 = *(int *)(param_1 + 0xb0);
      *(int *)(iVar3 + 0x1fc) = iVar4;
      if (iVar4 != 0) {
        *(undefined4 *)(iVar3 + 0x200) = *(undefined4 *)(iVar4 + 0xc);
      }
      FUN_08876ee0(param_1);
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x6c);
    auVar1 = vadd_t(*pauVar5,*pauVar6);
    *(int *)*pauVar5 = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
  }
  return;
}

