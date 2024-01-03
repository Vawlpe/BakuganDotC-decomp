#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089637a4(int param_1,char param_2,uint param_3)

{
  char cVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  param_3 = param_3 & 0xff;
  iVar12 = param_3 + 1;
  if (param_2 == '\0') {
    FUN_0896026c(param_1,param_3);
  }
  uVar10 = (uint)*(ushort *)(param_1 + 0x5182) + *(ushort *)(param_1 + 0x5184) * param_3;
  if (uVar10 < (uint)*(ushort *)(param_1 + 0x5182) + (uint)*(ushort *)(param_1 + 0x5184) * iVar12) {
    do {
      FUN_08960100(param_1,param_2,uVar10 & 0xffff);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 <
             (int)((uint)*(ushort *)(param_1 + 0x5182) +
                  (uint)*(ushort *)(param_1 + 0x5184) * iVar12));
    uVar2 = *(ushort *)(param_1 + 0x518c);
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x518c);
  }
  uVar10 = (uint)*(ushort *)(param_1 + 0x518a) + uVar2 * param_3;
  if (uVar10 < (uint)*(ushort *)(param_1 + 0x518a) + (uint)uVar2 * iVar12) {
    do {
      FUN_08960100(param_1,param_2,uVar10 & 0xffff);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 <
             (int)((uint)*(ushort *)(param_1 + 0x518a) +
                  (uint)*(ushort *)(param_1 + 0x518c) * iVar12));
    uVar2 = *(ushort *)(param_1 + 0x51a0);
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x51a0);
  }
  uVar10 = (uint)*(ushort *)(param_1 + 0x519e) + uVar2 * param_3;
  iVar11 = uVar10 * 4;
  if (uVar10 < (uint)*(ushort *)(param_1 + 0x519e) + (uint)uVar2 * iVar12) {
    do {
      FUN_08960210(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11),0);
      FUN_08960100(param_1,param_2,uVar10 & 0xffff);
      uVar10 = uVar10 + 1;
      iVar11 = iVar11 + 4;
    } while ((int)uVar10 <
             (int)((uint)*(ushort *)(param_1 + 0x519e) +
                  (uint)*(ushort *)(param_1 + 0x51a0) * iVar12));
  }
  uVar10 = (uint)*(ushort *)(param_1 + 0x51a2) + *(ushort *)(param_1 + 0x51a4) * param_3;
  if (uVar10 < (uint)*(ushort *)(param_1 + 0x51a2) + (uint)*(ushort *)(param_1 + 0x51a4) * iVar12) {
    do {
      FUN_08960100(param_1,param_2,uVar10 & 0xffff);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 <
             (int)((uint)*(ushort *)(param_1 + 0x51a2) +
                  (uint)*(ushort *)(param_1 + 0x51a4) * iVar12));
    uVar2 = *(ushort *)(param_1 + 0x51ac);
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x51ac);
  }
  uVar10 = (uint)*(ushort *)(param_1 + 0x51aa) + uVar2 * param_3;
  if (uVar10 < (uint)*(ushort *)(param_1 + 0x51aa) + (uint)uVar2 * iVar12) {
    do {
      FUN_08960100(param_1,param_2,uVar10 & 0xffff);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 <
             (int)((uint)*(ushort *)(param_1 + 0x51aa) +
                  (uint)*(ushort *)(param_1 + 0x51ac) * iVar12));
    uVar2 = *(ushort *)(param_1 + 0x51b0);
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x51b0);
  }
  uVar10 = (uint)*(ushort *)(param_1 + 0x51ae) + uVar2 * param_3;
  if (uVar10 < (uint)*(ushort *)(param_1 + 0x51ae) + (uint)uVar2 * iVar12) {
    iVar11 = uVar10 * 4;
    do {
      FUN_08960100(param_1,param_2,uVar10 & 0xffff);
      if ((*(byte *)(param_1 + param_3 * 4 +
                     (uVar10 - ((uint)*(ushort *)(param_1 + 0x51ae) +
                               *(ushort *)(param_1 + 0x51b0) * param_3)) + 0x4fc8) & 1) == 0) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
        *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
        uVar2 = *(ushort *)(param_1 + 0x51b0);
      }
      else {
        uVar2 = *(ushort *)(param_1 + 0x51b0);
      }
      uVar10 = uVar10 + 1;
      iVar11 = iVar11 + 4;
    } while ((int)uVar10 < (int)((uint)*(ushort *)(param_1 + 0x51ae) + (uint)uVar2 * iVar12));
  }
  uVar10 = (uint)*(ushort *)(param_1 + 0x51b2) + *(ushort *)(param_1 + 0x51b4) * param_3;
  if (uVar10 < (uint)*(ushort *)(param_1 + 0x51b2) + (uint)*(ushort *)(param_1 + 0x51b4) * iVar12) {
    do {
      FUN_08960100(param_1,param_2,uVar10 & 0xffff);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 <
             (int)((uint)*(ushort *)(param_1 + 0x51b2) +
                  (uint)*(ushort *)(param_1 + 0x51b4) * iVar12));
    uVar2 = *(ushort *)(param_1 + 0x51bc);
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x51bc);
  }
  uVar10 = (uint)*(ushort *)(param_1 + 0x51ba) + uVar2 * param_3;
  if (uVar10 < (uint)*(ushort *)(param_1 + 0x51ba) + (uint)uVar2 * iVar12) {
    iVar11 = uVar10 * 4;
    do {
      FUN_08960100(param_1,param_2,uVar10 & 0xffff);
      if ((*(byte *)(param_1 + param_3 * 4 +
                     (uVar10 - ((uint)*(ushort *)(param_1 + 0x51ba) +
                               *(ushort *)(param_1 + 0x51bc) * param_3)) + 0x4fc8) & 1) == 0) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
        *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
        uVar2 = *(ushort *)(param_1 + 0x51bc);
      }
      else {
        uVar2 = *(ushort *)(param_1 + 0x51bc);
      }
      uVar10 = uVar10 + 1;
      iVar11 = iVar11 + 4;
    } while ((int)uVar10 < (int)((uint)*(ushort *)(param_1 + 0x51ba) + (uint)uVar2 * iVar12));
  }
  uVar10 = (uint)*(ushort *)(param_1 + 0x51c2) + *(ushort *)(param_1 + 0x51c4) * param_3;
  if (uVar10 < (uint)*(ushort *)(param_1 + 0x51c2) + (uint)*(ushort *)(param_1 + 0x51c4) * iVar12) {
    do {
      FUN_08960100(param_1,param_2,uVar10 & 0xffff);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 <
             (int)((uint)*(ushort *)(param_1 + 0x51c2) +
                  (uint)*(ushort *)(param_1 + 0x51c4) * iVar12));
    uVar2 = *(ushort *)(param_1 + 0x51c8);
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x51c8);
  }
  uVar10 = (uint)*(ushort *)(param_1 + 0x51c6) + uVar2 * param_3;
  if (uVar10 < (uint)*(ushort *)(param_1 + 0x51c6) + (uint)uVar2 * iVar12) {
    do {
      FUN_08960100(param_1,param_2,uVar10 & 0xffff);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 <
             (int)((uint)*(ushort *)(param_1 + 0x51c6) +
                  (uint)*(ushort *)(param_1 + 0x51c8) * iVar12));
    uVar2 = *(ushort *)(param_1 + 0x51d0);
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x51d0);
  }
  uVar10 = (uint)*(ushort *)(param_1 + 0x51ce) + uVar2 * param_3;
  if (uVar10 < (uint)*(ushort *)(param_1 + 0x51ce) + (uint)uVar2 * iVar12) {
    iVar11 = uVar10 * 4;
    do {
      FUN_08960100(param_1,param_2,uVar10 & 0xffff);
      cVar1 = *(char *)(param_1 + param_3 * 4 +
                        (uVar10 - ((uint)*(ushort *)(param_1 + 0x51ce) +
                                  *(ushort *)(param_1 + 0x51d0) * param_3)) + 0x4fb8);
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
      if (cVar1 == -1) {
        *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
        iVar6 = (uint)*(ushort *)(param_1 + 0x51ce) + (uint)*(ushort *)(param_1 + 0x51d0) * iVar12;
      }
      else {
        FUN_08932898(iVar6,cVar1);
        iVar6 = (uint)*(ushort *)(param_1 + 0x51ce) + (uint)*(ushort *)(param_1 + 0x51d0) * iVar12;
      }
      uVar10 = uVar10 + 1;
      iVar11 = iVar11 + 4;
    } while ((int)uVar10 < iVar6);
  }
  uVar10 = (uint)*(ushort *)(param_1 + 0x51d2) + *(ushort *)(param_1 + 0x51d4) * param_3;
  if (uVar10 < (uint)*(ushort *)(param_1 + 0x51d2) + (uint)*(ushort *)(param_1 + 0x51d4) * iVar12) {
    iVar11 = uVar10 * 4;
    do {
      FUN_08960100(param_1,param_2,uVar10 & 0xffff);
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
      if (*(char *)(param_1 + param_3 * 2 +
                    (uVar10 - ((uint)*(ushort *)(param_1 + 0x51d2) +
                              *(ushort *)(param_1 + 0x51d4) * param_3)) + 0x4fd8) == -1) {
        *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
        iVar6 = (uint)*(ushort *)(param_1 + 0x51d2) + (uint)*(ushort *)(param_1 + 0x51d4) * iVar12;
      }
      else {
        FUN_0892bdec();
        iVar6 = (uint)*(ushort *)(param_1 + 0x51d2) + (uint)*(ushort *)(param_1 + 0x51d4) * iVar12;
      }
      uVar10 = uVar10 + 1;
      iVar11 = iVar11 + 4;
    } while ((int)uVar10 < iVar6);
  }
  uVar10 = (uint)*(ushort *)(param_1 + 0x51da) + *(ushort *)(param_1 + 0x51dc) * param_3;
  iVar11 = uVar10 * 4;
  if (uVar10 < (uint)*(ushort *)(param_1 + 0x51da) + (uint)*(ushort *)(param_1 + 0x51dc) * iVar12) {
    do {
      FUN_08960100(param_1,param_2,uVar10 & 0xffff);
      FUN_089a56a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11),0);
      uVar10 = uVar10 + 1;
      iVar11 = iVar11 + 4;
    } while ((int)uVar10 <
             (int)((uint)*(ushort *)(param_1 + 0x51da) +
                  (uint)*(ushort *)(param_1 + 0x51dc) * iVar12));
  }
  uVar10 = (uint)*(ushort *)(param_1 + 0x51de) + *(ushort *)(param_1 + 0x51e0) * param_3;
  if (uVar10 < (uint)*(ushort *)(param_1 + 0x51de) + (uint)*(ushort *)(param_1 + 0x51e0) * iVar12) {
    iVar11 = uVar10 * 4;
    do {
      FUN_08960100(param_1,param_2,uVar10 & 0xffff);
      FUN_089a56a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11),2);
      if ((*(byte *)(param_1 + param_3 * 4 +
                     (uVar10 - ((uint)*(ushort *)(param_1 + 0x51de) +
                               *(ushort *)(param_1 + 0x51e0) * param_3)) + 0x4fc8) & 1) == 0) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
        *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
        uVar2 = *(ushort *)(param_1 + 0x51e0);
      }
      else {
        uVar2 = *(ushort *)(param_1 + 0x51e0);
      }
      uVar10 = uVar10 + 1;
      iVar11 = iVar11 + 4;
    } while ((int)uVar10 < (int)((uint)*(ushort *)(param_1 + 0x51de) + (uint)uVar2 * iVar12));
  }
  uVar10 = (uint)*(ushort *)(param_1 + 0x51e6) + *(ushort *)(param_1 + 0x51e8) * param_3;
  if (uVar10 < (uint)*(ushort *)(param_1 + 0x51e6) + (uint)*(ushort *)(param_1 + 0x51e8) * iVar12) {
    iVar11 = uVar10 * 4;
    do {
      FUN_08960100(param_1,param_2,uVar10 & 0xffff);
      if (*(char *)(param_1 + param_3 * 4 +
                    (uVar10 - ((uint)*(ushort *)(param_1 + 0x51e6) +
                              *(ushort *)(param_1 + 0x51e8) * param_3)) + 0x4fb8) == -1) {
        uVar2 = *(ushort *)(param_1 + 0x51e8);
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
        *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
        uVar2 = *(ushort *)(param_1 + 0x51e8);
      }
      uVar10 = uVar10 + 1;
      iVar11 = iVar11 + 4;
    } while ((int)uVar10 < (int)((uint)*(ushort *)(param_1 + 0x51e6) + (uint)uVar2 * iVar12));
  }
  uVar10 = (uint)*(ushort *)(param_1 + 0x51fa) + *(ushort *)(param_1 + 0x51fc) * param_3;
  if (uVar10 < (uint)*(ushort *)(param_1 + 0x51fa) + (uint)*(ushort *)(param_1 + 0x51fc) * iVar12) {
    iVar6 = param_1 + param_3 * 4;
    iVar11 = uVar10 * 4;
    do {
      FUN_08960100(param_1,param_2,uVar10 & 0xffff);
      if (*(char *)(iVar6 + (uVar10 - ((uint)*(ushort *)(param_1 + 0x51fa) +
                                      *(ushort *)(param_1 + 0x51fc) * param_3)) + 0x4fb8) == -1) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
        uVar5 = (uint)*(ushort *)(param_1 + 0x51fa);
        uVar7 = (uint)*(ushort *)(param_1 + 0x51fc);
      }
      else {
        piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
        uVar7 = (uint)*(ushort *)(param_1 + 0x51fc);
        uVar5 = (uint)*(ushort *)(param_1 + 0x51fa);
        uVar8 = (uint)*(byte *)(iVar6 + (uVar10 - (uVar5 + uVar7 * param_3)) + 0x4fb8);
        if ((int)uVar8 < 0) {
          uVar9 = -(-uVar8 & 7) & 0x1f;
        }
        else {
          uVar9 = uVar8 & 7;
        }
        if (((uint)*(byte *)(*piVar3 + ((int)uVar8 >> 3) + 0x5e8) & 1 << uVar9) != 0) {
          iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
          *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
          uVar5 = (uint)*(ushort *)(param_1 + 0x51fa);
          uVar7 = (uint)*(ushort *)(param_1 + 0x51fc);
        }
      }
      uVar10 = uVar10 + 1;
      iVar11 = iVar11 + 4;
    } while ((int)uVar10 < (int)(uVar5 + uVar7 * iVar12));
  }
  return;
}

