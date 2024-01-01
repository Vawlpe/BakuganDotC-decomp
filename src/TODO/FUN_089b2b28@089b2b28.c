#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b2b28(uint param_1,undefined param_2,byte param_3,ushort param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_1 & 0xff;
  iVar3 = (int)uVar4 >> 2;
  bVar1 = false;
  if ((int)uVar4 < 0) {
    param_1 = -(-uVar4 & 3) & 0xff;
  }
  else {
    param_1 = param_1 & 3;
  }
  piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
  if ((*(byte *)(*piVar2 + (iVar3 * 4 + param_1) * 4 + 0x97) & 0x80) == 0) {
    bVar1 = true;
  }
  else {
    piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
    if (param_3 < (*(byte *)(*piVar2 + (iVar3 * 4 + param_1) * 4 + 0x97) & 0x7f)) {
      bVar1 = true;
    }
    else {
      piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
      if (param_3 == (*(byte *)(*piVar2 + (iVar3 * 4 + param_1) * 4 + 0x97) & 0x7f)) {
        piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
        if (*(ushort *)(*piVar2 + (iVar3 * 4 + param_1) * 4 + 0x98) < param_4) {
          bVar1 = true;
        }
      }
    }
  }
  if (bVar1) {
    piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
    *(undefined *)(*piVar2 + (iVar3 * 4 + param_1) * 4 + 0x96) = param_2;
    piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
    *(byte *)(*piVar2 + (iVar3 * 4 + param_1) * 4 + 0x97) = param_3 | 0x80;
    piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
    *(ushort *)(*piVar2 + (iVar3 * 4 + param_1) * 4 + 0x98) = param_4;
    if (uVar4 == 0x25) {
      piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
      *(undefined *)(*piVar2 + 0xe6) = param_2;
      piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
      *(byte *)(*piVar2 + 0xe7) = param_3 | 0x80;
      piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
      *(ushort *)(*piVar2 + 0xe8) = param_4;
    }
  }
  return;
}

