#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c17f8(void)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint local_b0 [20];
  uint local_60 [12];
  
  puVar7 = local_b0;
  puVar8 = local_b0;
  memcpy_jak(local_b0,&DAT_08a92c74,0x50);
  uVar6 = 0;
  do {
    iVar2 = FUN_088f505c(*puVar7 & 0xffff);
    uVar6 = uVar6 + 1;
    if ((iVar2 != 0) &&
       ((((((uVar4 = *puVar7, uVar4 != 0x399 && (uVar4 != 0x39a)) && (uVar4 != 0x39b)) &&
          ((uVar4 != 0x39c && (uVar4 != 0x39d)))) && ((uVar4 != 0x39e && (uVar4 != 0x39f)))) ||
        (iVar2 = FUN_088f505c(0x215), iVar2 != 0)))) {
      piVar3 = (int *)FUN_0880cc48();
      iVar2 = (int)(uVar6 + ((uint)((int)uVar6 >> 3) >> 0x1d)) >> 3;
      if ((int)uVar6 < 0) {
        bVar1 = (byte)(1 << (-(-uVar6 & 7) & 0x1f));
      }
      else {
        bVar1 = (byte)(1 << (uVar6 & 7));
      }
      *(byte *)(*piVar3 + iVar2 + 0x50e) = *(byte *)(*piVar3 + iVar2 + 0x50e) | bVar1;
      if ((int)uVar6 < 0) {
        bVar1 = (byte)(1 << (-(-uVar6 & 7) & 0x1f));
      }
      else {
        bVar1 = (byte)(1 << (uVar6 & 7));
      }
      *(byte *)(*piVar3 + iVar2 + 0x5be) = *(byte *)(*piVar3 + iVar2 + 0x5be) | bVar1;
      if ((int)uVar6 < 0) {
        bVar1 = (byte)(1 << (-(-uVar6 & 7) & 0x1f));
      }
      else {
        bVar1 = (byte)(1 << (uVar6 & 7));
      }
      *(byte *)(*piVar3 + iVar2 + 0x5c3) = *(byte *)(*piVar3 + iVar2 + 0x5c3) | bVar1;
    }
    puVar7 = puVar7 + 1;
  } while (uVar6 < 0x14);
  memcpy_jak(local_60,&DAT_08a92cc4,0x30);
  uVar6 = 0;
  do {
    iVar2 = FUN_088f505c(*(uint *)((int)puVar8 + 0x50) & 0xffff);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_0880cc48();
      uVar4 = (int)uVar6 % 6 + 1;
      iVar2 = *piVar3 + (int)uVar6 / 6 + ((int)(uVar4 + ((uint)((int)uVar4 >> 3) >> 0x1d)) >> 3);
      if ((int)uVar4 < 0) {
        bVar1 = (byte)(1 << (-(-uVar4 & 7) & 0x1f));
      }
      else {
        bVar1 = (byte)(1 << (uVar4 & 7));
      }
      *(byte *)(iVar2 + 0x53c) = *(byte *)(iVar2 + 0x53c) | bVar1;
    }
    uVar6 = uVar6 + 1;
    puVar8 = (uint *)((int)puVar8 + 4);
  } while (uVar6 < 0xc);
  uVar6 = 0;
  do {
    piVar3 = (int *)FUN_0880cc48();
    uVar4 = uVar6 + 1;
    if ((int)uVar4 < 0) {
      uVar5 = -(-uVar4 & 7) & 0x1f;
    }
    else {
      uVar5 = uVar4 & 7;
    }
  } while ((((uint)*(byte *)(*piVar3 + ((int)(uVar4 + ((uint)((int)uVar4 >> 3) >> 0x1d)) >> 3) +
                            0x53c) & 1 << uVar5) != 0) && (uVar6 = uVar4, (int)uVar4 < 6));
  uVar4 = 0;
  if (uVar6 == 6) {
    piVar3 = (int *)FUN_0880cc48();
    *(byte *)(*piVar3 + 0x50e) = *(byte *)(*piVar3 + 0x50e) | 4;
    *(byte *)(*piVar3 + 0x5be) = *(byte *)(*piVar3 + 0x5be) | 4;
    *(byte *)(*piVar3 + 0x5c3) = *(byte *)(*piVar3 + 0x5c3) | 4;
    uVar4 = 0;
  }
  do {
    piVar3 = (int *)FUN_0880cc48();
    uVar6 = uVar4 + 1;
    if ((int)uVar6 < 0) {
      uVar5 = -(-uVar6 & 7) & 0x1f;
    }
    else {
      uVar5 = uVar6 & 7;
    }
  } while ((((uint)*(byte *)(*piVar3 + ((int)(uVar6 + ((uint)((int)uVar6 >> 3) >> 0x1d)) >> 3) +
                            0x53d) & 1 << uVar5) != 0) && (uVar4 = uVar6, (int)uVar6 < 6));
  if (uVar4 == 6) {
    piVar3 = (int *)FUN_0880cc48();
    *(byte *)(*piVar3 + 0x50f) = *(byte *)(*piVar3 + 0x50f) | 4;
    *(byte *)(*piVar3 + 0x5bf) = *(byte *)(*piVar3 + 0x5bf) | 4;
    *(byte *)(*piVar3 + 0x5c4) = *(byte *)(*piVar3 + 0x5c4) | 4;
  }
  iVar2 = FUN_089c9b48(0xb,DAT_08ac58c8);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0880cc48();
    *(byte *)(*piVar3 + 0x5bf) = *(byte *)(*piVar3 + 0x5bf) | 0x10;
  }
  iVar2 = FUN_089c9b48(8,DAT_08ac58c8);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0880cc48();
    *(byte *)(*piVar3 + 0x5bf) = *(byte *)(*piVar3 + 0x5bf) | 0x40;
  }
  iVar2 = FUN_089c9b48(0x14,DAT_08ac58c8);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0880cc48();
    *(byte *)(*piVar3 + 0x5bf) = *(byte *)(*piVar3 + 0x5bf) | 0x80;
  }
  iVar2 = FUN_089c9b48(0x10,DAT_08ac58c8);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0880cc48();
    *(byte *)(*piVar3 + 0x5bf) = *(byte *)(*piVar3 + 0x5bf) | 2;
  }
  iVar2 = FUN_089c9b48(0x11,DAT_08ac58c8);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0880cc48();
    *(byte *)(*piVar3 + 0x5bf) = *(byte *)(*piVar3 + 0x5bf) | 0x20;
  }
  iVar2 = FUN_089c9b48(0xd,DAT_08ac58c8);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0880cc48();
    *(byte *)(*piVar3 + 0x5bf) = *(byte *)(*piVar3 + 0x5bf) | 8;
  }
  return;
}

