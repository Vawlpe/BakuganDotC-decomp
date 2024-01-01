#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a1060(int param_1,char param_2)

{
  byte bVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  
  if (param_2 == '\0') {
    iVar14 = 0x32;
    iVar12 = 200;
    iVar11 = param_1 + 0x844;
    do {
      iVar4 = iVar14 + -0x32;
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
      if (iVar4 < (int)(uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 +
                                                                                    0x109c) + 0x10a0
                                                                ) + 0x11b8)) {
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
        bVar1 = *(byte *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0)
                         + 0x11c2);
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar12);
      }
      else {
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
        bVar1 = *(byte *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0)
                         + 0x11c2);
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar12);
      }
      if (iVar4 < (int)(uint)bVar1) {
        FUN_0899c554(param_1,uVar6,1);
        cVar3 = *(char *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0)
                         + 0x11b8);
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
        fVar15 = *(float *)(param_1 + 0x11d0);
      }
      else {
        FUN_0899c554(param_1,uVar6,0);
        cVar3 = *(char *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0)
                         + 0x11b8);
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
        fVar15 = *(float *)(param_1 + 0x11d0);
      }
      if (cVar3 == '\x03') {
        *(float *)(iVar5 + 100) = fVar15;
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar12);
        fVar15 = (*(float *)(param_1 + 0x11d0) + *(float *)(param_1 + 0x11d4) * (float)iVar4) -
                 *(float *)(param_1 + 0x11d0);
      }
      else {
        *(float *)(iVar5 + 100) = fVar15 + *(float *)(param_1 + 0x11d4);
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar12);
        fVar15 = (*(float *)(param_1 + 0x11d0) + *(float *)(param_1 + 0x11d4) * (float)iVar4) -
                 *(float *)(param_1 + 0x11d0);
      }
      FUN_089a54cc(0x3f800000,0,fVar15,0,uVar6,iVar11,0xb);
      iVar14 = iVar14 + 1;
      iVar12 = iVar12 + 4;
      iVar11 = iVar11 + 0x28;
    } while (iVar14 < 0x35);
    iVar14 = 0x36;
    iVar12 = 0xd8;
    iVar11 = param_1 + 0x8e4;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
      fVar15 = *(float *)(param_1 + 0x11cc) - *(float *)(param_1 + 0x11d8);
      if (*(char *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0) +
                   0x11b8) == '\x03') {
        *(float *)(iVar4 + 0x60) = fVar15;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar12) + 100) =
             *(float *)(param_1 + 0x11d0) - *(float *)(param_1 + 0x11dc);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
      }
      else {
        *(float *)(iVar4 + 0x60) = fVar15;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar12) + 100) =
             (*(float *)(param_1 + 0x11d0) - *(float *)(param_1 + 0x11dc)) +
             *(float *)(param_1 + 0x11d4);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
      }
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      FUN_0899cf58(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar12),
                   *(undefined *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0));
      FUN_089a54cc(0x3f800000,0,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar12),iVar11,0xb);
      iVar14 = iVar14 + 1;
      iVar12 = iVar12 + 4;
      iVar11 = iVar11 + 0x28;
    } while (iVar14 < 0x37);
    iVar12 = 0x3a;
    iVar11 = 0xe8;
    iVar14 = param_1 + 0x984;
    do {
      uVar13 = iVar12 - 0x3a;
      iVar5 = (int)uVar13 % 3;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
      if (iVar5 < (int)(uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 +
                                                                                    0x109c) + 0x10a0
                                                                ) + 0x11c2)) {
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        uVar9 = (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0);
        piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
        iVar4 = *piVar7;
        if ((0x39 < iVar12) && (iVar12 < 0x3d)) {
          FUN_0899cf90(param_1,iVar4,*(undefined *)(param_1 + (uVar9 * 4 + iVar5) * 4 + 0x110f));
          uVar9 = (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0);
          piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
          iVar4 = *piVar7;
        }
      }
      else {
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
        uVar9 = (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0);
        piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
        iVar4 = *piVar7;
      }
      if (*(char *)(param_1 + uVar9 + 0x11b8) == '\x03') {
        if (uVar13 < 9) {
          fVar15 = *(float *)(param_1 + 0x11cc);
          switch(uVar13) {
          default:
            *(float *)(iVar4 + 0x60) = fVar15 - *(float *)(param_1 + 0x11e8);
            *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar11) + 100) =
                 *(float *)(param_1 + 0x11d0) - *(float *)(param_1 + 0x11ec);
            piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
            iVar4 = *piVar7;
            break;
          case 3:
          case 4:
          case 5:
            *(float *)(iVar4 + 0x60) = fVar15 - *(float *)(param_1 + 0x11e0);
            *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar11) + 100) =
                 *(float *)(param_1 + 0x11d0) - *(float *)(param_1 + 0x11e4);
            piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
            iVar4 = *piVar7;
            break;
          case 6:
          case 7:
          case 8:
            *(float *)(iVar4 + 0x60) = fVar15 - *(float *)(param_1 + 0x11f0);
            *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar11) + 100) =
                 *(float *)(param_1 + 0x11d0) - *(float *)(param_1 + 0x11f4);
            piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
            iVar4 = *piVar7;
          }
        }
      }
      else if (uVar13 < 9) {
        fVar15 = *(float *)(param_1 + 0x11cc);
        switch(uVar13) {
        default:
          *(float *)(iVar4 + 0x60) = fVar15 - *(float *)(param_1 + 0x11e8);
          *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar11) + 100) =
               (*(float *)(param_1 + 0x11d0) - *(float *)(param_1 + 0x11ec)) +
               *(float *)(param_1 + 0x11d4);
          piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
          iVar4 = *piVar7;
          break;
        case 3:
        case 4:
        case 5:
          *(float *)(iVar4 + 0x60) = fVar15 - *(float *)(param_1 + 0x11e0);
          *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar11) + 100) =
               (*(float *)(param_1 + 0x11d0) - *(float *)(param_1 + 0x11e4)) +
               *(float *)(param_1 + 0x11d4);
          piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
          iVar4 = *piVar7;
          break;
        case 6:
        case 7:
        case 8:
          *(float *)(iVar4 + 0x60) = fVar15 - *(float *)(param_1 + 0x11f0);
          *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar11) + 100) =
               (*(float *)(param_1 + 0x11d0) - *(float *)(param_1 + 0x11f4)) +
               *(float *)(param_1 + 0x11d4);
          piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
          iVar4 = *piVar7;
        }
      }
      FUN_089a54cc(0x3f800000,0,
                   (*(float *)(*piVar7 + 100) + *(float *)(param_1 + 0x11d4) * (float)iVar5) -
                   *(float *)(*piVar7 + 100),0,iVar4,iVar14,0xb);
      iVar12 = iVar12 + 1;
      iVar11 = iVar11 + 4;
      iVar14 = iVar14 + 0x28;
    } while (iVar12 < 0x43);
    iVar12 = 0x43;
    iVar11 = 0x10c;
    iVar14 = param_1 + 0xaec;
    do {
      uVar13 = iVar12 - 0x43;
      iVar5 = (int)uVar13 % 3;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
      if (iVar5 < (int)(uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 +
                                                                                    0x109c) + 0x10a0
                                                                ) + 0x11c2)) {
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        uVar9 = (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0);
        piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
        iVar4 = *piVar7;
        if ((0x45 < iVar12) && (iVar12 < 0x49)) {
          FUN_0899d034(param_1,iVar4,*(undefined *)(param_1 + (uVar9 * 4 + iVar5) * 4 + 0x110e));
          uVar9 = (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0);
          piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
          iVar4 = *piVar7;
        }
      }
      else {
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
        uVar9 = (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0);
        piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
        iVar4 = *piVar7;
      }
      if (*(char *)(param_1 + uVar9 + 0x11b8) == '\x03') {
        if (uVar13 < 6) {
          if (((uVar13 == 3) || (uVar13 == 4)) || (uVar13 == 5)) {
            *(float *)(iVar4 + 0x60) = *(float *)(param_1 + 0x11cc) - *(float *)(param_1 + 0x1200);
            *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar11) + 100) =
                 *(float *)(param_1 + 0x11d0) - *(float *)(param_1 + 0x1204);
            piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
            iVar4 = *piVar7;
          }
          else {
            *(float *)(iVar4 + 0x60) = *(float *)(param_1 + 0x11cc) - *(float *)(param_1 + 0x11f8);
            *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar11) + 100) =
                 *(float *)(param_1 + 0x11d0) - *(float *)(param_1 + 0x11fc);
            piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
            iVar4 = *piVar7;
          }
        }
      }
      else if (uVar13 < 6) {
        if (((uVar13 == 3) || (uVar13 == 4)) || (uVar13 == 5)) {
          *(float *)(iVar4 + 0x60) = *(float *)(param_1 + 0x11cc) - *(float *)(param_1 + 0x1200);
          *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar11) + 100) =
               (*(float *)(param_1 + 0x11d0) - *(float *)(param_1 + 0x1204)) +
               *(float *)(param_1 + 0x11d4);
          piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
          iVar4 = *piVar7;
        }
        else {
          *(float *)(iVar4 + 0x60) = *(float *)(param_1 + 0x11cc) - *(float *)(param_1 + 0x11f8);
          *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar11) + 100) =
               (*(float *)(param_1 + 0x11d0) - *(float *)(param_1 + 0x11fc)) +
               *(float *)(param_1 + 0x11d4);
          piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
          iVar4 = *piVar7;
        }
      }
      FUN_089a54cc(0x3f800000,0,
                   (*(float *)(*piVar7 + 100) + *(float *)(param_1 + 0x11d4) * (float)iVar5) -
                   *(float *)(*piVar7 + 100),0,iVar4,iVar14,0xb);
      iVar12 = iVar12 + 1;
      iVar11 = iVar11 + 4;
      iVar14 = iVar14 + 0x28;
    } while (iVar12 < 0x49);
    iVar14 = 0x37;
    iVar12 = 0xdc;
    iVar11 = param_1 + 0x90c;
    do {
      iVar5 = (iVar14 + -0x37) % 3;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
      if (iVar5 < (int)(uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 +
                                                                                    0x109c) + 0x10a0
                                                                ) + 0x11c2)) {
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        cVar3 = *(char *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0)
                         + 0x11b8);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
        fVar15 = *(float *)(param_1 + 0x11cc) - *(float *)(param_1 + 0x1208);
      }
      else {
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
        cVar3 = *(char *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0)
                         + 0x11b8);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
        fVar15 = *(float *)(param_1 + 0x11cc) - *(float *)(param_1 + 0x1208);
      }
      if (cVar3 == '\x03') {
        *(float *)(iVar4 + 0x60) = fVar15;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar12) + 100) =
             *(float *)(param_1 + 0x11d0) - *(float *)(param_1 + 0x120c);
        fVar15 = *(float *)(param_1 + 0x11d4);
        piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar12);
        iVar10 = *piVar7;
        iVar4 = *piVar7;
        iVar8 = *piVar7;
      }
      else {
        *(float *)(iVar4 + 0x60) = fVar15;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar12) + 100) =
             (*(float *)(param_1 + 0x11d0) - *(float *)(param_1 + 0x120c)) +
             *(float *)(param_1 + 0x11d4);
        fVar15 = *(float *)(param_1 + 0x11d4);
        piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar12);
        iVar10 = *piVar7;
        iVar4 = *piVar7;
        iVar8 = *piVar7;
      }
      FUN_089a54cc(0x3f800000,0,
                   (*(float *)(iVar4 + 100) + fVar15 * (float)iVar5) - *(float *)(iVar8 + 100),0,
                   iVar10,iVar11,0xb);
      iVar14 = iVar14 + 1;
      iVar12 = iVar12 + 4;
      iVar11 = iVar11 + 0x28;
    } while (iVar14 < 0x3a);
    uVar13 = 0;
    cVar3 = *(char *)(param_1 + 0x109c);
    while( true ) {
      uVar9 = (uint)*(byte *)(param_1 + cVar3 + 0x10a0);
      iVar11 = param_1 + uVar9;
      if ((int)uVar13 < (int)(uint)*(byte *)(iVar11 + 0x11c2)) {
        uVar2 = *(undefined2 *)(param_1 + (uVar9 * 4 + uVar13) * 4 + 0x1110);
        if (*(char *)(iVar11 + 0x11b8) == '\x03') {
          FUN_0899d074(0,param_1,uVar13 & 0xff,uVar2);
        }
        else {
          FUN_0899d074(*(undefined4 *)(param_1 + 0x11d4),param_1,uVar13 & 0xff,uVar2);
        }
      }
      uVar13 = uVar13 + 1;
      if (2 < (int)uVar13) break;
      cVar3 = *(char *)(param_1 + 0x109c);
    }
    iVar14 = 0x49;
    iVar12 = 0x124;
    iVar11 = param_1 + 0xbdc;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
      FUN_089a54cc(0x3f800000,0,
                   (*(float *)(iVar4 + 100) +
                   *(float *)(param_1 + 0x11d4) * (float)((iVar14 + -0x49) / 5)) -
                   *(float *)(iVar4 + 100),0,iVar4,iVar11,0xb);
      iVar14 = iVar14 + 1;
      iVar12 = iVar12 + 4;
      iVar11 = iVar11 + 0x28;
    } while (iVar14 < 0x58);
    iVar14 = 0x58;
    iVar12 = 0x160;
    iVar11 = param_1 + 0xe34;
    do {
      iVar8 = (iVar14 + -0x58) % 3;
      iVar4 = param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0);
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
      if (iVar8 < (int)(uint)*(byte *)(iVar4 + 0x11c2)) {
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
        cVar3 = *(char *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0)
                         + 0x11b8);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
        fVar15 = *(float *)(param_1 + 0x11cc) - *(float *)(param_1 + 0x1218);
      }
      else if (*(char *)(iVar4 + 0x11b8) == '\x03') {
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
        cVar3 = *(char *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0)
                         + 0x11b8);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
        fVar15 = *(float *)(param_1 + 0x11cc) - *(float *)(param_1 + 0x1218);
      }
      else if (iVar8 == 0) {
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
        cVar3 = *(char *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0)
                         + 0x11b8);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
        fVar15 = *(float *)(param_1 + 0x11cc) - *(float *)(param_1 + 0x1218);
      }
      else {
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
        cVar3 = *(char *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0)
                         + 0x11b8);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
        fVar15 = *(float *)(param_1 + 0x11cc) - *(float *)(param_1 + 0x1218);
      }
      if (cVar3 == '\x03') {
        *(float *)(iVar4 + 0x60) = fVar15;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar12) + 100) =
             *(float *)(param_1 + 0x11d0) - *(float *)(param_1 + 0x121c);
        fVar15 = *(float *)(param_1 + 0x11d4);
        piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar12);
        iVar5 = *piVar7;
        iVar4 = *piVar7;
        iVar10 = *piVar7;
      }
      else {
        *(float *)(iVar4 + 0x60) = fVar15;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar12) + 100) =
             (*(float *)(param_1 + 0x11d0) - *(float *)(param_1 + 0x121c)) +
             *(float *)(param_1 + 0x11d4);
        fVar15 = *(float *)(param_1 + 0x11d4);
        piVar7 = (int *)(*(int *)(param_1 + 0x1c) + iVar12);
        iVar5 = *piVar7;
        iVar4 = *piVar7;
        iVar10 = *piVar7;
      }
      FUN_089a54cc(0x3f800000,0,
                   (*(float *)(iVar4 + 100) + fVar15 * (float)iVar8) - *(float *)(iVar10 + 100),0,
                   iVar5,iVar11,0xb);
      iVar14 = iVar14 + 1;
      iVar12 = iVar12 + 4;
      iVar11 = iVar11 + 0x28;
    } while (iVar14 < 0x5b);
    FUN_0899d260(param_1);
  }
  else {
    iVar14 = 0x32;
    iVar12 = 200;
    iVar11 = param_1 + 0x844;
    do {
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(param_1 + 0x11d0) -
                   (*(float *)(param_1 + 0x11d0) +
                   *(float *)(param_1 + 0x11d4) * (float)(iVar14 + -0x32)),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar12),iVar11,0xb);
      iVar14 = iVar14 + 1;
      iVar12 = iVar12 + 4;
      iVar11 = iVar11 + 0x28;
    } while (iVar14 < 0x35);
    iVar14 = 0x36;
    iVar12 = 0xd8;
    iVar11 = param_1 + 0x8e4;
    do {
      FUN_089a54cc(0x3f800000,0,0,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar12),iVar11,
                   0xb);
      iVar14 = iVar14 + 1;
      iVar12 = iVar12 + 4;
      iVar11 = iVar11 + 0x28;
    } while (iVar14 < 0x37);
    iVar14 = 0x3a;
    iVar12 = 0xe8;
    iVar11 = param_1 + 0x984;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(iVar4 + 100) -
                   (*(float *)(iVar4 + 100) +
                   *(float *)(param_1 + 0x11d4) * (float)((iVar14 + -0x3a) % 3)),param_2,iVar4,
                   iVar11,0xb);
      iVar14 = iVar14 + 1;
      iVar12 = iVar12 + 4;
      iVar11 = iVar11 + 0x28;
    } while (iVar14 < 0x43);
    iVar14 = 0x43;
    iVar12 = 0x10c;
    iVar11 = param_1 + 0xaec;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(iVar4 + 100) -
                   (*(float *)(iVar4 + 100) +
                   *(float *)(param_1 + 0x11d4) * (float)((iVar14 + -0x43) % 3)),param_2,iVar4,
                   iVar11,0xb);
      iVar14 = iVar14 + 1;
      iVar12 = iVar12 + 4;
      iVar11 = iVar11 + 0x28;
    } while (iVar14 < 0x49);
    iVar14 = 0x37;
    iVar12 = 0xdc;
    iVar11 = param_1 + 0x90c;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(iVar4 + 100) -
                   (*(float *)(iVar4 + 100) +
                   *(float *)(param_1 + 0x11d4) * (float)((iVar14 + -0x37) % 3)),param_2,iVar4,
                   iVar11,0xb);
      iVar14 = iVar14 + 1;
      iVar12 = iVar12 + 4;
      iVar11 = iVar11 + 0x28;
    } while (iVar14 < 0x3a);
    iVar14 = 0x49;
    iVar12 = 0x124;
    iVar11 = param_1 + 0xbdc;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(iVar4 + 100) -
                   (*(float *)(iVar4 + 100) +
                   *(float *)(param_1 + 0x11d4) * (float)((iVar14 + -0x49) / 5)),param_2,iVar4,
                   iVar11,0xb);
      iVar14 = iVar14 + 1;
      iVar12 = iVar12 + 4;
      iVar11 = iVar11 + 0x28;
    } while (iVar14 < 0x58);
    iVar11 = 0x58;
    iVar12 = 0x160;
    iVar14 = param_1 + 0xe34;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(iVar4 + 100) -
                   (*(float *)(iVar4 + 100) +
                   *(float *)(param_1 + 0x11d4) * (float)((iVar11 + -0x58) % 3)),param_2,iVar4,
                   iVar14,0xb);
      iVar11 = iVar11 + 1;
      iVar12 = iVar12 + 4;
      iVar14 = iVar14 + 0x28;
    } while (iVar11 < 0x5b);
  }
  return;
}

