#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08922cd8(int param_1,char param_2)

{
  byte bVar1;
  undefined uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  
  if (param_2 == '\0') {
    iVar10 = 0xa2;
    iVar8 = 0x288;
    iVar11 = param_1 + 0x19cc;
    do {
      uVar9 = iVar10 - 0xa2U & 0xff;
      iVar4 = param_1 + uVar9;
      if (*(char *)(iVar4 + 0x2130) != -1) {
        iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
        *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x128) = 2;
        FUN_0891fb78(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),
                     *(undefined *)(iVar4 + 0x2130));
        iVar4 = param_1 + uVar9 * 4;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x60) =
             (float)((int)*(short *)(iVar4 + 0x2138) << 3);
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 100) =
             (float)((int)*(short *)(iVar4 + 0x213a) << 3);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
        *(float *)(iVar4 + 0x68) = -2.0 - *(float *)(iVar4 + 100) * 0.125 * 7.0;
        FUN_089a54cc(0x3f800000,0xc2000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),
                     iVar11,9);
      }
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
      iVar11 = iVar11 + 0x28;
    } while (iVar10 < 0xa6);
    iVar10 = 0x45;
    iVar8 = 0x114;
    iVar11 = param_1 + 0xb44;
    do {
      uVar9 = iVar10 - 0x45U & 0xff;
      iVar4 = param_1 + uVar9;
      if (*(char *)(iVar4 + 0x2130) != -1) {
        iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
        *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x128) = 2;
        FUN_0891fc88(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),
                     *(undefined *)(iVar4 + 0x2130),2);
        iVar4 = param_1 + uVar9 * 4;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x60) =
             (float)((int)*(short *)(iVar4 + 0x2138) << 3) - *(float *)(param_1 + 0x2190);
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 100) =
             (float)((int)*(short *)(iVar4 + 0x213a) << 3) - *(float *)(param_1 + 0x2194);
        iVar4 = *(short *)(iVar4 + 0x213a) * 8;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
             (float)(((int)(iVar4 + ((uint)(iVar4 >> 3) >> 0x1d)) >> 3) * -7 + -3);
        FUN_089a54cc(0x3f800000,0xc2000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),
                     iVar11,9);
      }
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
      iVar11 = iVar11 + 0x28;
    } while (iVar10 < 0x49);
    iVar10 = 0x9f;
    iVar8 = 0x27c;
    iVar11 = param_1 + 0x1954;
    do {
      uVar9 = iVar10 - 0x9fU & 0xff;
      iVar4 = param_1 + uVar9;
      if (*(char *)(iVar4 + 0x2134) != -1) {
        iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
        *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x128) = 2;
        FUN_0891fcdc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),
                     *(undefined *)(param_1 + 0x2174),*(undefined *)(iVar4 + 0x2134));
        iVar4 = param_1 + uVar9 * 4;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x60) =
             (float)((int)*(short *)(iVar4 + 0x2148) << 3);
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 100) =
             (float)((int)*(short *)(iVar4 + 0x214a) << 3);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
        *(float *)(iVar4 + 0x68) = -2.0 - *(float *)(iVar4 + 100) * 0.125 * 7.0;
        FUN_089a54cc(0x3f800000,0xc2000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),
                     iVar11,9);
      }
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
      iVar11 = iVar11 + 0x28;
    } while (iVar10 < 0xa2);
    iVar11 = 0xaa;
    iVar10 = 0x2a8;
    iVar8 = param_1 + 0x1b0c;
    do {
      uVar9 = iVar11 - 0xaaU & 0xff;
      if (uVar9 < *(byte *)(param_1 + 0x2137)) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        iVar4 = param_1 + uVar9 * 4;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10) + 0x128) = 2;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10) + 0x60) =
             (float)((int)*(short *)(iVar4 + 0x2154) << 3);
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10) + 100) =
             (float)(*(short *)(iVar4 + 0x2156) * 8 + 0x10);
        iVar4 = *(short *)(iVar4 + 0x2156) * 8;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10) + 0x68) =
             (float)(((int)(iVar4 + ((uint)(iVar4 >> 3) >> 0x1d)) >> 3) * -7);
        FUN_089a54cc(0x3f800000,0xc2000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),
                     iVar8,9);
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar11 < 0xae);
    iVar10 = 0x62;
    iVar8 = 0x188;
    iVar11 = param_1 + 0xfcc;
    do {
      uVar9 = iVar10 - 0x62U & 0xff;
      if (uVar9 < *(byte *)(param_1 + 0x2137)) {
        piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
        if (*(char *)(*piVar3 + uVar9 + 0x84) == '\0') {
          iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
          *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x128) = 2;
          FUN_089f4a90((float)((uVar9 + 1) / 5),(float)((uVar9 + 1) % 5),
                       *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
          iVar4 = param_1 + uVar9 * 4;
          *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x60) =
               (float)((int)*(short *)(iVar4 + 0x2154) << 3);
          *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 100) =
               (float)(*(short *)(iVar4 + 0x2156) * 8 + 0x10) - *(float *)(param_1 + 0x21b4);
          iVar4 = *(short *)(iVar4 + 0x2156) * 8;
          *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
               (float)(((int)(iVar4 + ((uint)(iVar4 >> 3) >> 0x1d)) >> 3) * -7 + -1);
          FUN_089a54cc(0x3f800000,0xc2000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),
                       iVar11,9);
        }
      }
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
      iVar11 = iVar11 + 0x28;
    } while (iVar10 < 0x66);
    iVar10 = 0xa6;
    iVar8 = 0x298;
    iVar11 = param_1 + 0x1a6c;
    do {
      uVar9 = iVar10 - 0xa6U & 0xff;
      if ((uVar9 < *(byte *)(param_1 + 0x2137)) &&
         (piVar3 = (int *)DONE_Get_DAT_08AAC9E0(), *(char *)(*piVar3 + uVar9 + 0x84) != '\0')) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x128) = 2;
        uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
        piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
        bVar1 = *(byte *)(*piVar3 + uVar9 + 0x84);
        piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
        uVar2 = FUN_0891c54c(1,(int)(*(byte *)(*piVar3 + uVar9 + 0x84) - 0xe) / 3 & 0xff);
        FUN_0891fd24(param_1,uVar5,(int)(bVar1 - 0xe) % 3 & 0xff,uVar2);
        iVar4 = param_1 + uVar9 * 4;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x60) =
             (float)((int)*(short *)(iVar4 + 0x2154) << 3);
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 100) =
             (float)(*(short *)(iVar4 + 0x2156) * 8 + 0x10) - *(float *)(param_1 + 0x21a4);
        iVar4 = *(short *)(iVar4 + 0x2156) * 8;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
             (float)(((int)(iVar4 + ((uint)(iVar4 >> 3) >> 0x1d)) >> 3) * -7 + -2);
        FUN_089a54cc(0x3f800000,0xc2000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),
                     iVar11,9);
      }
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
      iVar11 = iVar11 + 0x28;
    } while (iVar10 < 0xaa);
    iVar10 = 0x41;
    iVar8 = 0x104;
    iVar11 = param_1 + 0xaa4;
    do {
      uVar9 = iVar10 - 0x41U & 0xff;
      if ((uVar9 < *(byte *)(param_1 + 0x2137)) &&
         (piVar3 = (int *)DONE_Get_DAT_08AAC9E0(), *(char *)(*piVar3 + uVar9 + 0x84) != '\0')) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x128) = 2;
        uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
        piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
        uVar2 = FUN_0891c54c(1,(int)(*(byte *)(*piVar3 + uVar9 + 0x84) - 0xe) / 3 & 0xff);
        FUN_0891fc88(param_1,uVar5,uVar2,0);
        iVar4 = param_1 + uVar9 * 4;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x60) =
             (float)((int)*(short *)(iVar4 + 0x2154) << 3) - *(float *)(param_1 + 0x21a8);
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 100) =
             (float)(*(short *)(iVar4 + 0x2156) * 8 + 0x10) - *(float *)(param_1 + 0x21ac);
        iVar4 = *(short *)(iVar4 + 0x2156) * 8;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
             (float)(((int)(iVar4 + ((uint)(iVar4 >> 3) >> 0x1d)) >> 3) * -7 + -3);
        FUN_089a54cc(0x3f800000,0xc2000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),
                     iVar11,9);
      }
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
      iVar11 = iVar11 + 0x28;
    } while (iVar10 < 0x45);
    iVar11 = 0xae;
    iVar10 = 0x2b8;
    iVar8 = param_1 + 0x1bac;
    do {
      uVar9 = iVar11 - 0xaeU & 0xff;
      if (*(char *)(param_1 + uVar9 * 2 + 0x212a) != -1) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        iVar4 = param_1 + uVar9 * 4;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10) + 0x128) = 2;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10) + 0x60) =
             (float)((int)*(short *)(iVar4 + 0x2168) << 3);
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10) + 100) =
             (float)((int)*(short *)(iVar4 + 0x216a) << 3);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
        *(float *)(iVar4 + 0x68) = -4.0 - *(float *)(iVar4 + 100) * 0.125 * 7.0;
        FUN_089a54cc(0x3f800000,0xc2000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),
                     iVar8,9);
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar11 < 0xb1);
    iVar11 = 0x93;
    iVar10 = 0x24c;
    iVar8 = param_1 + 0x1774;
    do {
      uVar9 = iVar11 - 0x93U & 0xff;
      iVar4 = param_1 + uVar9 * 2;
      if (*(char *)(iVar4 + 0x212a) != -1) {
        iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
        *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
        uVar6 = (uint)*(byte *)(iVar4 + 0x212b);
        FUN_089f4a90((float)(uVar6 / 3),(float)(uVar6 % 3),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10));
        iVar4 = param_1 + uVar9 * 4;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10) + 0x128) = 2;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10) + 0x60) =
             (float)((int)*(short *)(iVar4 + 0x2168) << 3);
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10) + 100) =
             (float)((int)*(short *)(iVar4 + 0x216a) << 3);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
        *(float *)(iVar4 + 0x68) = -5.0 - *(float *)(iVar4 + 100) * 0.125 * 7.0;
        FUN_089a54cc(0x3f800000,0xc2000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),
                     iVar8,9);
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar11 < 0x96);
    iVar11 = 0x9c;
    iVar10 = 0x270;
    iVar8 = param_1 + 0x18dc;
    do {
      uVar9 = iVar11 - 0x9cU & 0xff;
      iVar4 = param_1 + uVar9 * 2;
      if (*(char *)(iVar4 + 0x212a) != -1) {
        iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
        *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
        FUN_0891fc88(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),
                     *(undefined *)(iVar4 + 0x212b),0);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10) + 0x128) = 2;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
        iVar7 = param_1 + uVar9 * 4;
        *(undefined4 *)(iVar4 + 0xb0) = 0;
        *(undefined4 *)(iVar4 + 0xb4) = 0;
        *(undefined4 *)(iVar4 + 0xb8) = 0;
        *(undefined4 *)(iVar4 + 0xbc) = 0;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10) + 0x60) =
             (float)((int)*(short *)(iVar7 + 0x2168) << 3);
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10) + 100) =
             (float)((int)*(short *)(iVar7 + 0x216a) << 3);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
        *(float *)(iVar4 + 0x68) = -6.0 - *(float *)(iVar4 + 100) * 0.125 * 7.0;
        FUN_089a54cc(0x3f800000,0xc2000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),
                     iVar8,9);
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar11 < 0x9f);
    iVar11 = 0xb1;
    iVar10 = 0x2c4;
    iVar8 = param_1 + 0x1c24;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10) + 0x128) = 2;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
      fVar12 = (float)((int)*(short *)(param_1 + 0x2164) << 3);
      if (iVar11 == 0xb1) {
        *(float *)(iVar4 + 0x60) = fVar12;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10) + 100) =
             (float)((int)*(short *)(param_1 + 0x2166) << 3);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
        *(float *)(iVar4 + 0x68) = *(float *)(iVar4 + 100) * 0.125 * -7.0;
        uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10);
      }
      else {
        *(float *)(iVar4 + 0x60) = fVar12 - *(float *)(param_1 + 0x2198);
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10) + 100) =
             (float)((int)*(short *)(param_1 + 0x2166) << 3) - *(float *)(param_1 + 0x219c);
        iVar4 = *(short *)(param_1 + 0x2166) * 8;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10) + 0x68) =
             (float)(((int)(iVar4 + ((uint)(iVar4 >> 3) >> 0x1d)) >> 3) * -7);
        uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10);
      }
      FUN_089a54cc(0x3f800000,0xc2000000,0,0,uVar5,iVar8,9);
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar11 < 0xb3);
  }
  else {
    iVar11 = 0xa2;
    iVar10 = 0x288;
    iVar8 = param_1 + 0x19cc;
    do {
      if (*(char *)(param_1 + (iVar11 - 0xa2U & 0xff) + 0x2130) != -1) {
        FUN_089a54cc(0x3f800000,0,0xc2000000,param_2,
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),iVar8,9);
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar11 < 0xa6);
    iVar11 = 0x45;
    iVar10 = 0x114;
    iVar8 = param_1 + 0xb44;
    do {
      if (*(char *)(param_1 + (iVar11 - 0x45U & 0xff) + 0x2130) != -1) {
        FUN_089a54cc(0x3f800000,0,0xc2000000,param_2,
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),iVar8,9);
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar11 < 0x49);
    iVar11 = 0x9f;
    iVar10 = 0x27c;
    iVar8 = param_1 + 0x1954;
    do {
      if (*(char *)(param_1 + (iVar11 - 0x9fU & 0xff) + 0x2134) != -1) {
        FUN_089a54cc(0x3f800000,0,0xc2000000,param_2,
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),iVar8,9);
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar11 < 0xa2);
    iVar11 = 0xaa;
    iVar10 = 0x2a8;
    iVar8 = param_1 + 0x1b0c;
    do {
      if ((iVar11 - 0xaaU & 0xff) < (uint)*(byte *)(param_1 + 0x2137)) {
        FUN_089a54cc(0x3f800000,0,0xc2000000,param_2,
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),iVar8,9);
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar11 < 0xae);
    iVar11 = 0x62;
    iVar10 = 0x188;
    iVar8 = param_1 + 0xfcc;
    do {
      uVar9 = iVar11 - 0x62U & 0xff;
      if ((uVar9 < *(byte *)(param_1 + 0x2137)) &&
         (piVar3 = (int *)DONE_Get_DAT_08AAC9E0(), *(char *)(*piVar3 + uVar9 + 0x84) == '\0')) {
        FUN_089a54cc(0x3f800000,0,0xc2000000,param_2,
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),iVar8,9);
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar11 < 0x66);
    iVar11 = 0xa6;
    iVar10 = 0x298;
    iVar8 = param_1 + 0x1a6c;
    do {
      uVar9 = iVar11 - 0xa6U & 0xff;
      if ((uVar9 < *(byte *)(param_1 + 0x2137)) &&
         (piVar3 = (int *)DONE_Get_DAT_08AAC9E0(), *(char *)(*piVar3 + uVar9 + 0x84) != '\0')) {
        FUN_089a54cc(0x3f800000,0,0xc2000000,param_2,
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),iVar8,9);
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar11 < 0xaa);
    iVar11 = 0x41;
    iVar10 = 0x104;
    iVar8 = param_1 + 0xaa4;
    do {
      uVar9 = iVar11 - 0x41U & 0xff;
      if ((uVar9 < *(byte *)(param_1 + 0x2137)) &&
         (piVar3 = (int *)DONE_Get_DAT_08AAC9E0(), *(char *)(*piVar3 + uVar9 + 0x84) != '\0')) {
        FUN_089a54cc(0x3f800000,0,0xc2000000,param_2,
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),iVar8,9);
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar11 < 0x45);
    iVar11 = 0xae;
    iVar10 = 0x2b8;
    iVar8 = param_1 + 0x1bac;
    do {
      if (*(char *)(param_1 + (iVar11 - 0xaeU & 0xff) * 2 + 0x212a) != -1) {
        FUN_089a54cc(0x3f800000,0,0xc2000000,param_2,
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),iVar8,9);
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar11 < 0xb1);
    iVar11 = 0x93;
    iVar10 = 0x24c;
    iVar8 = param_1 + 0x1774;
    do {
      if (*(char *)(param_1 + (iVar11 - 0x93U & 0xff) * 2 + 0x212a) != -1) {
        FUN_089a54cc(0x3f800000,0,0xc2000000,param_2,
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),iVar8,9);
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar11 < 0x96);
    iVar11 = 0x9c;
    iVar10 = 0x270;
    iVar8 = param_1 + 0x18dc;
    do {
      if (*(char *)(param_1 + (iVar11 - 0x9cU & 0xff) * 2 + 0x212a) != -1) {
        FUN_089a54cc(0x3f800000,0,0xc2000000,param_2,
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),iVar8,9);
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar11 < 0x9f);
    iVar8 = 0xb1;
    iVar10 = 0x2c4;
    iVar11 = param_1 + 0x1c24;
    do {
      FUN_089a54cc(0x3f800000,0,0xc2000000,param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),iVar11,9);
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 4;
      iVar11 = iVar11 + 0x28;
    } while (iVar8 < 0xb3);
  }
  return;
}

