#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08835254(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 in_V7C;
  
  iVar2 = FUN_0882c220(0xb);
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x8cc);
  if (iVar3 < 0x14) {
    switch(iVar3) {
    case 1:
switchD_088352b8_caseD_1:
      *(undefined4 *)(param_1 + 0x8b4) = 0;
      *(undefined4 *)(param_1 + 0x8bc) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x8fc) = 0;
      *(undefined4 *)(param_1 + 0x900) = 0;
      iVar2 = FUN_08834e38(param_1);
      iVar3 = 0x7e;
      iVar4 = 0x1f8;
      do {
        iVar6 = *(int *)(*(int *)(param_1 + 0x14) + iVar4);
        *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar4) + 0xbc) = 0;
        iVar4 = iVar4 + 4;
      } while (iVar3 < 0x84);
      fVar7 = *(float *)(param_1 + 0x8fc);
      fVar8 = *(float *)(param_1 + 0x900);
      *(int *)(param_1 + 0x8cc) = *(int *)(param_1 + 0x8cc) + 1;
      iVar3 = *(int *)(param_1 + 0x8d0);
      break;
    case 2:
switchD_088352b8_caseD_2:
      fVar7 = *(float *)(param_1 + 0x8fc);
      fVar8 = *(float *)(param_1 + 0x900);
      iVar3 = *(int *)(param_1 + 0x8d0);
      break;
    case 3:
switchD_088352b8_caseD_3:
      iVar3 = *(int *)(param_1 + 0x8d0);
      goto LAB_088354e0;
    case 4:
switchD_088352b8_caseD_4:
      iVar3 = *(int *)(param_1 + 0x8d0);
      goto LAB_088355a8;
    default:
      return iVar2;
    case 10:
switchD_088352b8_caseD_a:
      iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x3bc);
      goto LAB_08835624;
    }
    fVar7 = fVar7 + 0.14;
    *(float *)(param_1 + 0x8fc) = fVar7;
    if (iVar3 == -1) {
      fVar7 = fVar7 + 0.14;
      *(float *)(param_1 + 0x8fc) = fVar7;
    }
    if (fVar7 < 0.0) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = 1.570796;
      if (fVar7 <= 1.570796) {
        fVar5 = fVar7;
      }
    }
    *(float *)(param_1 + 0x8fc) = fVar5;
    *(float *)(param_1 + 0x900) = fVar8 + 0.07;
    if (1.0 <= fVar8 + 0.07) {
      *(undefined4 *)(param_1 + 0x900) = 0x3f800000;
    }
    uVar9 = vmul_s(fVar5,in_V7C);
    fVar7 = (float)vsin_s(uVar9);
    iVar3 = 0x7e;
    iVar4 = 0x1f8;
    do {
      iVar3 = iVar3 + 1;
      *(float *)(*(int *)(*(int *)(param_1 + 0x14) + iVar4) + 0xbc) = fVar7;
      iVar4 = iVar4 + 4;
    } while (iVar3 < 0x81);
    iVar3 = 0x81;
    iVar4 = 0x204;
    do {
      iVar3 = iVar3 + 1;
      *(float *)(*(int *)(*(int *)(param_1 + 0x14) + iVar4) + 0xbc) = fVar7;
      iVar4 = iVar4 + 4;
    } while (iVar3 < 0x84);
    *(float *)(param_1 + 0x8b4) = fVar7 * *(float *)(param_1 + 0xad0);
    if (fVar7 < 1.0) {
      return iVar2;
    }
    iVar3 = *(int *)(param_1 + 0x8d0);
    *(int *)(param_1 + 0x8cc) = *(int *)(param_1 + 0x8cc) + 1;
LAB_088354e0:
    if (iVar3 == -1) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x3bc);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3bc) + 0xbc) = 0x3f800000;
      *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3bc) + 0x60) =
           *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x200) + 0x60) + 32.0;
      *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3bc) + 100) =
           *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x200) + 100) + 68.0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3bc) + 0x6c) = 0;
      *(undefined4 *)(DAT_08ac58c4 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x8cc) = 10;
      return iVar2;
    }
    *(int *)(param_1 + 0x8cc) = *(int *)(param_1 + 0x8cc) + 1;
LAB_088355a8:
    *(int *)(param_1 + 0x8d0) = iVar3 + -1;
    if (0 < iVar3 + -1) {
      *(undefined4 *)(param_1 + 0x8b4) = *(undefined4 *)(param_1 + 0xad0);
      if (DAT_08aba77d == '\0') {
        return iVar2;
      }
      *(undefined4 *)(param_1 + 0x8b4) = 0;
      return iVar2;
    }
    *(undefined4 *)(param_1 + 0x8d0) = 0;
    *(undefined4 *)(param_1 + 0x8cc) = 0x14;
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x3bc);
LAB_08835624:
    fVar7 = *(float *)(iVar2 + 0x6c) + 1.0;
    *(float *)(iVar2 + 0x6c) = fVar7;
    iVar2 = *(int *)(param_1 + 0x14);
    iVar3 = *(int *)(iVar2 + 0x3bc);
    if (16.0 <= fVar7) {
      *(undefined4 *)(iVar3 + 0x6c) = 0;
      iVar2 = *(int *)(param_1 + 0x14);
      iVar3 = *(int *)(iVar2 + 0x3bc);
    }
    iVar2 = FUN_089f4b64((float)(int)(*(float *)(*(int *)(iVar2 + 0x3bc) + 0x6c) * 0.125),iVar3);
    if ((*(byte *)(*(int *)(param_1 + 0xa88) + 5) & 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x8b4) = *(undefined4 *)(param_1 + 0xad0);
      if (DAT_08aba77d == '\0') {
        return iVar2;
      }
      *(undefined4 *)(param_1 + 0x8b4) = 0;
      return iVar2;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x3bc);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x8cc) = 0x14;
    iVar3 = *(int *)(param_1 + 0x8d0);
LAB_088356e4:
    if ((iVar3 == 0) && (*(char *)(param_1 + 0x918) == '\0')) {
      *(undefined4 *)(param_1 + 0x8cc) = 0x1e;
      if (*(int *)(param_1 + 0x910) == 0) {
        return iVar2;
      }
      iVar2 = FUN_0889d9fc();
      if (iVar2 != 0) {
        return iVar2;
      }
      *(undefined *)(param_1 + 0x919) = 1;
      iVar2 = FUN_0889d9c8();
      return iVar2;
    }
    *(undefined4 *)(param_1 + 0x8fc) = 0x3fc90fdb;
    *(int *)(param_1 + 0x8cc) = *(int *)(param_1 + 0x8cc) + 1;
    iVar3 = *(int *)(param_1 + 0x914);
LAB_08835754:
    if (iVar3 == -1) {
      iVar3 = *(int *)(param_1 + 0x8cc);
    }
    else {
      iVar2 = FUN_089c2b10(1);
      if (iVar2 != 0) {
        uVar9 = FUN_089c2b48(1);
        iVar2 = FUN_089c3818(uVar9);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar2 = FUN_0884b248();
      if (((iVar2 != 0) && (iVar2 = FUN_0884b268(), *(int *)(iVar2 + 0x440) != 2)) &&
         (*(char *)(param_1 + 0x919) != '\0')) {
        FUN_0889d9e4();
      }
      iVar2 = FUN_0884b248();
      if (iVar2 == 0) {
        iVar3 = *(int *)(param_1 + 0x8cc);
        iVar2 = 0;
      }
      else {
        uVar9 = FUN_0884b268();
        iVar2 = FUN_0884e004(0x3f800000,0x3f800000,0x40000000,uVar9);
        iVar3 = *(int *)(param_1 + 0x8cc);
      }
    }
    *(int *)(param_1 + 0x8cc) = iVar3 + 1;
    fVar7 = *(float *)(param_1 + 0x8fc);
    fVar8 = *(float *)(param_1 + 0x900);
    iVar3 = *(int *)(param_1 + 0x8d0);
LAB_08835880:
    fVar7 = fVar7 - 0.2;
    *(float *)(param_1 + 0x8fc) = fVar7;
    if (iVar3 == -1) {
      fVar7 = fVar7 - 0.2;
      *(float *)(param_1 + 0x8fc) = fVar7;
    }
    if (fVar7 < 0.0) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = 1.570796;
      if (fVar7 <= 1.570796) {
        fVar5 = fVar7;
      }
    }
    *(float *)(param_1 + 0x8fc) = fVar5;
    uVar9 = vmul_s(fVar5,in_V7C);
    fVar7 = (float)vsin_s(uVar9);
    *(float *)(param_1 + 0x900) = fVar8 - 0.05;
    if (1.0 <= fVar8 - 0.05) {
      *(undefined4 *)(param_1 + 0x900) = 0x3f800000;
    }
    iVar3 = 0x7e;
    iVar4 = 0x1f8;
    do {
      iVar3 = iVar3 + 1;
      *(float *)(*(int *)(*(int *)(param_1 + 0x14) + iVar4) + 0xbc) = fVar7;
      iVar4 = iVar4 + 4;
    } while (iVar3 < 0x81);
    iVar3 = 0x81;
    iVar4 = 0x204;
    do {
      iVar3 = iVar3 + 1;
      *(float *)(*(int *)(*(int *)(param_1 + 0x14) + iVar4) + 0xbc) = fVar7;
      iVar4 = iVar4 + 4;
    } while (iVar3 < 0x84);
    *(float *)(param_1 + 0x8b4) = fVar7 * *(float *)(param_1 + 0xad0);
    if (0.0 < fVar7) {
      return iVar2;
    }
    *(undefined4 *)(param_1 + 0x8cc) = 0x1e;
    cVar1 = *(char *)(param_1 + 0x918);
LAB_0883597c:
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x8cc) = 100;
      return iVar2;
    }
    iVar2 = *(int *)(param_1 + 0x688);
    *(int *)(param_1 + 0x8cc) = *(int *)(param_1 + 0x8cc) + 1;
  }
  else {
    if (99 < iVar3) {
      iVar4 = 0x7e;
      if (100 < iVar3) {
        return iVar2;
      }
      iVar2 = 0x1f8;
      do {
        iVar4 = iVar4 + 1;
        iVar3 = *(int *)(*(int *)(param_1 + 0x14) + iVar2);
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
        iVar2 = iVar2 + 4;
      } while (iVar4 < 0x84);
      iVar2 = *(int *)(param_1 + 0x688);
      FUN_089f51b8(iVar2);
      *(undefined4 *)(iVar2 + 0x84) = 0;
      *(undefined4 *)(param_1 + 0x8cc) = 0;
      iVar2 = FUN_0884b248();
      if (((iVar2 != 0) && (iVar2 = FUN_0884b268(), *(int *)(iVar2 + 0x440) != 2)) &&
         (*(char *)(param_1 + 0x919) != '\0')) {
        iVar2 = FUN_0889d9e4();
      }
      *(undefined *)(param_1 + 0x919) = 0;
      *(undefined4 *)(param_1 + 0x914) = 0xffffffff;
      *(undefined4 *)(DAT_08ac58c4 + 0x30) = 1;
      return iVar2;
    }
    iVar4 = (iVar3 + -0x14) * 4;
    switch(iVar3) {
    case 0:
    case 7:
      return *(int *)(iVar4 + 0x578);
    case 1:
    case 9:
      return *(int *)(iVar4 + 0x57c);
    case 2:
      return *(int *)(iVar4 + 0x580);
    case 3:
      return *(int *)(iVar4 + 0x584);
    case 4:
    case 5:
      iVar2 = FUN_08833adc();
      return iVar2;
    case 6:
      iVar2 = FUN_08833b04();
      return iVar2;
    case 8:
      iVar2 = FUN_08833b20();
      return iVar2;
    case 10:
      goto switchD_088352b8_caseD_1;
    case 0xb:
      goto switchD_088352b8_caseD_2;
    case 0xc:
      goto switchD_088352b8_caseD_3;
    case 0xd:
      goto switchD_088352b8_caseD_4;
    default:
      goto switchD_088352b8_caseD_5;
    case 0x13:
      goto switchD_088352b8_caseD_a;
    case 0x14:
      iVar3 = *(int *)(param_1 + 0x8d0);
      goto LAB_088356e4;
    case 0x15:
      iVar3 = *(int *)(param_1 + 0x914);
      goto LAB_08835754;
    case 0x16:
      fVar7 = *(float *)(param_1 + 0x8fc);
      fVar8 = *(float *)(param_1 + 0x900);
      iVar3 = *(int *)(param_1 + 0x8d0);
      goto LAB_08835880;
    case 0x1e:
      cVar1 = *(char *)(param_1 + 0x918);
      goto LAB_0883597c;
    case 0x1f:
      iVar2 = *(int *)(param_1 + 0x688);
    }
  }
  FUN_089f51b8();
  *(undefined4 *)(iVar2 + 0x84) = 0;
  iVar2 = *(int *)(param_1 + 0x688);
  iVar2 = (**(code **)(*(int *)(iVar2 + 0x74) + 0x14))
                    (*(undefined4 *)(param_1 + 0x690),*(undefined4 *)(param_1 + 0x694),0x42400000,
                     iVar2 + *(short *)(*(int *)(iVar2 + 0x74) + 0x10),param_1 + 0x6a4,0,
                     *(undefined4 *)(iVar2 + 0xe8),0);
  *(char *)(param_1 + 0x918) = (char)iVar2;
  uVar9 = 0x2d;
  if ((*(float *)(*(int *)(param_1 + 0x688) + 0x98) * 4.0 < *(float *)(param_1 + 0x8c8)) &&
     (uVar9 = 0x87,
     *(float *)(param_1 + 0x8c8) <= *(float *)(*(int *)(param_1 + 0x688) + 0x98) * 5.0)) {
    uVar9 = 0x5a;
  }
  *(undefined4 *)(param_1 + 0x8d0) = uVar9;
  *(undefined4 *)(param_1 + 0x8cc) = 2;
switchD_088352b8_caseD_5:
  return iVar2;
}

