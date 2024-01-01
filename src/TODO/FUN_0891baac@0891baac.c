#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_0891baac(void)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined uStack_40;
  undefined auStack_3f [7];
  byte local_38 [24];
  uint local_20 [2];
  
  puVar2 = &uStack_40;
  memcpy_jak(local_38,&DAT_08ac11d8,0x17);
  piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
  uVar7 = *(uint *)(*piVar1 + 0x48c);
  FUN_0892ae84(local_20);
  iVar5 = 0;
  if ((local_20[0] & 1 << (uVar7 & 0x1f)) != 0) {
    do {
      uVar4 = (uint)(byte)puVar2[8];
      piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
      if ((int)uVar4 < 0) {
        uVar3 = -(-uVar4 & 7) & 0x1f;
      }
      else {
        uVar3 = uVar4 & 7;
      }
      if ((((uint)*(byte *)(*piVar1 + ((int)uVar4 >> 3) + 0x50e) & 1 << uVar3) != 0) &&
         ((local_20[0] & 1 << (uVar4 & 0x1f)) == 0)) {
        piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
        *(uint *)(*piVar1 + 0x48c) = uVar4;
        return uVar4;
      }
      iVar6 = iVar5 + 1;
      puVar2 = auStack_3f + iVar5;
      iVar5 = iVar6;
    } while (iVar6 < 0x14);
  }
  return uVar7 & 0xff;
}

