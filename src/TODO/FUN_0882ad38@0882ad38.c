#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882ad38(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af171c;
    if (*(int *)(param_1 + 0x540) != 5) {
      if (*(int *)(param_1 + 0x540) < 4) {
        FUN_089cec00(DAT_08ac5934);
      }
      iVar1 = *(int *)(param_1 + 0x524);
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
      }
      *(undefined4 *)(DAT_08ac5934 + 0x14) = 0;
      FUN_089d7a58(*(undefined4 *)(param_1 + 0x52c));
      if (*(char *)(param_1 + 0x548) != '\0') {
        iVar1 = *(int *)(param_1 + 0x520);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0x528);
        }
        else {
          (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
          *(undefined4 *)(param_1 + 0x520) = 0;
          iVar1 = *(int *)(param_1 + 0x528);
        }
        if (iVar1 != 0) {
          (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 8),3);
          *(undefined4 *)(param_1 + 0x528) = 0;
        }
      }
      DAT_08ab9f64 = 0;
    }
    FUN_089bf25c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

