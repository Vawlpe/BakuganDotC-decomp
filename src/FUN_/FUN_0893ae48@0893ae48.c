#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_0893ae48(int param_1,char param_2)

{
  undefined uVar1;
  undefined uVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = 0;
  uVar2 = 1;
  switch(*(undefined *)(param_1 + 0x5ee)) {
  default:
    return uVar2;
  case 1:
  case 2:
  case 8:
  case 9:
    fVar4 = *(float *)(param_1 + 0x77c);
    fVar3 = *(float *)(param_1 + 0x748);
    break;
  case 3:
  case 7:
    return uVar2;
  case 4:
    return uVar2;
  case 5:
    return uVar2;
  case 6:
    fVar4 = *(float *)(param_1 + 0x77c);
    fVar3 = *(float *)(param_1 + 0x748);
  }
  fVar4 = fVar4 + 0.125;
  if (param_2 == '\0') {
    *(float *)(param_1 + 0x77c) = fVar4;
    *(float *)(param_1 + 0x740) = fVar3 + (1.0 - (fVar4 - 1.0) * (fVar4 - 1.0));
    if (1.0 <= fVar4) {
      *(undefined4 *)(param_1 + 0x740) = 0x3f800000;
      *(undefined *)(param_1 + 0x778) = 1;
      return 1;
    }
  }
  else {
    *(float *)(param_1 + 0x77c) = fVar4;
    *(float *)(param_1 + 0x740) = fVar3 - fVar4 * fVar4;
    if (1.0 <= fVar4) {
      uVar1 = 1;
      *(undefined4 *)(param_1 + 0x740) = 0;
    }
  }
  *(undefined *)(param_1 + 0x778) = 1;
  return uVar1;
}

