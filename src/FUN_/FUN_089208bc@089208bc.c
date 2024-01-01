#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089208bc(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) != 0) {
    cVar1 = *(char *)(param_1 + 0x74);
    if (cVar1 < '\x01') {
      if (-1 < cVar1) {
        uVar2 = 1;
        if (((uint)*(byte *)(param_1 + 0x218c) & 1 << ((int)*(char *)(param_1 + 0x77) & 0x1fU)) != 0
           ) {
          uVar2 = 2;
        }
        return uVar2;
      }
    }
    else {
      if (cVar1 < '\x02') {
        uVar2 = 1;
        if ((*(char *)(param_1 + 0x75) != '\0') &&
           (uVar2 = 2, *(char *)(param_1 + 0x2176) == '\x01')) {
          uVar2 = 1;
        }
        return uVar2;
      }
      if (cVar1 < '\x03') {
        FUN_0891d184(&local_20,param_1,*(undefined *)(param_1 + 0x76),
                     *(undefined *)(param_1 + *(char *)(param_1 + 0x79) + 0x224e));
        *(undefined4 *)(param_1 + 0x2254) = local_20;
        *(int *)(param_1 + 0x2258) = local_1c;
        *(undefined4 *)(param_1 + 0x225c) = local_18;
        *(int *)(param_1 + 0x2260) = local_14;
        uVar2 = 1;
        if (local_14 < local_1c) {
          uVar2 = 2;
        }
        return uVar2;
      }
    }
  }
  return 0;
}

