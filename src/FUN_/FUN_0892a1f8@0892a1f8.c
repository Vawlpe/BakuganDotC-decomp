#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892a1f8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  uint uVar10;
  int iVar11;
  undefined local_3a [18];
  undefined2 local_28;
  uint local_24;
  
  *(undefined2 *)(param_1 + 0x704) = 0xff;
  *(undefined2 *)(param_1 + 0x706) = 0xff;
  uVar6 = *(uint *)(DAT_08ac58c4 + 4);
  if ((uVar6 == 0) || (uVar6 == 0xd)) {
    *(undefined2 *)(param_1 + 0x704) = 0x12;
    FUN_089b1cac(0,2);
    FUN_089b1cac(0,4);
    return;
  }
  if (uVar6 == 1) {
    uVar9 = 0x12;
    uVar1 = FUN_0880cc48();
    iVar2 = FUN_0880d0ac(uVar1,0x1c);
    if (iVar2 == 1) {
      uVar9 = 0xe;
    }
    *(undefined2 *)(param_1 + 0x704) = uVar9;
    FUN_089b1cac(0,2);
    FUN_089b1cac(0,4);
    return;
  }
  if ((int)uVar6 < 0) {
    uVar7 = -(-uVar6 & 3) & 0xff;
  }
  else {
    uVar7 = uVar6 & 3;
  }
  uVar6 = FUN_089b203c((int)(uVar6 + ((uint)((int)uVar6 >> 2) >> 0x1e)) >> 2 & 0xff,uVar7);
  uVar7 = *(uint *)(DAT_08ac58c4 + 4);
  uVar10 = uVar6 & 0xff;
  if ((int)uVar7 < 0) {
    uVar8 = -(-uVar7 & 3) & 0xff;
  }
  else {
    uVar8 = uVar7 & 3;
  }
  local_24 = uVar6;
  FUN_089b1ec0(local_3a,(int)(uVar7 + ((uint)((int)uVar7 >> 2) >> 0x1e)) >> 2 & 0xff,uVar8);
  uVar7 = FUN_0892ae34(0,uVar10);
  piVar3 = (int *)FUN_0880cc48();
  if ((uVar10 != *(uint *)(*piVar3 + 0x48c)) &&
     (piVar3 = (int *)FUN_0880cc48(0), (uVar7 & 0xff) != *(uint *)(*piVar3 + 0x48c))) {
    *(undefined2 *)(param_1 + 0x704) = 0x21;
    iVar2 = FUN_089b1d7c(2);
    if (iVar2 == 1) {
      switch(uVar10) {
      case 1:
        *(undefined2 *)(param_1 + 0x706) = 0x13;
        break;
      case 3:
        *(undefined2 *)(param_1 + 0x706) = 0x18;
        break;
      case 5:
        *(undefined2 *)(param_1 + 0x706) = 0x14;
        break;
      case 6:
        *(undefined2 *)(param_1 + 0x706) = 0x15;
        break;
      case 7:
        *(undefined2 *)(param_1 + 0x706) = 0x16;
        break;
      case 8:
        *(undefined2 *)(param_1 + 0x706) = 0x17;
      }
    }
    else {
      FUN_089b1cac(1,2);
    }
    FUN_089b1cac(0,4);
    return;
  }
  FUN_089b1cac(0,2);
  bVar5 = false;
  if (local_28._1_1_ != '\0') {
    iVar2 = 0;
    uVar7 = 0;
    do {
      piVar3 = (int *)FUN_0880cc48(bVar5);
      if (*(char *)(*piVar3 + (uVar7 & 0xff) + 0x84) != '\0') {
        iVar2 = iVar2 + 1;
      }
      uVar7 = uVar7 + 1;
      bVar5 = (int)uVar7 < 4;
    } while (bVar5);
    if (iVar2 == 0) {
      *(undefined2 *)(param_1 + 0x704) = 0x1a;
      FUN_089b1cac(0,4);
      return;
    }
    bVar5 = false;
    if (local_28._1_1_ != '\0') {
      iVar2 = 0;
      uVar7 = 0;
      uVar6 = uVar6 >> 8 & 0xff;
      do {
        piVar3 = (int *)FUN_0880cc48(bVar5);
        if (*(char *)(*piVar3 + (uVar7 & 0xff) + 0x84) != '\0') {
          piVar3 = (int *)FUN_0880cc48();
          uVar10 = FUN_0891c54c(1,(int)(*(byte *)(*piVar3 + (uVar7 & 0xff) + 0x84) - 0xe) / 3 & 0xff
                               );
          if (uVar6 == (uVar10 & 0xff)) {
            iVar2 = iVar2 + 1;
          }
        }
        uVar7 = uVar7 + 1;
        bVar5 = (int)uVar7 < 4;
      } while (bVar5);
      if (iVar2 == 0) {
        *(undefined2 *)(param_1 + 0x704) = 0x22;
        iVar2 = FUN_089b1d7c(4);
        if (iVar2 != 1) {
          FUN_089b1cac(1,4);
          return;
        }
        if (5 < uVar6) {
          return;
        }
        if (uVar6 == 1) {
          *(undefined2 *)(param_1 + 0x706) = 0x1c;
          return;
        }
        if (uVar6 != 2) {
          if (uVar6 == 3) {
            *(undefined2 *)(param_1 + 0x706) = 0x1d;
            return;
          }
          if (uVar6 != 4) {
            if (uVar6 != 5) {
              *(undefined2 *)(param_1 + 0x706) = 0x1b;
              return;
            }
            *(undefined2 *)(param_1 + 0x706) = 0x20;
            return;
          }
          *(undefined2 *)(param_1 + 0x706) = 0x1e;
          return;
        }
        *(undefined2 *)(param_1 + 0x706) = 0x1f;
        return;
      }
    }
  }
  FUN_089b1cac(0,4);
  iVar2 = 0;
  iVar11 = 0;
  do {
    piVar3 = (int *)FUN_0880cc48();
    piVar4 = (int *)FUN_0880cc48();
    if (*(char *)(*piVar3 + *(int *)(*piVar4 + 0x48c) * 6 + iVar11 + 0x540) == '\x01') {
      iVar2 = iVar2 + 1;
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 6);
  if (5 < iVar2) {
    uVar1 = FUN_0880cc48();
    iVar2 = FUN_0880d0ac(uVar1,0x1c);
    if (iVar2 == 1) {
      *(undefined2 *)(param_1 + 0x704) = 0xe;
    }
    else {
      *(undefined2 *)(param_1 + 0x704) = 0x12;
    }
    return;
  }
  *(undefined2 *)(param_1 + 0x704) = 0xd;
  return;
}

