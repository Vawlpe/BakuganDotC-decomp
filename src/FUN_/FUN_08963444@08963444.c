#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08963444(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  
  bVar8 = *(byte *)(param_1 + 0x4f90);
  if (4 < bVar8) {
    return 1;
  }
  if (bVar8 == 1) {
    cVar9 = '\0';
    if (*(char *)(param_1 + 0x4f94) == '\x01') {
      uVar3 = FUN_0895647c(param_1,1,*(undefined *)(param_1 + 0x4f9c));
      *(undefined *)(param_1 + 0x74) = uVar3;
      *(undefined *)(param_1 + 0x4f92) = 1;
    }
    else {
      do {
        iVar5 = FUN_089be994();
        cVar2 = *(char *)(param_1 + 0x74);
        *(char *)(param_1 + 0x4f93) = (char)(iVar5 % (int)(uint)*(byte *)(param_1 + 0x4f94));
        iVar5 = FUN_0895647c(param_1,1,
                             *(undefined *)(param_1 + (uint)*(byte *)(param_1 + 0x4f93) + 0x4f9c));
        if (cVar2 != iVar5) {
          uVar3 = FUN_0895647c(param_1,1,
                               *(undefined *)(param_1 + (uint)*(byte *)(param_1 + 0x4f93) + 0x4f9c))
          ;
          *(undefined *)(param_1 + 0x74) = uVar3;
          goto LAB_08963688;
        }
        bVar1 = cVar9 != '@';
        cVar9 = cVar9 + '\x01';
      } while (bVar1);
      iVar5 = 0;
      if (*(char *)(param_1 + 0x4f94) != '\0') {
        *(undefined *)(param_1 + 0x4f93) = 0;
        while (cVar9 = *(char *)(param_1 + 0x74),
              iVar6 = FUN_0895647c(param_1,1,
                                   *(undefined *)
                                    (param_1 + (uint)*(byte *)(param_1 + 0x4f93) + 0x4f9c)),
              cVar9 == iVar6) {
          iVar5 = iVar5 + 1;
          if ((int)(uint)*(byte *)(param_1 + 0x4f94) <= iVar5) goto LAB_08963688;
          *(char *)(param_1 + 0x4f93) = (char)iVar5;
        }
        uVar3 = FUN_0895647c(param_1,1,
                             *(undefined *)(param_1 + (uint)*(byte *)(param_1 + 0x4f93) + 0x4f9c));
        *(undefined *)(param_1 + 0x74) = uVar3;
      }
    }
LAB_08963688:
    iVar5 = FUN_089c59d4();
    if (iVar5 != 0) {
      uVar7 = FUN_089c59f0();
      FUN_089c6350(uVar7,1,0,0);
    }
    FUN_0895ae70(param_1);
    FUN_0895e550(param_1);
    *(char *)(param_1 + 0x4f90) = *(char *)(param_1 + 0x4f90) + '\x01';
  }
  else if (bVar8 == 2) {
    FUN_0895e580(param_1);
    *(undefined *)(param_1 + 0x4f95) = 2;
    *(char *)(param_1 + 0x4f90) = *(char *)(param_1 + 0x4f90) + '\x01';
  }
  else if (bVar8 == 3) {
    FUN_08962fa4(param_1);
    FUN_0895e844(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x4fb4) * 4),
                 param_1 + *(int *)(param_1 + 0x4fb4) * 0x28 + 0x78);
    if (*(char *)(param_1 + 0x4f95) == '\0') {
      *(char *)(param_1 + 0x4f91) = *(char *)(param_1 + 0x4f91) + '\x01';
      cVar9 = '\x01';
      if (*(char *)(param_1 + 0x4f91) == *(char *)(param_1 + 0x4f92)) {
        cVar9 = *(char *)(param_1 + 0x4f90) + '\x01';
      }
      *(char *)(param_1 + 0x4f90) = cVar9;
    }
    else {
      *(char *)(param_1 + 0x4f95) = *(char *)(param_1 + 0x4f95) + -1;
    }
  }
  else if (bVar8 == 4) {
    *(undefined *)(param_1 + 0x4f90) = 5;
  }
  else {
    *(undefined *)(param_1 + 0x4f94) = 0;
    uVar11 = 0;
    do {
      piVar4 = (int *)FUN_0880cc48();
      uVar11 = uVar11 + 1;
      if ((int)uVar11 < 0) {
        uVar10 = -(-uVar11 & 7) & 0x1f;
      }
      else {
        uVar10 = uVar11 & 7;
      }
      if (((uint)*(byte *)(*piVar4 + ((int)(uVar11 + ((uint)((int)uVar11 >> 3) >> 0x1d)) >> 3) +
                          0x5be) & 1 << uVar10) != 0) {
        bVar8 = *(byte *)(param_1 + 0x4f94);
        *(char *)(param_1 + (uint)bVar8 + 0x4f9c) = (char)uVar11;
        *(byte *)(param_1 + 0x4f94) = bVar8 + 1;
      }
    } while ((int)uVar11 < 0x14);
    *(undefined *)(param_1 + 0x75) = 0;
    *(undefined *)(param_1 + 0x4f93) = 0xff;
    iVar5 = FUN_089be994();
    bVar8 = (byte)iVar5 & 1;
    if (iVar5 < 0) {
      bVar8 = -bVar8;
    }
    *(byte *)(param_1 + 0x4f92) = bVar8 + 10;
    *(undefined *)(param_1 + 0x4f90) = 1;
  }
  return 0;
}

