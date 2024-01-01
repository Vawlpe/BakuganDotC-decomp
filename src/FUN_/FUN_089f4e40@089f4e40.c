#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089f4e40(int param_1,int *param_2,int param_3,int param_4)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  int iVar3;
  undefined (*pauVar4) [12];
  int iVar5;
  
  iVar5 = 0;
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0xe0);
  do {
    if (iVar3 == 9) {
      param_1 = *(int *)(param_1 + 4);
    }
    else if ((*(uint *)(param_1 + 0xd0) & 1) == 0) {
      param_1 = *(int *)(param_1 + 4);
    }
    else {
      pauVar4 = (undefined (*) [12])(param_1 + 0x150);
      if (*(int *)(param_1 + 0xec) != 0) {
        (**(code **)(param_1 + 0xec))(param_1);
      }
      uVar2 = *(undefined4 *)(param_3 + 0x5c);
      auVar1 = vsub_t(*(undefined (*) [12])(param_3 + 0x50),*(undefined (*) [12])(param_1 + 0x60));
      *(int *)*pauVar4 = auVar1._0_4_;
      *(int *)(param_1 + 0x154) = auVar1._4_4_;
      *(int *)(param_1 + 0x158) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x15c) = uVar2;
      if ((*(uint *)(param_1 + 0xd0) & 0x80) == 0) {
        iVar3 = vdot_t(*pauVar4,*pauVar4);
      }
      else {
        iVar3 = 0x7f800000;
      }
      param_2[1] = iVar3;
      *param_2 = param_1;
      iVar5 = iVar5 + 1;
      param_2 = param_2 + 2;
      if (param_4 <= iVar5) {
        return iVar5;
      }
      param_1 = *(int *)(param_1 + 4);
    }
    if (param_1 == 0) {
      return iVar5;
    }
    iVar3 = *(int *)(param_1 + 0xe0);
  } while( true );
}

