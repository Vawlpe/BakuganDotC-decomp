#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896254c(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((-1 < param_2) && (param_2 < 4)) {
    iVar1 = param_1 + param_2 * 0x28;
    if (*(int *)(iVar1 + 0x5200) != param_3) {
      *(char *)(param_1 + param_2 + 0x4cdd) = (char)param_3;
      *(int *)(iVar1 + 0x5200) = param_3;
      *(undefined4 *)(iVar1 + 0x5218) = 1;
      *(undefined4 *)(iVar1 + 0x521c) = 0;
      *(undefined4 *)(iVar1 + 0x5220) = 0;
      iVar1 = *(int *)(param_2 * 4 +
                      *(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5170) * 4);
      if (param_3 == 0) {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
        return;
      }
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    }
  }
  return;
}

