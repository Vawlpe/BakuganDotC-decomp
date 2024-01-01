#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e4c80(int param_1)

{
  char cVar1;
  undefined auVar2 [12];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  if (*(int *)(param_1 + 0x314) == 0) {
    FUN_088e2788(param_1,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x140) == 8) {
    if (*(int *)(param_1 + 0x4d0) == 0) {
      iVar12 = *(int *)(param_1 + 0x418);
    }
    else {
      *(uint *)(*(int *)(param_1 + 0x4d0) + 0xd0) =
           *(uint *)(*(int *)(param_1 + 0x4d0) + 0xd0) & 0xfffffffe;
      iVar12 = *(int *)(param_1 + 0x418);
    }
    *(undefined *)(iVar12 + 0x1f5) = 0;
    *(undefined *)(param_1 + 0x1c8) = 0;
    *(undefined4 *)(param_1 + 0x324) = 0;
    FUN_088e2788(param_1,0,0);
    return;
  }
  auVar2 = vscl_t(*(undefined (*) [12])(param_1 + 0x80),0x3f4ccccd);
  *(int *)*(undefined (*) [12])(param_1 + 0x80) = auVar2._0_4_;
  *(int *)(param_1 + 0x88) = auVar2._8_4_;
  *(undefined *)(param_1 + 0x3af) = 0;
  switch(*(undefined4 *)(param_1 + 0x324)) {
  case 0:
    uVar11 = *(undefined4 *)(param_1 + 0x20);
    uVar3 = *(undefined4 *)(param_1 + 0x24);
    uVar4 = *(undefined4 *)(param_1 + 0x28);
    uVar6 = *(undefined4 *)(param_1 + 0x2c);
    FUN_0880cc48();
    iVar12 = FUN_0880df5c(0xffffffff);
    if ((*(int *)(param_1 + 0x418) != 0) && (*(char *)(*(int *)(param_1 + 0x418) + 500) != '\0')) {
      FUN_088e2788(param_1,0,0);
      return;
    }
    *(undefined4 *)(param_1 + 0x2f0) = in_V72;
    *(undefined4 *)(param_1 + 0x2f4) = in_V76;
    *(undefined4 *)(param_1 + 0x2f8) = in_V7A;
    *(undefined4 *)(param_1 + 0x2fc) = in_V7E;
    iVar8 = FUN_088be254();
    if (iVar8 == 0) {
      iVar8 = *(int *)(param_1 + 0x4a0);
    }
    else if (*(int *)(param_1 + 0x4d0) == 0) {
      iVar8 = FUN_088be274();
      iVar8 = FUN_089f5700(*(undefined4 *)(iVar8 + 0x5fc),"ret_aim");
      *(int *)(param_1 + 0x4d0) = iVar8;
      uVar9 = *(undefined4 *)(param_1 + 0x2f4);
      uVar5 = *(undefined4 *)(param_1 + 0x2f8);
      uVar7 = *(undefined4 *)(param_1 + 0x2fc);
      *(undefined4 *)(iVar8 + 0x60) = *(undefined4 *)(param_1 + 0x2f0);
      *(undefined4 *)(iVar8 + 100) = uVar9;
      *(undefined4 *)(iVar8 + 0x68) = uVar5;
      *(undefined4 *)(iVar8 + 0x6c) = uVar7;
      uVar10 = *(uint *)(iVar8 + 0xd0) & 0xfffffffe;
      *(uint *)(iVar8 + 0xd0) = uVar10;
      *(uint *)(iVar8 + 0xd0) = uVar10 | 0x20;
      *(undefined4 *)(iVar8 + 0x70) = 0x40c00000;
      *(undefined4 *)(iVar8 + 0x74) = 0x40c00000;
      *(undefined4 *)(iVar8 + 0x78) = 0x40c00000;
      *(undefined4 *)(iVar8 + 0x7c) = 0;
      iVar8 = *(int *)(param_1 + 0x4a0);
    }
    else {
      iVar8 = *(int *)(param_1 + 0x4a0);
    }
    if (iVar8 != iVar12) {
      FUN_088e19a8(param_1,0x58,0);
    }
    FUN_088b8838(*(undefined4 *)(param_1 + 0x418));
    *(undefined4 *)(*(int *)(param_1 + 0x418) + 0x6c) = 0x3f800000;
    iVar12 = *(int *)(param_1 + 0x418);
    *(undefined4 *)(iVar12 + 0x4c) = 0;
    *(undefined4 *)(iVar12 + 0x40) = 0x3e4ccccd;
    *(undefined4 *)(iVar12 + 0x44) = 0x3e4ccccd;
    *(undefined4 *)(iVar12 + 0x48) = 0x3e4ccccd;
    if (*(char *)(param_1 + 0x4a9) == '\0') {
      uVar9 = FUN_089dedac(param_1,"Bip01_L_Hand");
      *(undefined4 *)(param_1 + 0x41c) = uVar9;
    }
    else {
      uVar9 = FUN_089dedac(param_1,"Bip01_R_Hand");
      *(undefined4 *)(param_1 + 0x41c) = uVar9;
    }
    iVar12 = *(int *)(param_1 + 0x418);
    *(undefined4 *)(iVar12 + 0x20) = uVar11;
    *(undefined4 *)(iVar12 + 0x24) = uVar3;
    *(undefined4 *)(iVar12 + 0x28) = uVar4;
    *(undefined4 *)(iVar12 + 0x2c) = uVar6;
    FUN_088b87bc(uVar6,*(undefined4 *)(param_1 + 0x418));
    if (*(int *)(param_1 + 0x41c) == 0) {
      *(undefined *)(param_1 + 0x4aa) = 1;
    }
    else {
      *(undefined *)(*(int *)(param_1 + 0x418) + 0x1d1) = 1;
      *(undefined *)(param_1 + 0x4aa) = 1;
    }
    *(undefined4 *)(param_1 + 0x4d4) = 0;
    *(undefined *)(param_1 + 0x3f1) = 0;
    FUN_088bad4c(*(undefined4 *)(param_1 + 0x314));
    *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
    (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
              (0x40000000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
    *(undefined *)(*(int *)(param_1 + 0x418) + 0x1f5) = 1;
    *(undefined *)(param_1 + 0x1c8) = 1;
  case 1:
    if ((*(char *)(param_1 + 0xb0) == '\0') &&
       (iVar12 = FUN_089df684(0x3f4ccccd,param_1), iVar12 == 0)) {
      cVar1 = *(char *)(param_1 + 0xb0);
    }
    else {
      FUN_088def24(0x3e4ccccd,param_1,0x1a,1,0);
      (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                (0x3f800000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
      *(undefined4 *)(param_1 + 0x324) = 2;
      cVar1 = *(char *)(param_1 + 0xb0);
    }
    if ((cVar1 == '\0') && (iVar12 = FUN_089df684(0x3f19999a,param_1), iVar12 == 0)) {
      uVar10 = *(uint *)(param_1 + 0x168);
    }
    else {
      FUN_088e4088(param_1);
      uVar10 = *(uint *)(param_1 + 0x168);
    }
    if ((uVar10 & 2) == 0) {
      uVar10 = *(uint *)(param_1 + 0x168);
    }
    else {
      iVar12 = FUN_089df684(0x3f4ccccd,param_1);
      if (iVar12 != 0) {
        iVar12 = FUN_089c59d4();
        if (iVar12 != 0) {
          uVar11 = FUN_089c59f0();
          iVar12 = FUN_089bed14(4);
          FUN_089c6350(uVar11,iVar12 + 0x5200000,0,0);
        }
        *(undefined *)(param_1 + 0x3f1) = 1;
        *(undefined4 *)(param_1 + 0x324) = 10;
        return;
      }
      uVar10 = *(uint *)(param_1 + 0x168);
    }
    if ((((uVar10 & 0x400000) == 0) && ((*(uint *)(param_1 + 0x168) & 0x300001) != 0)) &&
       (*(undefined4 *)(param_1 + 0x4d4) = 0, *(int *)(param_1 + 0x4d0) != 0)) {
      iVar12 = *(int *)(param_1 + 0x4d0);
      uVar11 = FUN_089f7720("ret_aim");
      *(undefined4 *)(iVar12 + 0xd4) = uVar11;
      *(uint *)(*(int *)(param_1 + 0x4d0) + 0xd0) = *(uint *)(*(int *)(param_1 + 0x4d0) + 0xd0) | 1;
    }
    return;
  case 2:
    FUN_088e4088(param_1);
    if ((*(uint *)(param_1 + 0x168) & 2) == 0) {
      if ((*(uint *)(param_1 + 0x168) & 0x400000) == 0) {
        if ((*(uint *)(param_1 + 0x168) & 0x300001) == 0) {
          iVar12 = FUN_088e1948();
          if ((iVar12 != 0) &&
             (cVar1 = *(char *)(param_1 + 0x3f0), iVar12 = FUN_088e1948(),
             cVar1 != *(char *)(iVar12 + 0x3a1))) {
            *(undefined4 *)(param_1 + 0x4d4) = 0;
            iVar12 = FUN_088e1948();
            *(undefined *)(param_1 + 0x3f0) = *(undefined *)(iVar12 + 0x3a1);
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x4d4) = 0;
          if (*(int *)(param_1 + 0x4d0) != 0) {
            iVar12 = *(int *)(param_1 + 0x4d0);
            uVar11 = FUN_089f7720("ret_aim");
            *(undefined4 *)(iVar12 + 0xd4) = uVar11;
            *(uint *)(*(int *)(param_1 + 0x4d0) + 0xd0) =
                 *(uint *)(*(int *)(param_1 + 0x4d0) + 0xd0) | 1;
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x324) = 100;
      }
    }
    else {
      iVar12 = FUN_089c59d4();
      if (iVar12 != 0) {
        uVar11 = FUN_089c59f0();
        iVar12 = FUN_089bed14(4);
        FUN_089c6350(uVar11,iVar12 + 0x5200000,0,0);
      }
      *(undefined *)(param_1 + 0x3f1) = 1;
      *(undefined4 *)(param_1 + 0x324) = 10;
    }
    *(undefined *)(param_1 + 0x3af) = 1;
    return;
  case 10:
    iVar12 = FUN_089c59d4();
    if (iVar12 != 0) {
      uVar11 = FUN_089c59f0();
      FUN_089c6350(uVar11,0x2c00000,0,0);
    }
    (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
              (0x3f800000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
    FUN_088def24(0x3e4ccccd,param_1,0x19,0,0);
    *(undefined2 *)(param_1 + 0x410) = 0;
    *(undefined *)(param_1 + 0x3f1) = 0;
    if (*(int *)(param_1 + 0x4d0) != 0) {
      if (*(int *)(param_1 + 0x4d0) == 0) {
        *(undefined4 *)(param_1 + 0x4d0) = 0;
      }
      else {
        iVar12 = *(int *)(*(int *)(param_1 + 0x4d0) + 0x14);
        (**(code **)(iVar12 + 0xc))(*(int *)(param_1 + 0x4d0) + (int)*(short *)(iVar12 + 8),3);
        *(undefined4 *)(param_1 + 0x4d0) = 0;
      }
    }
    *(undefined4 *)(*(int *)(param_1 + 0x314) + 0x304) = 2;
    *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
    goto LAB_088e52e0;
  case 0xb:
LAB_088e52e0:
    iVar12 = FUN_089df684(0x3e19999a,param_1);
    if (iVar12 == 0) {
      return;
    }
    FUN_088e3b34(param_1);
    *(undefined4 *)(param_1 + 0x41c) = 0;
    *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
    return;
  case 0xc:
    iVar12 = FUN_089df684(0x3f4ccccd,param_1);
    if (iVar12 == 0) {
      iVar12 = FUN_088e3f84(param_1);
      if (iVar12 == 0) {
        return;
      }
      iVar12 = *(int *)(param_1 + 0x324);
    }
    else {
      iVar12 = *(int *)(param_1 + 0x324);
    }
    *(undefined4 *)(param_1 + 0x2d0) = 0x3c;
    *(int *)(param_1 + 0x324) = iVar12 + 1;
  case 0xd:
    iVar12 = FUN_088e3f84(param_1);
    if ((iVar12 == 0) &&
       (iVar12 = *(int *)(param_1 + 0x2d0), *(int *)(param_1 + 0x2d0) = iVar12 + -1, 0 < iVar12)) {
      return;
    }
    *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    iVar12 = *(int *)(param_1 + 0x2d0);
    break;
  default:
    iVar12 = *(int *)(param_1 + 0x2d0);
  }
  if (iVar12 < 1) {
    *(undefined *)(param_1 + 0x4a8) = 0;
    FUN_088b7808(*(undefined4 *)(param_1 + 0x4a4),0);
    *(undefined4 *)(*(int *)(param_1 + 0x418) + 0x6c) = 0;
    iVar12 = *(int *)(param_1 + 0x4d0);
  }
  else {
    iVar12 = *(int *)(param_1 + 0x4d0);
  }
  if (iVar12 == 0) {
    uVar11 = *(undefined4 *)(param_1 + 0x314);
  }
  else {
    *(uint *)(*(int *)(param_1 + 0x4d0) + 0xd0) =
         *(uint *)(*(int *)(param_1 + 0x4d0) + 0xd0) & 0xfffffffe;
    uVar11 = *(undefined4 *)(param_1 + 0x314);
  }
  *(undefined *)(param_1 + 0x4aa) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  FUN_088bcc48(uVar11);
  *(undefined *)(*(int *)(param_1 + 0x418) + 0x1f5) = 0;
  *(undefined *)(param_1 + 0x1c8) = 0;
  FUN_088e2788(param_1,0,0);
  return;
}

