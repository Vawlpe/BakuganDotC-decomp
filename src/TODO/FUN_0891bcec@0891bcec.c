#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0891bcec(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar1 = DONE_Get_DAT_08AAC9E0();
  iVar2 = FUN_0880d0ac(uVar1,0x2b);
  if (iVar2 == 2) {
    uVar1 = DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d0ac(uVar1,0x2e);
    if (iVar2 == 0) {
      switch(*(undefined4 *)(DAT_08ac58c4 + 4)) {
      case 0:
      case 1:
      case 0x24:
        break;
      case 2:
      case 4:
      case 5:
      case 6:
      case 0x10:
      case 0x11:
      case 0x12:
        piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
        if ((*(byte *)(*piVar3 + 0x88) & 1) == 0) {
          piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
          uVar4 = 1;
          *(byte *)(*piVar3 + 0x88) = *(byte *)(*piVar3 + 0x88) | 1;
        }
        break;
      case 8:
      case 9:
      case 10:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x25:
      case 0x26:
        piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
        if ((*(byte *)(*piVar3 + 0x88) & 4) == 0) {
          piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
          *(byte *)(*piVar3 + 0x88) = *(byte *)(*piVar3 + 0x88) | 1;
          piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
          *(byte *)(*piVar3 + 0x88) = *(byte *)(*piVar3 + 0x88) | 2;
          piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
          uVar4 = 3;
          *(byte *)(*piVar3 + 0x88) = *(byte *)(*piVar3 + 0x88) | 4;
        }
        break;
      case 0xc:
      case 0xd:
      case 0xe:
        piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
        if ((*(byte *)(*piVar3 + 0x88) & 2) == 0) {
          piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
          *(byte *)(*piVar3 + 0x88) = *(byte *)(*piVar3 + 0x88) | 1;
          piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
          uVar4 = 2;
          *(byte *)(*piVar3 + 0x88) = *(byte *)(*piVar3 + 0x88) | 2;
        }
      }
    }
  }
  return uVar4;
}

