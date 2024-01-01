#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899d894(int param_1)

{
  float *pfVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  FUN_089a5278();
  *(undefined4 *)(param_1 + 0x10bc) = 0;
  FUN_089a535c(param_1 + 0x8bc);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0xd4);
  *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xd4));
  FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xd4));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xd4) + 0xbc) = 0x3f800000;
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0xd4);
  *(undefined4 *)(iVar3 + 0xcc) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0xc0) = 0x3e99999a;
  *(undefined4 *)(iVar3 + 0xc4) = 0x3e99999a;
  *(undefined4 *)(iVar3 + 200) = 0x3e99999a;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xd4) + 0x60) =
       *(undefined4 *)
        (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 200) + 0x60);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xd4) + 100) =
       *(undefined4 *)
        (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 200) + 100);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xd4) + 0x68) =
       *(undefined4 *)(param_1 + 0xff8);
  FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xd4),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x174),param_1 + 0xefc);
  iVar8 = 0x32;
  iVar7 = 200;
  iVar3 = param_1 + 200;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
    iVar8 = iVar8 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x68) =
         *(undefined4 *)(iVar3 + 0xf24);
    iVar7 = iVar7 + 4;
    iVar3 = iVar3 + 4;
  } while (iVar8 < 0x35);
  iVar8 = 0x3a;
  iVar7 = 0xe8;
  iVar3 = param_1 + 0xe8;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x68) =
         *(undefined4 *)(iVar3 + 0xf24);
    iVar4 = (iVar8 - 0x3aU & 0xff) * 4;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x60) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 200) + 0x60) -
         *(float *)(param_1 + 0x11e8);
    piVar5 = (int *)(*(int *)(param_1 + 0x1c) + iVar7);
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 4;
    *(float *)(*piVar5 + 100) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 200) + 100) -
         *(float *)(param_1 + 0x11ec);
    iVar3 = iVar3 + 4;
  } while (iVar8 < 0x3d);
  iVar8 = 0x3d;
  iVar7 = 0xf4;
  iVar3 = param_1 + 0xf4;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x68) =
         *(undefined4 *)(iVar3 + 0xf24);
    iVar4 = (iVar8 - 0x3dU & 0xff) * 4;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x60) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 200) + 0x60) -
         *(float *)(param_1 + 0x11e0);
    piVar5 = (int *)(*(int *)(param_1 + 0x1c) + iVar7);
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 4;
    *(float *)(*piVar5 + 100) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 200) + 100) -
         *(float *)(param_1 + 0x11e4);
    iVar3 = iVar3 + 4;
  } while (iVar8 < 0x40);
  iVar8 = 0x40;
  iVar7 = 0x100;
  iVar3 = param_1 + 0x100;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x68) =
         *(undefined4 *)(iVar3 + 0xf24);
    iVar4 = (iVar8 - 0x40U & 0xff) * 4;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x60) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 200) + 0x60) -
         *(float *)(param_1 + 0x11f0);
    piVar5 = (int *)(*(int *)(param_1 + 0x1c) + iVar7);
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 4;
    *(float *)(*piVar5 + 100) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 200) + 100) -
         *(float *)(param_1 + 0x11f4);
    iVar3 = iVar3 + 4;
  } while (iVar8 < 0x43);
  iVar8 = 0x43;
  iVar7 = 0x10c;
  iVar3 = param_1 + 0x10c;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x68) =
         *(undefined4 *)(iVar3 + 0xf24);
    iVar4 = (iVar8 - 0x43U & 0xff) * 4;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x60) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 200) + 0x60) -
         *(float *)(param_1 + 0x11f8);
    piVar5 = (int *)(*(int *)(param_1 + 0x1c) + iVar7);
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 4;
    *(float *)(*piVar5 + 100) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 200) + 100) -
         *(float *)(param_1 + 0x11fc);
    iVar3 = iVar3 + 4;
  } while (iVar8 < 0x46);
  iVar8 = 0x46;
  iVar7 = 0x118;
  iVar3 = param_1 + 0x118;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x68) =
         *(undefined4 *)(iVar3 + 0xf24);
    iVar4 = (iVar8 - 0x46U & 0xff) * 4;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x60) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 200) + 0x60) -
         *(float *)(param_1 + 0x1200);
    piVar5 = (int *)(*(int *)(param_1 + 0x1c) + iVar7);
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 4;
    *(float *)(*piVar5 + 100) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 200) + 100) -
         *(float *)(param_1 + 0x1204);
    iVar3 = iVar3 + 4;
  } while (iVar8 < 0x49);
  iVar8 = 0x37;
  iVar7 = 0xdc;
  iVar3 = param_1 + 0xdc;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x68) =
         *(undefined4 *)(iVar3 + 0xf24);
    iVar4 = (iVar8 - 0x37U & 0xff) * 4;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x60) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 200) + 0x60) -
         *(float *)(param_1 + 0x1208);
    piVar5 = (int *)(*(int *)(param_1 + 0x1c) + iVar7);
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 4;
    *(float *)(*piVar5 + 100) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 200) + 100) -
         *(float *)(param_1 + 0x120c);
    iVar3 = iVar3 + 4;
  } while (iVar8 < 0x3a);
  iVar4 = 0x49;
  iVar8 = 0x124;
  iVar7 = param_1 + 0x124;
  iVar3 = param_1 + 0x248;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8));
    iVar6 = iVar4 + -0x49;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x68) =
         *(undefined4 *)(iVar7 + 0xf24);
    iVar4 = iVar4 + 1;
    iVar7 = iVar7 + 4;
    iVar6 = (iVar6 / 5 & 0xffU) * 4;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x60) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6 + 200) + 0x60) -
         *(float *)(iVar3 + 0x1c44);
    pfVar1 = (float *)(iVar3 + 0x1c48);
    piVar5 = (int *)(*(int *)(param_1 + 0x1c) + iVar8);
    iVar8 = iVar8 + 4;
    iVar3 = iVar3 + 8;
    *(float *)(*piVar5 + 100) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6 + 200) + 100) - *pfVar1;
  } while (iVar4 < 0x58);
  iVar8 = 0x58;
  iVar7 = 0x160;
  iVar3 = param_1 + 0x160;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x68) =
         *(undefined4 *)(iVar3 + 0xf24);
    iVar4 = (iVar8 - 0x58U & 0xff) * 4;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x60) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 200) + 0x60) -
         *(float *)(param_1 + 0x1218);
    piVar5 = (int *)(*(int *)(param_1 + 0x1c) + iVar7);
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 4;
    *(float *)(*piVar5 + 100) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 200) + 100) -
         *(float *)(param_1 + 0x121c);
    iVar3 = iVar3 + 4;
  } while (iVar8 < 0x5b);
  iVar8 = 0;
  iVar4 = 0;
  iVar3 = param_1;
  iVar7 = param_1;
  do {
    if ((int)(uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) +
                                                      0x10a0) + 0x11c2) <= iVar8) {
      uVar2 = *(undefined *)(param_1 + 0x109e);
      goto LAB_0899e0f0;
    }
    iVar9 = 0;
    iVar6 = *(int *)(iVar3 + 0x1240);
    iVar10 = iVar7;
    if (0.0 < *(float *)(iVar3 + 0x122c)) {
      do {
        FUN_089a51fc(0x3f4ccccd,0x3f4ccccd,0,iVar6);
        *(undefined4 *)(iVar6 + 0x68) = 0xc2200000;
        iVar9 = iVar9 + 1;
        *(float *)(iVar6 + 0x60) =
             *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 200) + 0x60) -
             *(float *)(iVar10 + 0x188c);
        pfVar1 = (float *)(iVar10 + 0x1890);
        iVar10 = iVar10 + 8;
        *(float *)(iVar6 + 100) =
             *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 200) + 100) - *pfVar1;
        iVar6 = *(int *)(iVar6 + 4);
      } while ((float)iVar9 < *(float *)(iVar3 + 0x122c));
    }
    iVar8 = iVar8 + 1;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 0x224;
    iVar7 = iVar7 + 0x200;
  } while (iVar8 < 3);
  uVar2 = *(undefined *)(param_1 + 0x109e);
LAB_0899e0f0:
  FUN_0899d7b4(param_1,uVar2);
  return;
}

