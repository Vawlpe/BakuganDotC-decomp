#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0885fd08(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x264) == 4) {
    switch(*(undefined4 *)(DAT_08ac58c4 + 4)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 0x10:
    case 0x11:
      uVar1 = 1;
    }
  }
  return uVar1;
}

