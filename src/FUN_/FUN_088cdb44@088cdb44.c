#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cdb44(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar2 = *(uint *)(DAT_08ac58c4 + 4);
    if ((int)uVar2 < 0) {
      uVar3 = -(-uVar2 & 3);
    }
    else {
      uVar3 = uVar2 & 3;
    }
    FUN_088cdaec(param_1,(int)(uVar2 + ((uint)((int)uVar2 >> 2) >> 0x1e)) >> 2,uVar3);
    if (*(int *)(param_1 + 0x34) != 0) {
      piVar1 = (int *)FUN_0880cc48();
      if (*(char *)(*piVar1 + (*(uint *)(DAT_08ac58c4 + 0x3c) & 0xff) * 4 + 0x411) == '\0') {
        if (**(char **)(param_1 + 0x34) == '\0') {
          *(undefined4 *)(param_1 + 0x30) = 1;
        }
      }
      else {
        piVar1 = (int *)FUN_0880cc48();
        if (*(char *)(*piVar1 + (*(uint *)(DAT_08ac58c4 + 0x3c) & 0xff) * 4 + 0x413) != '\0') {
          piVar1 = (int *)FUN_0880cc48();
          if ((*(char *)(*piVar1 + (*(uint *)(DAT_08ac58c4 + 0x3c) & 0xff) * 4 + 0x414) == '\0') &&
             ((int)(*(int *)(DAT_08ac58c4 + 4) + ((uint)(*(int *)(DAT_08ac58c4 + 4) >> 2) >> 0x1e))
              >> 2 != 8)) {
            *(undefined4 *)(param_1 + 0x30) = 2;
          }
        }
      }
    }
  }
  return;
}

