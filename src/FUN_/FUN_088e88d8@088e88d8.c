#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e88d8(int param_1)

{
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(char *)(param_1 + 0x470) != '\0') {
    FUN_089dedf8(param_1,&local_30,"R_Foot");
    *(undefined4 *)(param_1 + 0x440) = local_30;
    *(undefined4 *)(param_1 + 0x444) = uStack_2c;
    *(undefined4 *)(param_1 + 0x448) = uStack_28;
    *(undefined4 *)(param_1 + 0x44c) = uStack_24;
    FUN_089dedf8(param_1,&local_30,"L_Foot");
    *(undefined4 *)(param_1 + 0x450) = local_30;
    *(undefined4 *)(param_1 + 0x454) = uStack_2c;
    *(undefined4 *)(param_1 + 0x458) = uStack_28;
    *(undefined4 *)(param_1 + 0x45c) = uStack_24;
  }
  return;
}

