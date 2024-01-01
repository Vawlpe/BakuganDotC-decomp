#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x08a270e4)

void FUN_08a26f68(undefined *param_1,undefined *param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined uVar6;
  int iVar7;
  int iVar8;
  
  switch(param_5) {
  case 1:
    iVar7 = 0;
    if (0 < param_4) {
      do {
        iVar3 = 0;
        puVar5 = param_1;
        if (0 < param_3) {
          do {
            iVar3 = iVar3 + 1;
            *puVar5 = *param_2;
            puVar1 = param_2 + 1;
            param_2 = param_2 + 2;
            puVar5[1] = *puVar1;
            puVar5 = puVar5 + 2;
          } while (param_3 != iVar3);
        }
        param_1 = param_1 + (param_3 * 2 + 0xfU & 0xfffffff0);
        iVar7 = iVar7 + 1;
      } while (param_4 != iVar7);
      return;
    }
    break;
  case 2:
    iVar7 = 0;
    if (0 < param_4) {
      do {
        iVar3 = 0;
        puVar5 = param_1;
        if (0 < param_3) {
          do {
            iVar3 = iVar3 + 1;
            *puVar5 = *param_2;
            puVar5[1] = param_2[1];
            uVar6 = param_2[2];
            puVar5[3] = 0xff;
            param_2 = param_2 + 3;
            puVar5[2] = uVar6;
            puVar5 = puVar5 + 4;
          } while (param_3 != iVar3);
        }
        param_1 = param_1 + (param_3 * 4 + 0xfU & 0xfffffff0);
        iVar7 = iVar7 + 1;
      } while (param_4 != iVar7);
      return;
    }
    break;
  case 3:
    iVar7 = 0;
    if (0 < param_4) {
      do {
        iVar3 = 0;
        puVar5 = param_1;
        if (0 < param_3) {
          do {
            bVar2 = param_2[3];
            *puVar5 = *param_2;
            puVar5[1] = param_2[1];
            uVar4 = (int)((uint)bVar2 * 0xff) >> 7;
            uVar6 = 0xff;
            if (uVar4 < 0x100) {
              uVar6 = (char)uVar4;
            }
            iVar3 = iVar3 + 1;
            puVar5[2] = param_2[2];
            param_2 = param_2 + 4;
            puVar5[3] = uVar6;
            puVar5 = puVar5 + 4;
          } while (param_3 != iVar3);
        }
        param_1 = param_1 + (param_3 * 4 + 0xfU & 0xfffffff0);
        iVar7 = iVar7 + 1;
      } while (param_4 != iVar7);
      return;
    }
    break;
  case 4:
    iVar7 = (param_3 + 1) / 2;
    iVar3 = 0;
    if (0 < param_4) {
      do {
        iVar8 = 0;
        puVar5 = param_1;
        if (0 < iVar7) {
          do {
            uVar6 = *param_2;
            iVar8 = iVar8 + 1;
            param_2 = param_2 + 1;
            *puVar5 = uVar6;
            puVar5 = puVar5 + 1;
          } while (iVar7 != iVar8);
        }
        param_1 = param_1 + (iVar7 + 0xfU & 0xfffffff0);
        iVar3 = iVar3 + 1;
      } while (param_4 != iVar3);
      return;
    }
    break;
  case 5:
    iVar7 = 0;
    if (0 < param_4) {
      do {
        iVar3 = 0;
        puVar5 = param_1;
        if (0 < param_3) {
          do {
            uVar6 = *param_2;
            iVar3 = iVar3 + 1;
            param_2 = param_2 + 1;
            *puVar5 = uVar6;
            puVar5 = puVar5 + 1;
          } while (param_3 != iVar3);
        }
        param_1 = param_1 + (param_3 + 0xfU & 0xfffffff0);
        iVar7 = iVar7 + 1;
      } while (param_4 != iVar7);
    }
  }
  return;
}

