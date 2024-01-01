#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cdd7c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  
  if ((((*(int *)(param_1 + 0x30) == 0) && (*(int *)(param_1 + 0x10) == 0)) &&
      (*(int *)(DAT_08ac58c4 + 4) == 0x20)) &&
     (piVar1 = (int *)FUN_0880cc48(), *(char *)(*piVar1 + 0x415) == '\0')) {
    DAT_08b00bd4 = (undefined)
                   ((int)(*(int *)(DAT_08ac58c4 + 4) +
                         ((uint)(*(int *)(DAT_08ac58c4 + 4) >> 2) >> 0x1e)) >> 2);
    bVar3 = (byte)*(int *)(DAT_08ac58c4 + 4);
    if (*(int *)(DAT_08ac58c4 + 4) < 0) {
      DAT_08b00bd6 = -(-bVar3 & 3);
    }
    else {
      DAT_08b00bd6 = bVar3 & 3;
    }
    *(undefined4 *)(DAT_08ac58c4 + 4) = 0;
    piVar1 = (int *)FUN_0880cc48();
    *(char *)(*piVar1 + 0x80) =
         (char)((int)(*(int *)(DAT_08ac58c4 + 4) + ((uint)(*(int *)(DAT_08ac58c4 + 4) >> 2) >> 0x1e)
                     ) >> 2);
    piVar1 = (int *)FUN_0880cc48();
    bVar3 = (byte)*(int *)(DAT_08ac58c4 + 4);
    if (*(int *)(DAT_08ac58c4 + 4) < 0) {
      bVar3 = -(-bVar3 & 3);
    }
    else {
      bVar3 = bVar3 & 3;
    }
    *(byte *)(*piVar1 + 0x81) = bVar3;
    uVar2 = FUN_088cdc88(*(undefined4 *)(DAT_08ac58c4 + 4));
    *(undefined4 *)(DAT_08ac58c4 + 0x3c) = uVar2;
    DAT_08b00dd7 = 1;
    *(undefined4 *)(DAT_08ac58c4 + 0x34) = 6;
    *(undefined4 *)(DAT_08ac58c4 + 0xc) = 0;
  }
  return;
}

