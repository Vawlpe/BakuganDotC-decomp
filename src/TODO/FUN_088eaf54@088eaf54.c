#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088eaf54(int param_1,int *param_2)

{
  *(int **)(param_1 + (uint)*(byte *)(param_1 + 0x51) * 4 + 0x10) = param_2;
  (**(code **)(*param_2 + 0x14))((int)param_2 + (int)*(short *)(*param_2 + 0x10));
  *(char *)(param_1 + 0x51) = *(char *)(param_1 + 0x51) + '\x01';
  return;
}

