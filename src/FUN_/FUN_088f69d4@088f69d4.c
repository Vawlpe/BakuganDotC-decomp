#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_088f69d4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  FUN_088fcb70();
  *param_1 = &DAT_08af4414;
  param_1[0x40] = *(undefined4 *)(param_2 + 0x50);
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  uVar3 = DAT_08abf92c;
  uVar2 = DAT_08abf928;
  uVar1 = DAT_08abf924;
  param_1[0x44] = DAT_08abf920;
  param_1[0x45] = uVar1;
  param_1[0x46] = uVar2;
  param_1[0x47] = uVar3;
  param_1[0x48] = in_V72;
  param_1[0x49] = in_V76;
  param_1[0x4a] = in_V7A;
  param_1[0x4b] = in_V7E;
  param_1[0x4d] = 0;
  param_1[0x4f] = 0x3fc00000;
  param_1[0x50] = 5;
  param_1[0x4c] = 0x44480000;
  param_1[0x4e] = 0x44480000;
  param_1[0x1c] = 0;
  return param_1;
}

