#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a2ce50(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined auStack_1c [16];
  
  iVar2 = param_1[2];
  iVar3 = *param_1;
  iVar1 = *(int *)(iVar3 + 0x90);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
  }
  *(int *)(iVar3 + 0x94) = iVar2;
  if ((iVar2 < 0) || (*(int *)(iVar3 + 0x8c) <= iVar2)) {
    memset_jak((undefined *)&DAT_08b00fc8,0,4);
    iVar1 = DAT_08b00fc8;
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar3 + 0x84) + iVar2 * 4);
  }
  *(int *)(iVar3 + 0x90) = iVar1;
  (**(code **)(*(int *)(iVar1 + 4) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 8),auStack_1c);
  return;
}

