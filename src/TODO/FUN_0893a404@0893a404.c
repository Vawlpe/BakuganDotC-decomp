#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893a404(int param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = DAT_08ac19f0;
  cVar1 = *(char *)(param_1 + 0x5ee);
  if (param_2 == '\0') {
    if (cVar1 == '\x02') {
      uVar4 = (uint)*(byte *)(param_1 + 0x637);
      iVar8 = 0;
      if (uVar4 != 0) {
        iVar7 = 0;
        do {
          uVar4 = (uint)*(byte *)(param_1 + (uVar4 - iVar8) + 0x62f);
          FUN_089f4a90((float)(uVar4 / 5),(float)(uVar4 % 5),
                       *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x20));
          iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x20);
          *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
          FUN_08939b58(param_1,0,iVar8 + 8U & 0xff);
          uVar4 = (uint)*(byte *)(param_1 + 0x637);
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + 4;
        } while (iVar8 < (int)uVar4);
      }
    }
    else if (cVar1 == '\x05') {
      iVar7 = 1;
      uVar4 = 0;
      do {
        piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
        uVar4 = uVar4 + 1;
        if ((int)uVar4 < 0) {
          uVar6 = -(-uVar4 & 7) & 0x1f;
        }
        else {
          uVar6 = uVar4 & 7;
        }
        if (((uint)*(byte *)(*piVar2 + iVar8 +
                             ((int)(uVar4 + ((uint)((int)uVar4 >> 3) >> 0x1d)) >> 3) + 0x53c) &
            1 << uVar6) != 0) {
          iVar7 = iVar7 + 1;
        }
      } while ((int)uVar4 < 6);
      if (iVar7 == 6) {
        *(undefined *)(param_1 + 0x7f8) = 1;
      }
      piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
      uVar3 = _DONE_Get_DAT_08AAC9E0();
      iVar5 = FUN_0880d0ac(uVar3,0x14);
      uVar4 = iVar5 + 1;
      if ((int)uVar4 < 0) {
        uVar6 = -(-uVar4 & 7) & 0x1f;
      }
      else {
        uVar6 = uVar4 & 7;
      }
      if (((uint)*(byte *)(*piVar2 + iVar8 + ((int)(uVar4 + ((uint)((int)uVar4 >> 3) >> 0x1d)) >> 3)
                          + 0x53c) & 1 << uVar6) == 0) {
        iVar7 = iVar7 + 1;
      }
      FUN_089f4a90((float)(iVar7 / 5),(float)(iVar7 % 5),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3c));
      iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + 0x3c);
      *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) | 1;
      iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + 0x40);
      *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) | 1;
      FUN_089f4a90(0x3f800000,0x40000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x44));
      iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + 0x44);
      *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) | 1;
      FUN_08939b58(param_1,0,0xf);
      FUN_08939b58(param_1,0,0x10);
      FUN_08939b58(param_1,0,0x11);
    }
  }
  else if (cVar1 == '\x02') {
    if (*(char *)(param_1 + 0x637) != '\0') {
      uVar4 = 8;
      iVar8 = 0;
      do {
        FUN_08939b58(param_1,param_2,uVar4 & 0xff);
        iVar7 = iVar8 + 1;
        uVar4 = iVar8 + 9;
        iVar8 = iVar7;
      } while (iVar7 < (int)(uint)*(byte *)(param_1 + 0x637));
    }
  }
  else if (cVar1 == '\x05') {
    FUN_08939b58(param_1,param_2,0xf);
    FUN_08939b58(param_1,param_2,0x10);
    FUN_08939b58(param_1,param_2,0x11);
  }
  return;
}

