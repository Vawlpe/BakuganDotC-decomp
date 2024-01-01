#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_0889276c(float param_1,int param_2,byte param_3,undefined4 param_4)

{
  uint uVar1;
  float fVar2;
  
  if (param_3 < 2) {
    if (param_3 != 0) {
      fVar2 = (float)FUN_0889046c(param_2,0);
      param_1 = param_1 * 10.0;
      switch(param_4) {
      case 0:
        return 1;
      case 1:
        return (uint)(fVar2 < param_1);
      case 2:
        return (uint)(fVar2 <= param_1);
      case 3:
        return (uint)(fVar2 == param_1);
      case 4:
        return (uint)(fVar2 != param_1);
      case 5:
        return (uint)(param_1 <= fVar2);
      case 6:
        return (uint)(param_1 < fVar2);
      case 7:
        return 0;
      default:
        return 0;
      }
    }
  }
  else if ((((param_3 == 0x2c) && (*(int *)(param_2 + 0x96c) != 0)) &&
           (*(int *)(*(int *)(param_2 + 0x96c) + 0x140) == 0)) &&
          ((param_1 != 0.0 && (*(float *)(param_2 + 0x980) * 0.03333334 < param_1)))) {
    return 0;
  }
  uVar1 = FUN_08890620();
  return uVar1;
}

