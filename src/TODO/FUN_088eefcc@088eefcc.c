#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088eefcc(int param_1)

{
  undefined uVar1;
  
  if ((*(byte *)(param_1 + 0x273) & 2) == 0) {
    if (*(char *)(param_1 + 0x269) == '\x04') {
      FUN_088eb748(param_1);
      uVar1 = *(undefined *)(param_1 + 0x264);
    }
    else {
      FUN_088eba08(param_1);
      uVar1 = *(undefined *)(param_1 + 0x264);
    }
    switch(uVar1) {
    case 0:
    case 1:
      break;
    case 2:
      uVar1 = FUN_088eeaa8(param_1);
      *(undefined *)(param_1 + 0x264) = uVar1;
      break;
    case 3:
      FUN_088eeb50(param_1);
      FUN_088eec24(param_1);
      break;
    case 4:
      FUN_088eed20(param_1);
      break;
    case 5:
      (**(code **)(*(int *)(param_1 + 0xc) + 0x44))
                (param_1 + *(short *)(*(int *)(param_1 + 0xc) + 0x40));
      break;
    case 6:
      FUN_088eefb0(param_1);
    }
  }
  return;
}

