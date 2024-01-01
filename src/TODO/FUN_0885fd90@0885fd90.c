#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0885fd90(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x264) == 4) {
    switch(*(undefined4 *)(DAT_08ac58c4 + 4)) {
    case 0x12:
    case 0x13:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
      uVar1 = 1;
    }
  }
  return uVar1;
}

