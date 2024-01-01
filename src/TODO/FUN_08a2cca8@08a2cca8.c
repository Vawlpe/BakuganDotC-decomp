#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x08a2cddc)

void FUN_08a2cca8(float param_1,int *param_2,undefined (*param_3) [12])

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  undefined4 local_2c [7];
  
  iVar1 = FUN_088fd564(*param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(*param_2 + 0xb0) = 0;
    return;
  }
  fVar4 = (float)vdot_t(*(undefined (*) [12])(**(int **)(*param_2 + 0x80) + 0x50),*param_3);
  if (0.0 < fVar4) {
    param_1 = *(float *)(*param_2 + 0xb0) + param_1;
  }
  else {
    param_1 = 0.0;
  }
  *(float *)(*param_2 + 0xb0) = param_1;
  if (*(float *)(*param_2 + 0xb4) < *(float *)(*param_2 + 0xb0)) {
    *(undefined4 *)(*param_2 + 0xb0) = 0;
    iVar1 = *param_2;
    local_2c[0] = 0;
    if (*(int *)(iVar1 + 0x90) != 0) {
      iVar2 = *(int *)(*(int *)(iVar1 + 0x90) + 4);
      (**(code **)(iVar2 + 0x14))(*(int *)(iVar1 + 0x90) + (int)*(short *)(iVar2 + 0x10));
    }
    *(undefined4 *)(iVar1 + 0x94) = 2;
    if (*(int *)(iVar1 + 0x8c) < 3) {
      piVar3 = &DAT_08b00fc8;
      memset_jak((undefined *)&DAT_08b00fc8,0,4);
    }
    else {
      piVar3 = (int *)(*(int *)(iVar1 + 0x84) + 8);
    }
    iVar2 = *piVar3;
    *(int *)(iVar1 + 0x90) = iVar2;
    (**(code **)(*(int *)(iVar2 + 4) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 8),local_2c);
  }
  return;
}

