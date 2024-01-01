#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891d5fc(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  FUN_089a5278();
  cVar1 = *(char *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x20fc) = 0;
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      if (*(char *)(param_1 + 0x77) < '\x02') {
        FUN_089a535c(param_1 + 0x1cec);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x2d8);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2d8));
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x2d8) + 0xbc) = 0x3f800000;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x2d8);
        *(undefined4 *)(iVar4 + 0xc0) = 0x3e99999a;
        *(undefined4 *)(iVar4 + 0xc4) = 0x3e99999a;
        *(undefined4 *)(iVar4 + 200) = 0x3e99999a;
        *(undefined4 *)(iVar4 + 0xcc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x2d8) + 0x68) =
             *(undefined4 *)(param_1 + 0x20dc);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x2d8) + 0x60) =
             *(undefined4 *)
              (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x77) * 4 + 0x2d0) + 0x60);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x2d8) + 100) =
             *(undefined4 *)
              (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x77) * 4 + 0x2d0) + 100);
        FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2d8),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2f0),param_1 + 0x1ddc);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x20c);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
      }
      else {
        FUN_089a535c(param_1 + 0x14f4);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x20c);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x20c));
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x20c) + 0xbc) = 0x3f800000;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x20c);
        *(undefined4 *)(iVar4 + 0xc0) = 0x3e99999a;
        *(undefined4 *)(iVar4 + 0xc4) = 0x3e99999a;
        *(undefined4 *)(iVar4 + 200) = 0x3e99999a;
        *(undefined4 *)(iVar4 + 0xcc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x20c) + 0x68) =
             *(undefined4 *)(param_1 + 0x2010);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x20c) + 0x60) =
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x200) + 0x60);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x20c) + 100) =
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x200) + 100);
        FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x20c),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2f0),param_1 + 0x1ddc);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x2d8);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
      }
      iVar10 = 0xb4;
      iVar8 = 0x2d0;
      iVar4 = param_1 + 0x2d0;
      do {
        FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
             *(undefined4 *)(iVar4 + 0x1e04);
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
        if (iVar10 + -0xb4 == (int)*(char *)(param_1 + 0x77)) {
          *(undefined4 *)(iVar5 + 0xc0) = 0x3e99999a;
          *(undefined4 *)(iVar5 + 0xc4) = 0x3e99999a;
          *(undefined4 *)(iVar5 + 200) = 0x3e99999a;
          *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
          FUN_0891d070(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),1);
        }
        else {
          *(undefined4 *)(iVar5 + 0xc0) = 0;
          *(undefined4 *)(iVar5 + 0xc4) = 0;
          *(undefined4 *)(iVar5 + 200) = 0;
          *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
          FUN_0891d070(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),0);
        }
        iVar10 = iVar10 + 1;
        iVar8 = iVar8 + 4;
        iVar4 = iVar4 + 4;
      } while (iVar10 < 0xb6);
      iVar10 = 0xb7;
      iVar8 = 0x2dc;
      iVar4 = param_1 + 0x2dc;
      do {
        FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
        iVar10 = iVar10 + 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
             *(undefined4 *)(iVar4 + 0x1e04);
        iVar8 = iVar8 + 4;
        iVar4 = iVar4 + 4;
      } while (iVar10 < 0xb9);
      iVar10 = 0xb9;
      iVar8 = 0x2e4;
      iVar4 = param_1 + 0x2e4;
      do {
        FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
        iVar10 = iVar10 + 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
             *(undefined4 *)(iVar4 + 0x1e04);
        iVar8 = iVar8 + 4;
        iVar4 = iVar4 + 4;
      } while (iVar10 < 0xbb);
      iVar10 = 0x80;
      iVar8 = 0x200;
      iVar4 = param_1 + 0x200;
      do {
        FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
             *(undefined4 *)(iVar4 + 0x1e04);
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
        if (*(char *)(param_1 + 0x77) == '\x02') {
          *(undefined4 *)(iVar5 + 0xc0) = 0x3e99999a;
          *(undefined4 *)(iVar5 + 0xc4) = 0x3e99999a;
          *(undefined4 *)(iVar5 + 200) = 0x3e99999a;
          *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
          FUN_0891d0cc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),1);
        }
        else {
          *(undefined4 *)(iVar5 + 0xc0) = 0;
          *(undefined4 *)(iVar5 + 0xc4) = 0;
          *(undefined4 *)(iVar5 + 200) = 0;
          *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
          FUN_0891d0cc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),0);
        }
        iVar10 = iVar10 + 1;
        iVar8 = iVar8 + 4;
        iVar4 = iVar4 + 4;
      } while (iVar10 < 0x81);
      iVar10 = 0x82;
      iVar8 = 0x208;
      iVar4 = param_1 + 0x208;
      do {
        FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
        iVar10 = iVar10 + 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
             *(undefined4 *)(iVar4 + 0x1e04);
        iVar8 = iVar8 + 4;
        iVar4 = iVar4 + 4;
      } while (iVar10 < 0x83);
    }
  }
  else if (cVar1 < '\x02') {
    if (*(char *)(param_1 + 0x75) == '\0') {
      FUN_089a535c(param_1 + 0x1134);
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x1ac);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x1ac));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1ac) + 0xbc) = 0x3f800000;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x1ac);
      *(undefined4 *)(iVar4 + 0xc0) = 0x3e99999a;
      *(undefined4 *)(iVar4 + 0xc4) = 0x3e99999a;
      *(undefined4 *)(iVar4 + 200) = 0x3e99999a;
      *(undefined4 *)(iVar4 + 0xcc) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1ac) + 0x68) =
           *(undefined4 *)(param_1 + 0x1fb0);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1ac) + 0x60) =
           *(undefined4 *)
            (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x19c) + 0x60);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1ac) + 100) =
           *(undefined4 *)
            (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x19c) + 100);
      FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x1ac),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2f0),param_1 + 0x1ddc);
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x20c);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
    }
    else {
      FUN_089a535c(param_1 + 0x14f4);
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x20c);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x20c));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x20c) + 0xbc) = 0x3f800000;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x20c);
      *(undefined4 *)(iVar4 + 0xc0) = 0x3e99999a;
      *(undefined4 *)(iVar4 + 0xc4) = 0x3e99999a;
      *(undefined4 *)(iVar4 + 200) = 0x3e99999a;
      *(undefined4 *)(iVar4 + 0xcc) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x20c) + 0x68) =
           *(undefined4 *)(param_1 + 0x2010);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x20c) + 0x60) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x200) + 0x60);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x20c) + 100) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x200) + 100);
      FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x20c),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2f0),param_1 + 0x1ddc);
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x1ac);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
    }
    iVar10 = 0x67;
    iVar8 = 0x19c;
    iVar4 = param_1 + 0x19c;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
           *(undefined4 *)(iVar4 + 0x1e04);
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
      if (iVar10 + -0x67 == (int)*(char *)(param_1 + 0x78)) {
        if (*(char *)(param_1 + 0x75) != '\0') {
          *(undefined4 *)(iVar5 + 0xc0) = 0;
          goto LAB_0891dd54;
        }
        *(undefined4 *)(iVar5 + 0xc0) = 0x3e99999a;
        *(undefined4 *)(iVar5 + 0xc4) = 0x3e99999a;
        *(undefined4 *)(iVar5 + 200) = 0x3e99999a;
        *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
        FUN_0891d128(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),1);
      }
      else {
        *(undefined4 *)(iVar5 + 0xc0) = 0;
LAB_0891dd54:
        *(undefined4 *)(iVar5 + 0xc4) = 0;
        *(undefined4 *)(iVar5 + 200) = 0;
        *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
        FUN_0891d128(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),0);
      }
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
      iVar4 = iVar4 + 4;
    } while (iVar10 < 0x6b);
    iVar10 = 0x6c;
    iVar8 = 0x1b0;
    iVar4 = param_1 + 0x1b0;
    do {
      uVar3 = iVar10 - 0x6c;
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
           *(undefined4 *)(iVar4 + 0x1e04);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x60) =
           *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x2214);
      piVar6 = (int *)(*(int *)(param_1 + 0x1c) + iVar8);
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
      *(float *)(*piVar6 + 100) =
           *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + (uVar3 & 0xff) * 4 + 0x19c) + 100) -
           *(float *)(param_1 + 0x2218);
      iVar4 = iVar4 + 4;
    } while (iVar10 < 0x70);
    iVar10 = 0x74;
    iVar8 = 0x1d0;
    iVar4 = param_1 + 0x1d0;
    do {
      uVar3 = iVar10 - 0x74;
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
           *(undefined4 *)(iVar4 + 0x1e04);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x60) =
           *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x221c);
      piVar6 = (int *)(*(int *)(param_1 + 0x1c) + iVar8);
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
      *(float *)(*piVar6 + 100) =
           *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + (uVar3 & 0xff) * 4 + 0x19c) + 100) -
           *(float *)(param_1 + 0x2220);
      iVar4 = iVar4 + 4;
    } while (iVar10 < 0x78);
    iVar10 = 0x70;
    iVar8 = 0x1c0;
    iVar4 = param_1 + 0x1c0;
    do {
      uVar3 = iVar10 - 0x70;
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
           *(undefined4 *)(iVar4 + 0x1e04);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x60) =
           *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x2224);
      piVar6 = (int *)(*(int *)(param_1 + 0x1c) + iVar8);
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
      *(float *)(*piVar6 + 100) =
           *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + (uVar3 & 0xff) * 4 + 0x19c) + 100) -
           *(float *)(param_1 + 0x2228);
      iVar4 = iVar4 + 4;
    } while (iVar10 < 0x74);
    iVar10 = 0x7c;
    iVar8 = 0x1f0;
    iVar4 = param_1 + 0x1f0;
    do {
      uVar3 = iVar10 - 0x7c;
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
           *(undefined4 *)(iVar4 + 0x1e04);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x60) =
           *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x222c);
      piVar6 = (int *)(*(int *)(param_1 + 0x1c) + iVar8);
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
      *(float *)(*piVar6 + 100) =
           *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + (uVar3 & 0xff) * 4 + 0x19c) + 100) -
           *(float *)(param_1 + 0x2230);
      iVar4 = iVar4 + 4;
    } while (iVar10 < 0x80);
    iVar10 = 0x5a;
    iVar8 = 0x168;
    iVar4 = param_1 + 0x168;
    do {
      uVar3 = iVar10 - 0x5a;
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
           *(undefined4 *)(iVar4 + 0x1e04);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x60) =
           *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x2234);
      piVar6 = (int *)(*(int *)(param_1 + 0x1c) + iVar8);
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
      *(float *)(*piVar6 + 100) =
           *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + (uVar3 & 0xff) * 4 + 0x19c) + 100) -
           *(float *)(param_1 + 0x2238);
      iVar4 = iVar4 + 4;
    } while (iVar10 < 0x5e);
    iVar10 = 0x78;
    iVar8 = 0x1e0;
    iVar4 = param_1 + 0x1e0;
    do {
      uVar3 = iVar10 - 0x78;
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
           *(undefined4 *)(iVar4 + 0x1e04);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x60) =
           *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x223c);
      piVar6 = (int *)(*(int *)(param_1 + 0x1c) + iVar8);
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
      *(float *)(*piVar6 + 100) =
           *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + (uVar3 & 0xff) * 4 + 0x19c) + 100) -
           *(float *)(param_1 + 0x2240);
      iVar4 = iVar4 + 4;
    } while (iVar10 < 0x7c);
    iVar10 = 8;
    iVar8 = 0x20;
    iVar4 = param_1 + 0x20;
    do {
      uVar3 = iVar10 - 8;
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
           *(undefined4 *)(iVar4 + 0x1e04);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x60) =
           *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x2244);
      piVar6 = (int *)(*(int *)(param_1 + 0x1c) + iVar8);
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
      *(float *)(*piVar6 + 100) =
           *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + (uVar3 & 0xff) * 4 + 0x19c) + 100) -
           *(float *)(param_1 + 0x2248);
      iVar4 = iVar4 + 4;
    } while (iVar10 < 0xc);
    iVar10 = 0x80;
    iVar8 = 0x200;
    iVar4 = param_1 + 0x200;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
           *(undefined4 *)(iVar4 + 0x1e04);
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
      if (*(char *)(param_1 + 0x75) == '\x01') {
        *(undefined4 *)(iVar5 + 0xc0) = 0x3e99999a;
        *(undefined4 *)(iVar5 + 0xc4) = 0x3e99999a;
        *(undefined4 *)(iVar5 + 200) = 0x3e99999a;
        *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
        FUN_0891d0cc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),1);
      }
      else {
        *(undefined4 *)(iVar5 + 0xc0) = 0;
        *(undefined4 *)(iVar5 + 0xc4) = 0;
        *(undefined4 *)(iVar5 + 200) = 0;
        *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
        FUN_0891d0cc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),0);
      }
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
      iVar4 = iVar4 + 4;
    } while (iVar10 < 0x81);
    iVar10 = 0x81;
    iVar8 = 0x204;
    iVar4 = param_1 + 0x204;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
      iVar10 = iVar10 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
           *(undefined4 *)(iVar4 + 0x1e04);
      iVar8 = iVar8 + 4;
      iVar4 = iVar4 + 4;
    } while (iVar10 < 0x82);
  }
  else if (cVar1 < '\x03') {
    FUN_089a535c(param_1 + 0x165c);
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x230);
    *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x230));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x230) + 0xbc) = 0x3f800000;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x230);
    *(undefined4 *)(iVar4 + 0xcc) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0xc0) = 0x3e99999a;
    *(undefined4 *)(iVar4 + 0xc4) = 0x3e99999a;
    *(undefined4 *)(iVar4 + 200) = 0x3e99999a;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x230) + 0x68) =
         *(undefined4 *)(param_1 + 0x2034);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x230) + 0x60) =
         *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x79) * 4 + 0x218) + 0x60);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x230) + 100) =
         *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x79) * 4 + 0x218) + 100);
    FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x230),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2f0),param_1 + 0x1ddc);
    uVar3 = FUN_0892c394(*(undefined *)(param_1 + *(char *)(param_1 + 0x79) + 0x224e));
    iVar10 = 0x3d;
    uVar9 = uVar3 >> 8 & 0xff;
    uVar3 = uVar3 >> 0x10 & 0xff;
    iVar4 = *(int *)(param_1 + 0x1c);
    iVar8 = 0xf4;
    do {
      if (iVar10 == 0x3d) {
        FUN_089f4a90((float)(uVar9 / 3),(float)(uVar9 % 3),*(undefined4 *)(iVar4 + iVar8));
        iVar4 = *(int *)(param_1 + 0x1c);
      }
      else {
        FUN_089f4a90((float)(uVar3 / 3),(float)(uVar3 % 3),*(undefined4 *)(iVar4 + iVar8));
        iVar4 = *(int *)(param_1 + 0x1c);
      }
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar10 < 0x3f);
    iVar5 = 0x66;
    iVar10 = 0x198;
    iVar8 = (int)*(char *)(param_1 + 0x76);
    do {
      FUN_089f4a90(0,(float)iVar8,*(undefined4 *)(iVar4 + iVar10));
      iVar5 = iVar5 + 1;
      iVar4 = *(int *)(param_1 + 0x1c);
      iVar10 = iVar10 + 4;
      iVar8 = (int)*(char *)(param_1 + 0x76);
    } while (iVar5 < 0x67);
    iVar8 = ((uint)*(byte *)(param_1 + *(char *)(param_1 + 0x79) + 0x224e) * 3 + iVar8) * 0x18;
    uVar3 = *(uint *)(&DAT_08a853e4 + iVar8);
    FUN_0891d2e4(*(undefined4 *)(*(int *)(iVar4 + 0x198) + 0x60),
                 *(float *)(*(int *)(iVar4 + 0x198) + 100) + 14.0,param_1,
                 *(undefined4 *)(&DAT_08a853e0 + iVar8),0x61);
    iVar8 = 0x59;
    iVar4 = 0x164;
    do {
      FUN_0891d50c(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),
                   *(undefined *)(param_1 + 0x76),
                   *(undefined *)(param_1 + *(char *)(param_1 + 0x79) + 0x224e));
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar8 < 0x5a);
    iVar8 = 0x4d;
    iVar4 = 0x134;
    do {
      if (iVar8 == 0x4e) {
        uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4);
        uVar2 = FUN_0891d558(param_1,uVar3 & 0xff);
        FUN_0891d57c(param_1,uVar7,uVar2);
      }
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar8 < 0x51);
    iVar8 = 0x85;
    iVar4 = 0x214;
    do {
      FUN_089f4a90(0,(float)(int)*(char *)(param_1 + 0x76),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar8 < 0x86);
    iVar10 = 0x86;
    iVar8 = 0x218;
    iVar4 = param_1 + 0x218;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
      iVar10 = iVar10 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
           *(undefined4 *)(iVar4 + 0x1e04);
      iVar8 = iVar8 + 4;
      iVar4 = iVar4 + 4;
    } while (iVar10 < 0x8c);
    iVar10 = 0x8d;
    iVar8 = 0x234;
    iVar4 = param_1 + 0x234;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
      iVar10 = iVar10 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
           *(undefined4 *)(iVar4 + 0x1e04);
      iVar8 = iVar8 + 4;
      iVar4 = iVar4 + 4;
    } while (iVar10 < 0x93);
    iVar4 = 0x96;
    iVar8 = 600;
    iVar10 = param_1 + 600;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
      iVar4 = iVar4 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
           *(undefined4 *)(iVar10 + 0x1e04);
      iVar8 = iVar8 + 4;
      iVar10 = iVar10 + 4;
    } while (iVar4 < 0x9c);
  }
  return;
}

