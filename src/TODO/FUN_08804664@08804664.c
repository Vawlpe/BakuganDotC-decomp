#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Control flow encountered bad instruction data
// WARNING: Switch with 1 destination removed at 0x088046cc
// WARNING: Exceeded maximum restarts with more pending

void FUN_08804664(int param_1,float *param_2,undefined4 *param_3)

{
  *param_3 = 0xc0000000;
  *param_2 = -2.0;
  if (param_1 < 0x7d) {
    switch(param_1) {
    case 0x52:
    case 0x58:
    case 0x67:
      *param_2 = *param_2 - 3.0;
      return;
    case 0x55:
      *param_2 = *param_2 - 6.0;
      return;
    case 0x5c:
    case 0x5d:
      *param_2 = *param_2 + 1.0;
      return;
    case 0x60:
    case 0x65:
      *param_2 = *param_2 - 5.0;
      return;
    case 0x62:
      *param_2 = *param_2 - 3.0;
      return;
    }
  }
  else if (param_1 < 0xbb) {
    if (param_1 < 0x8b) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
  else if (param_1 < 0xbc) {
    *param_2 = *param_2 + 2.0;
  }
  return;
}

