#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Switch with 1 destination removed at 0x089b21f4 : 8 cases all go to same destination

void FUN_089b2098(void)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)(DAT_08ac58c4 + 4);
  switch(iVar3) {
  case 4:
  case 5:
  case 6:
  case 7:
    piVar2 = (int *)FUN_0880cc48();
    *(byte *)(*piVar2 + 0x8b) = *(byte *)(*piVar2 + 0x8b) | 2;
    iVar3 = *(int *)(DAT_08ac58c4 + 4);
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    piVar2 = (int *)FUN_0880cc48();
    *(byte *)(*piVar2 + 0x8b) = *(byte *)(*piVar2 + 0x8b) | 4;
    iVar3 = *(int *)(DAT_08ac58c4 + 4);
    break;
  case 0xe:
    piVar2 = (int *)FUN_0880cc48();
    *(byte *)(*piVar2 + 0x8b) = *(byte *)(*piVar2 + 0x8b) | 8;
    iVar3 = *(int *)(DAT_08ac58c4 + 4);
    break;
  case 0x12:
    piVar2 = (int *)FUN_0880cc48();
    *(byte *)(*piVar2 + 0x8b) = *(byte *)(*piVar2 + 0x8b) | 0x10;
    iVar3 = *(int *)(DAT_08ac58c4 + 4);
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    piVar2 = (int *)FUN_0880cc48();
    *(byte *)(*piVar2 + 0x8b) = *(byte *)(*piVar2 + 0x8b) | 0x20;
    iVar3 = *(int *)(DAT_08ac58c4 + 4);
    break;
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
    piVar2 = (int *)FUN_0880cc48();
    *(byte *)(*piVar2 + 0x8b) = *(byte *)(*piVar2 + 0x8b) | 0x40;
    iVar3 = *(int *)(DAT_08ac58c4 + 4);
    break;
  case 0x25:
    piVar2 = (int *)FUN_0880cc48();
    *(byte *)(*piVar2 + 0x8b) = *(byte *)(*piVar2 + 0x8b) | 0x20;
    iVar3 = *(int *)(DAT_08ac58c4 + 4);
  }
  if (7 < iVar3 - 0x1cU) {
    switch(iVar3) {
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x24:
    case 0x26:
    case 0x27:
      break;
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x25:
    default:
      if (iVar3 == 0x25) {
        piVar2 = (int *)FUN_0880cc48();
        *(byte *)(*piVar2 + 0x8f) = *(byte *)(*piVar2 + 0x8f) | 0x20;
        piVar2 = (int *)FUN_0880cc48();
        *(byte *)(*piVar2 + 0x93) = *(byte *)(*piVar2 + 0x93) | 0x10;
      }
      else {
        piVar2 = (int *)FUN_0880cc48();
        uVar4 = (int)(*(int *)(DAT_08ac58c4 + 4) + ((uint)(*(int *)(DAT_08ac58c4 + 4) >> 2) >> 0x1e)
                     ) >> 2;
        uVar5 = uVar4 & 0xff;
        iVar3 = *piVar2 + ((int)uVar5 >> 3);
        if ((int)uVar5 < 0) {
          uVar4 = -(-uVar5 & 7) & 0x1f;
        }
        else {
          uVar4 = uVar4 & 7;
        }
        *(byte *)(iVar3 + 0x8f) = *(byte *)(iVar3 + 0x8f) | (byte)(1 << uVar4);
        piVar2 = (int *)FUN_0880cc48();
        uVar4 = *(uint *)(DAT_08ac58c4 + 4);
        if ((int)uVar4 < 0) {
          uVar5 = -(-uVar4 & 3) & 0xff;
        }
        else {
          uVar5 = uVar4 & 3;
        }
        uVar5 = ((int)(uVar4 + ((uint)((int)uVar4 >> 2) >> 0x1e)) >> 2 & 0xffU) * 4 + uVar5;
        iVar3 = *piVar2 + ((int)uVar5 >> 3);
        if ((int)uVar5 < 0) {
          bVar1 = (byte)(1 << (-(-uVar5 & 7) & 0x1f));
        }
        else {
          bVar1 = (byte)(1 << (uVar5 & 7));
        }
        *(byte *)(iVar3 + 0x91) = *(byte *)(iVar3 + 0x91) | bVar1;
      }
    }
  }
  return;
}

