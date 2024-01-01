#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08823884(int param_1,int *param_2,int param_3)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined (*pauVar5) [12];
  
  iVar3 = 0;
  if (param_1 == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x210);
  do {
    pauVar5 = (undefined (*) [12])(param_1 + 0x150);
    if (iVar4 != 0) {
      uVar2 = *(undefined4 *)(param_3 + 0x5c);
      auVar1 = vsub_t(*(undefined (*) [12])(param_3 + 0x50),*(undefined (*) [12])(param_1 + 0x60));
      *(int *)*pauVar5 = auVar1._0_4_;
      *(int *)(param_1 + 0x154) = auVar1._4_4_;
      *(int *)(param_1 + 0x158) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x15c) = uVar2;
      if ((*(uint *)(param_1 + 0xd0) & 0x80) == 0) {
        iVar4 = vdot_t(*pauVar5,*pauVar5);
      }
      else {
        iVar4 = 0x7f800000;
      }
      param_2[1] = iVar4;
      *param_2 = param_1;
      iVar3 = iVar3 + 1;
      param_2 = param_2 + 2;
      if (0xff < iVar3) {
        return;
      }
    }
    param_1 = *(int *)(param_1 + 4);
    if (param_1 == 0) {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x210);
  } while( true );
}

