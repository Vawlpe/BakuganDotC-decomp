#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893bc28(int param_1,char param_2)

{
  int iVar1;
  
  switch(*(undefined *)(param_1 + 0x5ee)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    break;
  case 1:
    if (param_2 == '\0') {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x74);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x70);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      FUN_089f4a90(0,(float)((int)(*(int *)(param_1 + 0x7ec) +
                                  ((uint)(*(int *)(param_1 + 0x7ec) >> 2) >> 0x1e)) >> 2),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x70));
      FUN_08939b58(param_1,0,0x1d);
      FUN_08939b58(param_1,0,0x1c);
    }
    else {
      FUN_08939b58(param_1,param_2,0x1d);
      FUN_08939b58(param_1,param_2,0x1c);
    }
  }
  return;
}

