#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a00960(undefined4 param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  
  uVar10 = 2;
  uVar2 = FUN_089c9d1c();
  iVar3 = FUN_089c9d1c(param_1);
  uVar4 = FUN_089c9e94(param_1);
  iVar5 = FUN_089c9d1c(param_1);
  uVar6 = FUN_089c9d1c(param_1);
  bVar1 = false;
  if (uVar2 < 8) {
    iVar9 = (int)(uVar2 * 4) >> 2;
    switch(uVar2) {
    default:
      iVar7 = FUN_089ebcf0();
      if (iVar7 == 0) {
        FUN_089ebb6c();
      }
      if (iVar9 < 1) {
        if (-1 < iVar9) {
          uVar8 = FUN_089ebd18();
          iVar3 = FUN_089ec1a4(uVar8,uVar4);
          if (iVar3 != 0) {
            bVar1 = true;
          }
        }
      }
      else if (iVar9 < 2) {
        uVar4 = FUN_089ebd18();
        iVar3 = FUN_089ec228(uVar4,*(undefined4 *)(PTR_PTR_DAT_08aae714 + iVar3 * 4));
        if (iVar3 != 0) {
          bVar1 = true;
        }
      }
      if (bVar1) {
        iVar3 = FUN_089ebd18();
        *(undefined4 *)(iVar3 + 0x10) = 0x47435000;
        if (iVar5 < 0x8000) {
          uVar4 = FUN_089ebd18();
          FUN_089ec2ac(uVar4,iVar5,0);
        }
        else {
          uVar4 = FUN_089ebd18();
          FUN_089ec2ac(uVar4,iVar5 + -0x10000,0);
        }
        iVar3 = FUN_089ebd18();
        *(undefined4 *)(iVar3 + 8) = uVar6;
        uVar10 = 0;
      }
      break;
    case 2:
      uVar10 = 0;
      uVar4 = FUN_089ebd18();
      FUN_089ec3d0(uVar4);
      break;
    case 3:
      uVar10 = 2;
      uVar4 = FUN_089ebd18();
      iVar3 = FUN_089ec3e0(uVar4);
      if (iVar3 != 0) {
        uVar10 = 0;
      }
      break;
    case 4:
    case 5:
      iVar7 = FUN_08816a90();
      if (iVar7 == 0) {
        FUN_08816868();
      }
      if (iVar9 < 5) {
        if (3 < iVar9) {
          uVar8 = FUN_08816aac();
          iVar3 = FUN_08816b20(uVar8,uVar4);
          if (iVar3 != 0) {
            bVar1 = true;
          }
        }
      }
      else if (iVar9 < 6) {
        uVar4 = FUN_08816aac();
        iVar3 = FUN_08816ba4(uVar4,*(undefined4 *)(PTR_PTR_DAT_08aae714 + iVar3 * 4));
        if (iVar3 != 0) {
          bVar1 = true;
        }
      }
      if (bVar1) {
        iVar3 = FUN_08816aac();
        *(undefined4 *)(iVar3 + 4) = 0x47435000;
        iVar3 = FUN_08816aac();
        *(undefined4 *)(iVar3 + 0x40) = uVar6;
        if (iVar5 < 0x8000) {
          uVar4 = FUN_08816aac();
          FUN_08816c28(uVar4,iVar5,0xffffffff);
        }
        else {
          uVar4 = FUN_08816aac();
          FUN_08816c28(uVar4,iVar5 + -0x10000,0xffffffff);
        }
        uVar10 = 0;
      }
      break;
    case 6:
      uVar10 = 0;
      uVar4 = FUN_08816aac();
      FUN_08816e48(uVar4);
      break;
    case 7:
      uVar10 = 2;
      uVar4 = FUN_08816aac();
      iVar3 = FUN_08816e58(uVar4);
      if (iVar3 != 0) {
        uVar10 = 0;
      }
    }
  }
  return uVar10;
}

