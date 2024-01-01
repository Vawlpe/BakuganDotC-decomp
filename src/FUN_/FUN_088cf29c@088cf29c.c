#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cf29c(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  int local_90 [9];
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  
  local_90[0] = -1;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  uVar3 = FUN_088be274();
  FUN_088c248c(uVar3,local_90,param_1 + 0xb0);
  if (local_90[0] == -1) {
    *(undefined4 *)(param_1 + 0x28) = 5;
  }
  iVar7 = local_90[0] * 0x10;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar7 + 0x8abebec);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(iVar7 + 0x8abebf0);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(iVar7 + 0x8abebf4);
  local_4c = 0;
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(iVar7 + 0x8abebf8);
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0x160,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  iVar7 = local_4c;
  if (iVar4 != 0) {
    FUN_089f3aa8(iVar4);
    iVar7 = iVar4;
  }
  *(int *)(*(int *)(param_1 + 0x1c) + 0x10c) = iVar7;
  FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10c));
  FUN_089f3dd4(**(undefined4 **)(param_1 + 0x1c),(*(undefined4 **)(param_1 + 0x1c))[0x43]);
  uVar3 = **(undefined4 **)(param_1 + 0x1c);
  fVar11 = (float)FUN_089f4944(uVar3);
  local_94 = (float)FUN_089f494c(**(undefined4 **)(param_1 + 0x1c));
  local_94 = local_94 - 1.0;
  local_a0 = 0;
  local_9c = 0;
  local_98 = fVar11 - 1.0;
  FUN_089f4060(uVar3,&local_a0);
  FUN_089f4954(0x3fc00000,0x3fc00000,0,**(undefined4 **)(param_1 + 0x1c),0);
  fVar11 = (float)FUN_089f4944(**(undefined4 **)(param_1 + 0x1c));
  uVar3 = **(undefined4 **)(param_1 + 0x1c);
  fVar12 = (float)FUN_089f494c(uVar3);
  FUN_089f4924(fVar11 * 1.5,fVar12 * 1.5,uVar3);
  *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) =
       *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) & 0xffffffdf;
  fVar12 = (*(float *)(param_1 + 0x80) / DAT_08abec0c) * 0.7;
  iVar7 = FUN_089f70c4(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0xd4));
  *(float *)(param_1 + 0x90) = (float)iVar7 * fVar12;
  iVar7 = FUN_089f70d0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0xd4));
  *(float *)(param_1 + 0x94) = (float)iVar7 * fVar12;
  iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  iVar7 = FUN_089f70c4(*(undefined4 *)(iVar9 + 0xd4));
  iVar4 = FUN_089f70d0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0xd4));
  local_a0 = 0;
  local_94 = (float)iVar4;
  local_9c = 0;
  local_98 = (float)iVar7;
  FUN_089f4060(iVar9,&local_a0);
  iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  iVar7 = FUN_089f70c4(*(undefined4 *)(iVar9 + 0xd4));
  iVar4 = FUN_089f70d0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0xd4));
  FUN_089f4924((float)iVar7 * fVar12,(float)iVar4 * fVar12,iVar9);
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4));
  FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4));
  FUN_089f44a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4),1,8);
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xffffffdf;
  fVar11 = (float)FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4));
  *(float *)(param_1 + 0xb4) = fVar11 * 0.5;
  fVar11 = (float)FUN_089f494c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4));
  *(float *)(param_1 + 0xb8) = fVar11 * 0.5;
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10c);
  fVar11 = (float)FUN_089f4944(uVar3);
  local_94 = (float)FUN_089f494c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10c));
  local_94 = local_94 - 20.0;
  local_a0 = 0x41300000;
  local_9c = 0x41300000;
  local_98 = fVar11 - 20.0;
  FUN_089f4060(uVar3,&local_a0);
  FUN_089f4954(fVar12,fVar12,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10c),0);
  uVar3 = (*(undefined4 **)(param_1 + 0x1c))[0x43];
  fVar11 = (float)FUN_089f4944(**(undefined4 **)(param_1 + 0x1c));
  fVar12 = (float)FUN_089f494c(**(undefined4 **)(param_1 + 0x1c));
  FUN_089f4924(fVar11 - 29.0,fVar12 - 29.0,uVar3);
  FUN_089f44e0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10c),1,8);
  local_50 = 0;
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0x160,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  iVar7 = local_50;
  if (iVar4 != 0) {
    FUN_089f3aa8(iVar4);
    iVar7 = iVar4;
  }
  *(int *)(*(int *)(param_1 + 0x1c) + 0x110) = iVar7;
  FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x110));
  FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x54),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x110));
  uVar3 = FUN_088ce9c8("guide_ico_13",*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x114) = uVar3;
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x114);
  uVar13 = FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x98));
  uVar14 = FUN_089f494c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x98));
  FUN_089f4924(uVar13,uVar14,uVar3);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x114);
  uVar13 = FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x98));
  local_94 = (float)FUN_089f494c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x98));
  local_a0 = 0;
  local_9c = 0;
  local_98 = (float)uVar13;
  FUN_089f4060(uVar3,&local_a0);
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x114);
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0x98);
  uVar3 = *(undefined4 *)(iVar7 + 100);
  uVar13 = *(undefined4 *)(iVar7 + 0x68);
  uVar14 = *(undefined4 *)(iVar7 + 0x6c);
  *(undefined4 *)(iVar4 + 0x60) = *(undefined4 *)(iVar7 + 0x60);
  *(undefined4 *)(iVar4 + 100) = uVar3;
  *(undefined4 *)(iVar4 + 0x68) = uVar13;
  *(undefined4 *)(iVar4 + 0x6c) = uVar14;
  uVar3 = FUN_088ce9c8("guide_ico_12",*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x118) = uVar3;
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x118);
  uVar13 = FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x9c));
  uVar14 = FUN_089f494c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x9c));
  FUN_089f4924(uVar13,uVar14,uVar3);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x118);
  uVar13 = FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x9c));
  local_94 = (float)FUN_089f494c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x9c));
  local_a0 = 0;
  local_9c = 0;
  local_98 = (float)uVar13;
  FUN_089f4060(uVar3,&local_a0);
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x118);
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0x9c);
  uVar3 = *(undefined4 *)(iVar7 + 100);
  uVar13 = *(undefined4 *)(iVar7 + 0x68);
  uVar14 = *(undefined4 *)(iVar7 + 0x6c);
  *(undefined4 *)(iVar4 + 0x60) = *(undefined4 *)(iVar7 + 0x60);
  *(undefined4 *)(iVar4 + 100) = uVar3;
  *(undefined4 *)(iVar4 + 0x68) = uVar13;
  *(undefined4 *)(iVar4 + 0x6c) = uVar14;
  uVar3 = FUN_088ce9c8("guide_ico_05",*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x11c) = uVar3;
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x11c);
  uVar13 = FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x98));
  uVar14 = FUN_089f494c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x98));
  FUN_089f4924(uVar13,uVar14,uVar3);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x11c);
  uVar13 = FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x98));
  local_94 = (float)FUN_089f494c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x98));
  local_a0 = 0;
  local_9c = 0;
  local_98 = (float)uVar13;
  FUN_089f4060(uVar3,&local_a0);
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x11c);
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0x98);
  uVar3 = *(undefined4 *)(iVar7 + 100);
  uVar13 = *(undefined4 *)(iVar7 + 0x68);
  uVar14 = *(undefined4 *)(iVar7 + 0x6c);
  *(undefined4 *)(iVar4 + 0x60) = *(undefined4 *)(iVar7 + 0x60);
  *(undefined4 *)(iVar4 + 100) = uVar3;
  *(undefined4 *)(iVar4 + 0x68) = uVar13;
  *(undefined4 *)(iVar4 + 0x6c) = uVar14;
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x34));
  FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x34));
  FUN_089f44a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x34),1,8);
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0x34);
  *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 0x20;
  FUN_089f4954(0x3fb33333,0x3fb33333,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x54),0);
  *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) = *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) | 0x20
  ;
  FUN_089f4954(0x3fb33333,0x3fb33333,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x110),0);
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0x110);
  *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 0x20;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x110) + 0x68) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x54) + 0x68);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xb4) + 0xc4) = 0x3f800000;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xb8) + 0xc4) = 0x3f800000;
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0x40);
  *(undefined4 *)(iVar7 + 0xb0) = 0x3f800000;
  *(undefined4 *)(iVar7 + 0xb4) = 0;
  *(undefined4 *)(iVar7 + 0xb8) = 0;
  *(undefined4 *)(iVar7 + 0xbc) = 0x3f800000;
  pfVar8 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x40) + 0x68);
  *pfVar8 = *pfVar8 - 5.0;
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x40));
  FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x40));
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 100);
  *(undefined4 *)(iVar7 + 0xb0) = 0x3f800000;
  *(undefined4 *)(iVar7 + 0xb4) = 0;
  *(undefined4 *)(iVar7 + 0xb8) = 0;
  *(undefined4 *)(iVar7 + 0xbc) = 0x3f800000;
  pfVar8 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 100) + 0x68);
  *pfVar8 = *pfVar8 - (*(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x40) + 0x68) + 1.0);
  FUN_089f480c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 100));
  FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 100));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x3c) + 0xb0) = 0;
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3c));
  FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3c));
  iVar4 = *(int *)(param_1 + 0x70);
  iVar7 = 0x48;
  if (iVar4 != 0) {
    iVar10 = 0x120;
    cVar1 = *(char *)(iVar4 + 0x14c);
    iVar9 = iVar7;
    do {
      iVar7 = iVar9;
      if (cVar1 == '\0') {
        local_54 = 0;
        FUN_089d8634();
        uVar3 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar5 = FUN_089d7d74(0x160,0,0);
        FUN_089d816c(uVar3);
        FUN_089d866c();
        iVar7 = iVar9 + 1;
        iVar6 = local_54;
        if (iVar5 != 0) {
          FUN_089f3aa8(iVar5);
          iVar6 = iVar5;
        }
        *(int *)(*(int *)(param_1 + 0x1c) + iVar10) = iVar6;
        FUN_089f5194(*(undefined4 *)(param_1 + 0x18),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10));
        if (*(uint *)(iVar4 + 8) < 0x4e) {
          iVar9 = *(int *)(param_1 + 0x1c);
LAB_088cfd10:
          FUN_089f3dd4(*(undefined4 *)(iVar9 + 0x3c),*(undefined4 *)(iVar9 + iVar10));
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
          *(uint *)(iVar9 + 0xd0) = *(uint *)(iVar9 + 0xd0) & 0xfffffffe;
          FUN_089f44a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),1,8);
          iVar9 = *(int *)(iVar4 + 8);
        }
        else {
          if (0x53 < *(uint *)(iVar4 + 8)) {
            iVar9 = *(int *)(param_1 + 0x1c);
            goto LAB_088cfd10;
          }
          FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x40),
                       *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10));
          FUN_089f44a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),1,8);
          iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
          iVar10 = iVar10 + 4;
          *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
          local_58 = 0;
          FUN_089d8634();
          uVar3 = FUN_089d81a4();
          FUN_089d816c(1);
          iVar6 = FUN_089d7d74(0x160,0,0);
          FUN_089d816c(uVar3);
          FUN_089d866c();
          iVar7 = iVar9 + 2;
          iVar9 = local_58;
          if (iVar6 != 0) {
            FUN_089f3aa8(iVar6);
            iVar9 = iVar6;
          }
          *(int *)(*(int *)(param_1 + 0x1c) + iVar10) = iVar9;
          FUN_089f5194(*(undefined4 *)(param_1 + 0x18),
                       *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10));
          FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 100),
                       *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10));
          fVar15 = *(float *)(iVar4 + 0x408) * 0.018;
          FUN_089f4954(fVar15,fVar15,*(float *)(iVar4 + 0x420) + 1.570796,
                       *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),0);
          fVar11 = (float)FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10));
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10);
          fVar12 = (float)FUN_089f494c(uVar3);
          FUN_089f4924(fVar11 * fVar15,fVar12 * fVar15,uVar3);
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
          *(uint *)(iVar9 + 0xd0) = *(uint *)(iVar9 + 0xd0) & 0xfffffffe;
          FUN_089f44a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),1,8);
          iVar9 = *(int *)(iVar4 + 8);
        }
        if (iVar9 == 0x55) {
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
          *(uint *)(iVar9 + 0xd0) = *(uint *)(iVar9 + 0xd0) & 0xfffffffe;
          iVar10 = iVar10 + 4;
        }
        else {
          iVar10 = iVar10 + 4;
        }
      }
      iVar4 = *(int *)(iVar4 + 4);
      if (iVar4 == 0) break;
      cVar1 = *(char *)(iVar4 + 0x14c);
      iVar9 = iVar7;
    } while( true );
  }
  uVar14 = DAT_08b00f4c;
  uVar13 = DAT_08b00f48;
  uVar3 = DAT_08b00f44;
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x40);
  *(undefined4 *)(iVar4 + 0xb0) = DAT_08b00f40;
  *(undefined4 *)(iVar4 + 0xb4) = uVar3;
  *(undefined4 *)(iVar4 + 0xb8) = uVar13;
  *(undefined4 *)(iVar4 + 0xbc) = uVar14;
  uVar14 = DAT_08b00f4c;
  uVar13 = DAT_08b00f48;
  uVar3 = DAT_08b00f44;
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 100);
  *(undefined4 *)(iVar4 + 0xb0) = DAT_08b00f40;
  *(undefined4 *)(iVar4 + 0xb4) = uVar3;
  *(undefined4 *)(iVar4 + 0xb8) = uVar13;
  *(undefined4 *)(iVar4 + 0xbc) = uVar14;
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xfc) + 0x68) =
       *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x40) + 0x68) - 1.0;
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xfc));
  FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xfc));
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x38) + 0x68) =
       *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xfc) + 0x68) - 1.0;
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x38));
  FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x38));
  FUN_089f44a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x38),1,8);
  iVar4 = *(int *)(param_1 + 0xd4);
  if (iVar4 == 0) {
LAB_088d0244:
    if (iVar7 < *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0xcc) + 0x48) {
      iVar4 = iVar7 << 2;
      do {
        local_6c = 0;
        FUN_089d8634();
        uVar3 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar10 = FUN_089d7d74(0x160,0,0);
        FUN_089d816c(uVar3);
        FUN_089d866c();
        iVar9 = local_6c;
        if (iVar10 != 0) {
          FUN_089f3aa8(iVar10);
          iVar9 = iVar10;
        }
        *(int *)(*(int *)(param_1 + 0x1c) + iVar4) = iVar9;
        FUN_089f5194(*(undefined4 *)(param_1 + 0x18),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
        FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3c),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
        FUN_089f44a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),1,8);
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        iVar7 = iVar7 + 1;
        *(uint *)(iVar9 + 0xd0) = *(uint *)(iVar9 + 0xd0) & 0xfffffffe;
        iVar4 = iVar4 + 4;
      } while (iVar7 < *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0xcc) + 0x48);
    }
    iVar7 = 0;
    iVar4 = 0;
    do {
      iVar7 = iVar7 + 1;
      iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar9 + 0xd0) = *(uint *)(iVar9 + 0xd0) & 0xfffffffe;
      iVar4 = iVar4 + 4;
    } while (iVar7 < 0x48);
    return;
  }
  iVar9 = iVar7 << 2;
  sVar2 = *(short *)(iVar4 + 0x142);
  do {
    if (sVar2 == 0xbd9) {
      local_5c = 0;
      local_48 = iVar9;
      FUN_089d8634();
      uVar3 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar6 = FUN_089d7d74(0x160,0,0);
      FUN_089d816c(uVar3);
      FUN_089d866c();
      iVar9 = local_48;
      iVar10 = local_5c;
      if (iVar6 != 0) {
        FUN_089f3aa8(iVar6);
        iVar10 = iVar6;
      }
      *(int *)(*(int *)(param_1 + 0x1c) + iVar9) = iVar10;
      FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9)
                  );
      FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x40),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9));
      FUN_089f44a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9),1,8);
      iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
      local_48 = iVar9 + 4;
      *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) & 0xfffffffe;
      local_60 = 0;
      FUN_089d8634();
      uVar3 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar6 = FUN_089d7d74(0x160,0,0);
      FUN_089d816c(uVar3);
      FUN_089d866c();
      iVar9 = local_48;
      iVar10 = local_60;
      if (iVar6 != 0) {
        FUN_089f3aa8(iVar6);
        iVar10 = iVar6;
      }
      *(int *)(*(int *)(param_1 + 0x1c) + iVar9) = iVar10;
      FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9)
                  );
      FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 100),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9));
      FUN_089f44a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9),1,8);
      iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
      *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) & 0xfffffffe;
      FUN_089f4954(0x3fe66666,0x3fe66666,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9),0);
      fVar11 = (float)FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9));
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9);
      fVar12 = (float)FUN_089f494c(uVar3);
      FUN_089f4924(fVar11 * 1.8,fVar12 * 1.8,uVar3);
      iVar7 = iVar7 + 2;
      iVar9 = iVar9 + 4;
LAB_088d0238:
      iVar4 = *(int *)(iVar4 + 4);
    }
    else {
      if (*(short *)(iVar4 + 0x142) == 0xbc7) {
        local_64 = 0;
        local_48 = iVar9;
        FUN_089d8634();
        uVar3 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar6 = FUN_089d7d74(0x160,0,0);
        FUN_089d816c(uVar3);
        FUN_089d866c();
        iVar9 = local_48;
        iVar10 = local_64;
        if (iVar6 != 0) {
          FUN_089f3aa8(iVar6);
          iVar10 = iVar6;
        }
        *(int *)(*(int *)(param_1 + 0x1c) + iVar9) = iVar10;
        FUN_089f5194(*(undefined4 *)(param_1 + 0x18),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9));
        FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xfc),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9));
        FUN_089f44a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9),1,8);
        iVar7 = iVar7 + 1;
        iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
        iVar9 = iVar9 + 4;
        *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) & 0xfffffffe;
        goto LAB_088d0238;
      }
      if ((*(short *)(iVar4 + 0x142) == 0x1778) || (*(short *)(iVar4 + 0x142) == 0xbdf)) {
        local_68 = 0;
        local_48 = iVar9;
        FUN_089d8634();
        uVar3 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar6 = FUN_089d7d74(0x160,0,0);
        FUN_089d816c(uVar3);
        FUN_089d866c();
        iVar9 = local_48;
        iVar10 = local_68;
        if (iVar6 != 0) {
          FUN_089f3aa8(iVar6);
          iVar10 = iVar6;
        }
        *(int *)(*(int *)(param_1 + 0x1c) + iVar9) = iVar10;
        FUN_089f5194(*(undefined4 *)(param_1 + 0x18),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9));
        FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3c),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9));
        FUN_089f44a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9),1,8);
        iVar7 = iVar7 + 1;
        iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
        iVar9 = iVar9 + 4;
        *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) & 0xfffffffe;
        goto LAB_088d0238;
      }
      iVar4 = *(int *)(iVar4 + 4);
    }
    if (iVar4 == 0) goto LAB_088d0244;
    sVar2 = *(short *)(iVar4 + 0x142);
  } while( true );
}

