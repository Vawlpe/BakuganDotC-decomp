#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08978998(int param_1)

{
  char cVar1;
  undefined uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint local_30;
  
  uVar9 = 0;
  memset_jak(param_1 + 0x1250,0,0x18);
  memset_jak(param_1 + 0x1268,0,0x18);
  memset_jak(param_1 + 0x1280,0,2);
  memset_jak(param_1 + 0x1282,0,2);
  memset_jak(param_1 + 0x1284,0,2);
  memset_jak(param_1 + 0x1286,0,2);
  cVar1 = *(char *)(param_1 + 0xee5);
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      uVar7 = 0;
      uVar9 = 0;
      do {
        uVar9 = FUN_08978860(param_1,1,uVar9);
        uVar5 = uVar9 & 0xff;
        piVar3 = (int *)FUN_0880cc48();
        if ((int)uVar5 < 0) {
          uVar4 = -(-uVar5 & 7) & 0x1f;
        }
        else {
          uVar4 = uVar9 & 7;
        }
        if (((uint)*(byte *)(*piVar3 + ((int)uVar5 >> 3) + 0x5c3) & 1 << uVar4) != 0) {
          *(char *)(param_1 + uVar7 + 0x1250) = (char)uVar9;
          piVar3 = (int *)FUN_0880cc48();
          if ((int)uVar5 < 0) {
            uVar9 = -(-uVar5 & 7) & 0x1f;
          }
          else {
            uVar9 = uVar9 & 7;
          }
          if (((uint)*(byte *)(*piVar3 + ((int)uVar5 >> 3) + 0x5e3) & 1 << uVar9) == 0) {
            *(undefined *)(param_1 + uVar7 + 0x1268) = 1;
          }
        }
        uVar7 = uVar7 + 1;
        uVar9 = uVar7 & 0xff;
      } while ((int)uVar7 < 0x13);
    }
  }
  else {
    uVar7 = 0;
    if (cVar1 < '\x02') {
      uVar9 = 0;
      do {
        uVar9 = FUN_089788c8(param_1,1,uVar9);
        uVar5 = uVar9 & 0xff;
        piVar3 = (int *)FUN_0880cc48();
        if ((int)uVar5 < 0) {
          uVar4 = -(-uVar5 & 7) & 0x1f;
        }
        else {
          uVar4 = uVar9 & 7;
        }
        if (((uint)*(byte *)(*piVar3 + ((int)uVar5 >> 3) + 0x5c3) & 1 << uVar4) != 0) {
          *(char *)(param_1 + uVar7 + 0x1250) = (char)uVar9;
          piVar3 = (int *)FUN_0880cc48();
          if ((int)uVar5 < 0) {
            uVar9 = -(-uVar5 & 7) & 0x1f;
          }
          else {
            uVar9 = uVar9 & 7;
          }
          if (((uint)*(byte *)(*piVar3 + ((int)uVar5 >> 3) + 0x5e3) & 1 << uVar9) == 0) {
            *(undefined *)(param_1 + uVar7 + 0x1268) = 1;
          }
        }
        uVar7 = uVar7 + 1;
        uVar9 = uVar7 & 0xff;
      } while ((int)uVar7 < 0xb);
    }
    else if (cVar1 < '\x03') {
      iVar8 = 0;
      local_30 = 0;
      do {
        uVar5 = 0;
        iVar6 = local_30 + param_1;
        uVar7 = local_30;
        do {
          uVar2 = FUN_08978930(param_1,1,uVar7 & 0xff);
          piVar3 = (int *)FUN_0880cc48();
          uVar5 = uVar5 + 1;
          if ((int)uVar5 < 0) {
            uVar4 = -(-uVar5 & 7) & 0x1f;
          }
          else {
            uVar4 = uVar5 & 7;
          }
          if (((uint)*(byte *)(*piVar3 + iVar8 +
                               ((int)(uVar5 + ((uint)((int)uVar5 >> 3) >> 0x1d)) >> 3) + 0x53c) &
              1 << uVar4) != 0) {
            *(undefined *)(iVar6 + 0x1250) = uVar2;
            piVar3 = (int *)FUN_0880cc48();
            if ((int)uVar5 < 0) {
              uVar4 = -(-uVar5 & 7) & 0x1f;
            }
            else {
              uVar4 = uVar5 & 7;
            }
            if (((uint)*(byte *)(*piVar3 + iVar8 +
                                 ((int)(uVar5 + ((uint)((int)uVar5 >> 3) >> 0x1d)) >> 3) + 0x53e) &
                1 << uVar4) == 0) {
              *(undefined *)(iVar6 + 0x1268) = 1;
            }
          }
          uVar7 = uVar7 + 1;
          iVar6 = iVar6 + 1;
        } while ((int)uVar5 < 6);
        iVar8 = iVar8 + 1;
        local_30 = local_30 + 6;
      } while (iVar8 < 2);
      iVar8 = 0;
      do {
        if (iVar8 < 1) {
          if (-1 < iVar8) {
            uVar9 = 2;
          }
        }
        else if (iVar8 < 2) {
          uVar9 = 10;
        }
        piVar3 = (int *)FUN_0880cc48();
        if ((int)uVar9 < 0) {
          uVar7 = -(-uVar9 & 7) & 0x1f;
        }
        else {
          uVar7 = uVar9 & 7;
        }
        if (((uint)*(byte *)(*piVar3 + ((int)uVar9 >> 3) + 0x5c3) & 1 << uVar7) != 0) {
          *(char *)(param_1 + iVar8 + 0x1280) = (char)uVar9;
          piVar3 = (int *)FUN_0880cc48();
          if ((int)uVar9 < 0) {
            uVar7 = -(-uVar9 & 7) & 0x1f;
          }
          else {
            uVar7 = uVar9 & 7;
          }
          if (((uint)*(byte *)(*piVar3 + ((int)uVar9 >> 3) + 0x5e3) & 1 << uVar7) == 0) {
            *(undefined *)(param_1 + iVar8 + 0x1282) = 1;
          }
        }
        iVar8 = iVar8 + 1;
        iVar6 = 0;
      } while (iVar8 < 2);
      do {
        if (iVar6 < 1) {
          if (-1 < iVar6) {
            uVar9 = 1;
          }
        }
        else if (iVar6 < 2) {
          uVar9 = 9;
        }
        piVar3 = (int *)FUN_0880cc48();
        if ((int)uVar9 < 0) {
          uVar7 = -(-uVar9 & 7) & 0x1f;
        }
        else {
          uVar7 = uVar9 & 7;
        }
        if (((uint)*(byte *)(*piVar3 + ((int)uVar9 >> 3) + 0x5c3) & 1 << uVar7) != 0) {
          *(char *)(param_1 + iVar6 + 0x1284) = (char)uVar9;
          piVar3 = (int *)FUN_0880cc48();
          if ((int)uVar9 < 0) {
            uVar7 = -(-uVar9 & 7) & 0x1f;
          }
          else {
            uVar7 = uVar9 & 7;
          }
          if (((uint)*(byte *)(*piVar3 + ((int)uVar9 >> 3) + 0x5e3) & 1 << uVar7) == 0) {
            *(undefined *)(param_1 + iVar6 + 0x1286) = 1;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 2);
    }
  }
  return;
}

