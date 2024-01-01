#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08925480(int param_1,char param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  
  iVar8 = (int)(*(float *)(param_1 + 0x2210) -
               (float)((uint)*(byte *)(param_1 + 0x2137) * 0xd + -0xd));
  if (param_2 == '\0') {
    iVar7 = 0x15;
    iVar6 = 0x54;
    iVar4 = param_1 + 0x3c4;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar4,1);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar7 < 0x16);
    iVar7 = 0x1b;
    iVar6 = 0x6c;
    iVar4 = param_1 + 0x4b4;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar4,1);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar7 < 0x1c);
    iVar7 = 0x18;
    iVar6 = 0x60;
    iVar4 = param_1 + 0x43c;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      FUN_089f4a90(0,0x3f800000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar4,1);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar7 < 0x19);
    iVar7 = 0x67;
    iVar6 = 0x19c;
    iVar4 = param_1 + 0x1094;
    do {
      uVar5 = iVar7 - 0x67U & 0xff;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      if (uVar5 < *(byte *)(param_1 + 0x2137)) {
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        *(undefined4 *)(iVar3 + 0xc0) = 0;
        *(undefined4 *)(iVar3 + 0xc4) = 0;
        *(undefined4 *)(iVar3 + 200) = 0;
        *(undefined4 *)(iVar3 + 0xcc) = 0x3f800000;
        FUN_0891d128(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),0);
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      }
      else {
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      }
      *(float *)(iVar3 + 100) = (float)(iVar8 + uVar5 * 0x1a);
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar4,1);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar7 < 0x6b);
    iVar7 = 0x6c;
    iVar6 = 0x1b0;
    iVar4 = param_1 + 0x115c;
    do {
      uVar5 = iVar7 - 0x6cU & 0xff;
      if (uVar5 < *(byte *)(param_1 + 0x2137)) {
        piVar2 = (int *)FUN_0880cc48();
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        if (*(char *)(*piVar2 + uVar5 + 0x84) == '\0') {
          *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          fVar9 = *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x2214);
        }
        else {
          *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          fVar9 = *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x2214);
        }
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        fVar9 = *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x2214);
      }
      *(float *)(iVar3 + 0x60) = fVar9;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 100) =
           (float)(iVar8 + uVar5 * 0x1a) - *(float *)(param_1 + 0x2218);
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar4,1);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar7 < 0x70);
    iVar7 = 0x74;
    iVar6 = 0x1d0;
    iVar4 = param_1 + 0x129c;
    do {
      uVar5 = iVar7 - 0x74U & 0xff;
      if (uVar5 < *(byte *)(param_1 + 0x2137)) {
        piVar2 = (int *)FUN_0880cc48();
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        if (*(char *)(*piVar2 + uVar5 + 0x84) == '\0') {
          *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          fVar9 = *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x221c);
        }
        else {
          *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
          piVar2 = (int *)FUN_0880cc48();
          uVar1 = FUN_0891c54c(1,(int)(*(byte *)(*piVar2 + uVar5 + 0x84) - 0xe) / 3 & 0xff);
          FUN_089f4a90(0,(float)(uVar1 & 0xff),*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
          FUN_08922110(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),uVar1 & 0xff);
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0xbc) = 0;
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          fVar9 = *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x221c);
        }
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        fVar9 = *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x221c);
      }
      *(float *)(iVar3 + 0x60) = fVar9;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 100) =
           (float)(iVar8 + uVar5 * 0x1a) - *(float *)(param_1 + 0x2220);
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar4,1);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar7 < 0x78);
    iVar7 = 0x70;
    iVar6 = 0x1c0;
    iVar4 = param_1 + 0x11fc;
    do {
      uVar5 = iVar7 - 0x70U & 0xff;
      if (uVar5 < *(byte *)(param_1 + 0x2137)) {
        piVar2 = (int *)FUN_0880cc48();
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        if (*(char *)(*piVar2 + uVar5 + 0x84) == '\0') {
          *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          fVar9 = *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x2224);
        }
        else {
          *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
          piVar2 = (int *)FUN_0880cc48();
          FUN_089f4a90(0,(float)((int)(*(byte *)(*piVar2 + uVar5 + 0x84) - 0xe) % 3 & 0xff),
                       *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
          FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          fVar9 = *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x2224);
        }
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        fVar9 = *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x2224);
      }
      *(float *)(iVar3 + 0x60) = fVar9;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 100) =
           (float)(iVar8 + uVar5 * 0x1a) - *(float *)(param_1 + 0x2228);
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar4,1);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar7 < 0x74);
    iVar7 = 0x7c;
    iVar6 = 0x1f0;
    iVar4 = param_1 + 0x13dc;
    do {
      uVar5 = iVar7 - 0x7cU & 0xff;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      if (uVar5 < *(byte *)(param_1 + 0x2137)) {
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        fVar9 = *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x222c);
      }
      else {
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        fVar9 = *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x222c);
      }
      *(float *)(iVar3 + 0x60) = fVar9;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 100) =
           (float)(iVar8 + uVar5 * 0x1a) - *(float *)(param_1 + 0x2230);
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar4,1);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar7 < 0x80);
    iVar7 = 0x5a;
    iVar6 = 0x168;
    iVar4 = param_1 + 0xe8c;
    do {
      uVar5 = iVar7 - 0x5aU & 0xff;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      if (uVar5 < *(byte *)(param_1 + 0x2137)) {
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
        FUN_089f4a90((float)((uVar5 + 1) / 5),(float)((uVar5 + 1) % 5),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        fVar9 = *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x2234);
      }
      else {
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        fVar9 = *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x2234);
      }
      *(float *)(iVar3 + 0x60) = fVar9;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 100) =
           (float)(iVar8 + uVar5 * 0x1a) - *(float *)(param_1 + 0x2238);
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar4,1);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar7 < 0x5e);
    iVar7 = 0x78;
    iVar6 = 0x1e0;
    iVar4 = param_1 + 0x133c;
    do {
      uVar5 = iVar7 - 0x78U & 0xff;
      if (uVar5 < *(byte *)(param_1 + 0x2137)) {
        piVar2 = (int *)FUN_0880cc48();
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        if (*(char *)(*piVar2 + uVar5 + 0x84) == '\0') {
          *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          fVar9 = *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x223c);
        }
        else {
          *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          fVar9 = *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x223c);
        }
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        fVar9 = *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x223c);
      }
      *(float *)(iVar3 + 0x60) = fVar9;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 100) =
           (float)(iVar8 + uVar5 * 0x1a) - *(float *)(param_1 + 0x2240);
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar4,1);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar7 < 0x7c);
    iVar7 = 8;
    iVar6 = 0x20;
    iVar4 = param_1 + 0x1bc;
    do {
      uVar5 = iVar7 - 8U & 0xff;
      if (uVar5 < *(byte *)(param_1 + 0x2137)) {
        piVar2 = (int *)FUN_0880cc48();
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        if (*(char *)(*piVar2 + uVar5 + 0x84) == '\0') {
          *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          fVar9 = *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x2244);
        }
        else {
          *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
          FUN_089a56a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),2);
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          fVar9 = *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x2244);
        }
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        fVar9 = *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x2244);
      }
      *(float *)(iVar3 + 0x60) = fVar9;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 100) =
           (float)(iVar8 + uVar5 * 0x1a) - *(float *)(param_1 + 0x2248);
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar4,1);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar7 < 0xc);
    iVar6 = 0x80;
    iVar4 = 0x200;
    iVar8 = param_1 + 0x147c;
    do {
      iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar8,1);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar6 < 0x81);
    iVar6 = 0x81;
    iVar4 = 0x204;
    iVar8 = param_1 + 0x14a4;
    do {
      iVar7 = FUN_0891bbc4(param_1);
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      if (iVar7 == 1) {
        *(undefined4 *)(iVar3 + 0xb0) = 0x3f000000;
        *(undefined4 *)(iVar3 + 0xb4) = 0x3f000000;
        *(undefined4 *)(iVar3 + 0xb8) = 0x3f000000;
        *(undefined4 *)(iVar3 + 0xbc) = 0;
        iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      }
      else {
        *(undefined4 *)(iVar3 + 0xb0) = 0x3f800000;
        *(undefined4 *)(iVar3 + 0xb4) = 0x3f800000;
        *(undefined4 *)(iVar3 + 0xb8) = 0x3f800000;
        *(undefined4 *)(iVar3 + 0xbc) = 0;
        iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      }
      *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar8,1);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar6 < 0x82);
  }
  else {
    iVar6 = 0x15;
    iVar4 = 0x54;
    iVar8 = param_1 + 0x3c4;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar8,1);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar6 < 0x16);
    iVar6 = 0x1b;
    iVar4 = 0x6c;
    iVar8 = param_1 + 0x4b4;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar8,1);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar6 < 0x1c);
    iVar6 = 0x18;
    iVar4 = 0x60;
    iVar8 = param_1 + 0x43c;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar8,1);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar6 < 0x19);
    iVar6 = 0x67;
    iVar4 = 0x19c;
    iVar8 = param_1 + 0x1094;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar8,1);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar6 < 0x6b);
    iVar6 = 0x6c;
    iVar4 = 0x1b0;
    iVar8 = param_1 + 0x115c;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar8,1);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar6 < 0x70);
    iVar6 = 0x74;
    iVar4 = 0x1d0;
    iVar8 = param_1 + 0x129c;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar8,1);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar6 < 0x78);
    iVar6 = 0x70;
    iVar4 = 0x1c0;
    iVar8 = param_1 + 0x11fc;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar8,1);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar6 < 0x74);
    iVar6 = 0x7c;
    iVar4 = 0x1f0;
    iVar8 = param_1 + 0x13dc;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar8,1);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar6 < 0x80);
    iVar6 = 0x5a;
    iVar4 = 0x168;
    iVar8 = param_1 + 0xe8c;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar8,1);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar6 < 0x5e);
    iVar6 = 0x78;
    iVar4 = 0x1e0;
    iVar8 = param_1 + 0x133c;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar8,1);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar6 < 0x7c);
    iVar6 = 8;
    iVar4 = 0x20;
    iVar8 = param_1 + 0x1bc;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar8,1);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar6 < 0xc);
    iVar6 = 0x80;
    iVar4 = 0x200;
    iVar8 = param_1 + 0x147c;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar8,1);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar6 < 0x81);
    iVar8 = 0x81;
    iVar4 = 0x204;
    iVar6 = param_1 + 0x14a4;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar6,1);
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 + 4;
      iVar6 = iVar6 + 0x28;
    } while (iVar8 < 0x82);
  }
  return;
}

