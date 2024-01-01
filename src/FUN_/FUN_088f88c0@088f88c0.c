#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_088f88c0(undefined4 *param_1,int param_2)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_088fc33c();
  *param_1 = &DAT_08af6e98;
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  param_1[0x18] = *(undefined4 *)(param_2 + 0x30);
  param_1[0x19] = uVar4;
  param_1[0x1a] = uVar2;
  param_1[0x1b] = uVar3;
  uVar3 = DAT_08abfa0c;
  uVar2 = DAT_08abfa08;
  uVar4 = DAT_08abfa04;
  param_1[0x1c] = DAT_08abfa00;
  param_1[0x1d] = uVar4;
  param_1[0x1e] = uVar2;
  param_1[0x1f] = uVar3;
  *param_1 = &DAT_08af4494;
  param_1[0x24] = *(undefined4 *)(param_2 + 0x40);
  auVar1 = vsub_t(*(undefined (*) [12])param_1[1],
                  *(undefined (*) [12])(((undefined (*) [12])param_1[1])[1] + 4));
  uVar4 = vdot_t(auVar1,auVar1);
  uVar4 = vsqrt_s(uVar4);
  param_1[0x25] = uVar4;
  return param_1;
}

