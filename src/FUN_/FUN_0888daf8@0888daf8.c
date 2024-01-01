#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888daf8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    *(undefined4 *)(param_1 + iVar2 + 0x94c) = 0;
    *(undefined4 *)(param_1 + iVar2 + 0x950) = 0;
    iVar1 = (iVar1 + 1) * 0x1000000 >> 0x18;
    iVar2 = iVar1 << 3;
  } while (iVar1 < 4);
  iVar1 = *(int *)(param_1 + 0x1a8);
  if (iVar1 < 2) {
    if (-1 < iVar1) {
      if (0 < iVar1) {
        *(undefined4 *)(param_1 + 0x94c) = 0;
        *(code **)(param_1 + 0x950) = FUN_0888eb5c;
        *(undefined4 *)(param_1 + 0x954) = 0;
        *(code **)(param_1 + 0x958) = FUN_0888e818;
        *(undefined4 *)(param_1 + 0x95c) = 0;
        *(code **)(param_1 + 0x960) = FUN_0888e6a0;
        *(undefined4 *)(param_1 + 0x964) = 0;
        *(code **)(param_1 + 0x968) = FUN_0888e9a8;
        return;
      }
      *(undefined4 *)(param_1 + 0x94c) = 0;
      *(code **)(param_1 + 0x950) = FUN_0888e40c;
      *(undefined4 *)(param_1 + 0x954) = 0;
      *(code **)(param_1 + 0x958) = FUN_0888eb5c;
      return;
    }
  }
  else {
    if (iVar1 < 3) {
      *(undefined4 *)(param_1 + 0x94c) = 0;
      *(code **)(param_1 + 0x950) = FUN_0888e6a0;
      *(undefined4 *)(param_1 + 0x954) = 0;
      *(code **)(param_1 + 0x958) = FUN_0888eb5c;
      *(undefined4 *)(param_1 + 0x95c) = 0;
      *(code **)(param_1 + 0x960) = FUN_0888e818;
      *(undefined4 *)(param_1 + 0x964) = 0;
      *(code **)(param_1 + 0x968) = FUN_0888e9a8;
      return;
    }
    if (iVar1 < 4) {
      *(undefined4 *)(param_1 + 0x94c) = 0;
      *(code **)(param_1 + 0x950) = FUN_0888eb5c;
      *(undefined4 *)(param_1 + 0x954) = 0;
      *(code **)(param_1 + 0x958) = FUN_0888e6a0;
      *(undefined4 *)(param_1 + 0x95c) = 0;
      *(code **)(param_1 + 0x960) = FUN_0888e818;
      *(undefined4 *)(param_1 + 0x964) = 0;
      *(code **)(param_1 + 0x968) = FUN_0888e9a8;
    }
  }
  return;
}

