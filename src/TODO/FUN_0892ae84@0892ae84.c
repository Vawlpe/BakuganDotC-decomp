#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892ae84(uint *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_20;
  uint local_1c;
  
  memset_jak((undefined *)&local_20,0,8);
  piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
  if (*(char *)(*piVar1 + 0x462) == '\0') {
    uVar7 = 1;
    do {
      uVar5 = uVar7 & 0xff;
      piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
      if ((int)uVar5 < 0) {
        uVar6 = -(-uVar5 & 7) & 0x1f;
      }
      else {
        uVar6 = uVar7 & 7;
      }
      if (((uint)*(byte *)(*piVar1 + ((int)uVar5 >> 3) + 0x50e) & 1 << uVar6) != 0) {
        uVar5 = FUN_0892ae34(0,uVar5);
        uVar6 = uVar5 & 0xff;
        if (uVar6 != 0) {
          piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
          if ((int)uVar6 < 0) {
            uVar5 = -(-uVar6 & 7) & 0x1f;
          }
          else {
            uVar5 = uVar5 & 7;
          }
          if (((uint)*(byte *)(*piVar1 + ((int)uVar6 >> 3) + 0x50e) & 1 << uVar5) != 0) {
            uVar5 = 1 << (uVar7 & 0x1f);
            local_20 = local_20 | uVar5;
            local_1c = local_1c | uVar5;
          }
        }
      }
      bVar4 = (int)uVar7 < 0x14;
      uVar7 = uVar7 + 1;
    } while (bVar4);
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    iVar3 = FUN_0880d0ac(uVar2,0x2e);
    if (iVar3 == 0) {
      iVar3 = *(int *)(DAT_08ac58c4 + 4);
      if (iVar3 == 0xd) {
        uVar7 = 1;
        do {
          if ((uVar7 & 0xff) != 0x10) {
            local_20 = local_20 | 1 << (uVar7 & 0x1f);
          }
          bVar4 = (int)uVar7 < 0x14;
          uVar7 = uVar7 + 1;
        } while (bVar4);
        iVar3 = *(int *)(DAT_08ac58c4 + 4);
      }
      switch(iVar3) {
      case 8:
      case 9:
      case 10:
      case 0xe:
      case 0x25:
        uVar7 = 1;
        do {
          uVar5 = uVar7 & 0xff;
          if (uVar5 < 3) {
            if (uVar5 != 0) {
LAB_0892b094:
              local_20 = local_20 | 1 << (uVar7 & 0x1f);
            }
          }
          else if (uVar5 == 0x10) goto LAB_0892b094;
          bVar4 = (int)uVar7 < 0x14;
          uVar7 = uVar7 + 1;
        } while (bVar4);
        iVar3 = *(int *)(DAT_08ac58c4 + 4);
      }
      if (iVar3 == 0x18) {
        uVar7 = 1;
        do {
          if ((uVar7 & 0xff) != 2) {
            local_20 = local_20 | 1 << (uVar7 & 0x1f);
          }
          bVar4 = (int)uVar7 < 0x14;
          uVar7 = uVar7 + 1;
        } while (bVar4);
      }
    }
  }
  *param_1 = local_20;
  param_1[1] = local_1c;
  return;
}

