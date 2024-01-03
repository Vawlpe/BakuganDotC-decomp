#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_089acf60(int param_1,byte param_2)

{
  undefined uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (1 < param_2) {
    if (param_2 < 3) {
      return *(undefined *)(param_1 + 0xbb2);
    }
    if (param_2 < 4) {
      piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
      uVar1 = *(undefined *)(*piVar2 + 0x6ab);
    }
    return uVar1;
  }
  if (param_2 == 0) {
    return *(undefined *)(param_1 + 0xbb0);
  }
  return *(undefined *)(param_1 + 0xbb1);
}

