#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0881a358(int param_1,uint param_2)

{
  FUN_089d8b38(param_1,0);
  *(undefined **)(param_1 + 0x20) = &DAT_08af1684;
  FUN_089e51dc(param_1 + 0x30);
  *(undefined *)(param_1 + 0x180) = 0;
  if ((param_2 & 2) != 0) {
    FUN_089d8dfc(param_1,&DAT_08b00260);
  }
  if ((param_2 & 3) == 3) {
    *(undefined *)(param_1 + 0x180) = 1;
  }
  else if ((param_2 & 1) != 0) {
    FUN_089d8dfc(param_1,&DAT_08b00270);
  }
  return param_1;
}

