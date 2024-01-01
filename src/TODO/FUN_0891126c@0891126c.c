#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891126c(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined auStack_80 [64];
  undefined4 local_40;
  ushort local_3c [2];
  int local_38;
  
  if (*(int *)(param_1 + 0x2c) != 0) goto LAB_08911c24;
  *(undefined4 *)(param_1 + 0x74) = 0;
  iVar6 = 0;
  piVar5 = (int *)(&DAT_08a9b620 + *(int *)(param_1 + 0x150) * 0x1c);
  do {
    iVar6 = iVar6 + 1;
    if (*piVar5 == -1) break;
    *(int *)(param_1 + 0x74) = iVar6;
    piVar5 = piVar5 + 1;
  } while (iVar6 < 7);
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x12);
  local_38 = 0;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x160,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar6 = local_38;
  if (iVar3 != 0) {
    FUN_089f3aa8(iVar3);
    iVar6 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0x1c) + 0x90) = iVar6;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x90);
  *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
  FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x90));
  FUN_089bf93c(100,1);
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 8);
  *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x10);
  *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x50);
  *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x54);
  *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x58);
  *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x5c);
  *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x88);
  *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x8c);
  *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
  if (*(int *)(param_1 + 0x150) == 4) {
    iVar6 = FUN_088be274();
    iVar6 = *(int *)(iVar6 + 0x658);
    iVar3 = 0;
    iVar4 = 0;
    if (iVar6 != 0) {
      sVar1 = *(short *)(iVar6 + 0x142);
      while( true ) {
        if (sVar1 == 0xbdf) {
          if (*(char *)(iVar6 + 0x15e) == '\0') {
            iVar4 = iVar4 + 1;
          }
          iVar3 = iVar3 + 1;
          iVar6 = *(int *)(iVar6 + 4);
        }
        else {
          iVar6 = *(int *)(iVar6 + 4);
        }
        if (iVar6 == 0) break;
        sVar1 = *(short *)(iVar6 + 0x142);
      }
    }
    FUN_089f4a90((float)((iVar4 / 10) / 6),(float)((iVar4 / 10) % 6),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x74));
    FUN_089f4a90((float)((iVar4 % 10) / 6),(float)((iVar4 % 10) % 6),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x78));
    FUN_089f4a90((float)((iVar3 / 10) / 6),(float)((iVar3 / 10) % 6),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x80));
    FUN_089f4a90((float)((iVar3 % 10) / 6),(float)((iVar3 % 10) % 6),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x84));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x70) + 0x68) = 0xc2c80000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x74) + 0x68) = 0xc2c80000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x78) + 0x68) = 0xc2c80000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x7c) + 0x68) = 0xc2c80000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x80) + 0x68) = 0xc2c80000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x84) + 0x68) = 0xc2c80000;
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x60);
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x70);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x74);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x78);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x7c);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x80);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x84);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x60);
  }
  FUN_089f4a90(0,0x40000000,uVar2);
  FUN_089f4a90(0,0x3f800000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 100));
  iVar6 = 0;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (0 < *(int *)(param_1 + 0x160)) {
    iVar4 = 0;
    do {
      iVar6 = iVar6 + 1;
      *(undefined4 *)(*(int *)(iVar3 + iVar4) + 0xbc) = 0;
      iVar4 = iVar4 + 4;
      iVar3 = *(int *)(param_1 + 0x1c);
    } while (iVar6 < *(int *)(param_1 + 0x160));
  }
  iVar6 = 0;
  iVar4 = 0;
  do {
    iVar3 = *(int *)(iVar3 + iVar4 + 0x14);
    if (iVar6 < *(int *)(param_1 + 0x74)) {
      FUN_089f46dc(iVar3);
      FUN_089f4954(0x3f800000,0x3f800000,0,iVar3,0);
      FUN_089f43d4(0x3f000000,iVar3);
      iVar7 = *(int *)(param_1 + 0x74);
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 0x34);
    }
    else {
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
      iVar7 = *(int *)(param_1 + 0x74);
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 0x34);
    }
    if (iVar6 < iVar7) {
      FUN_089f46dc(iVar3);
      FUN_089f4954(0x3f800000,0x3f800000,0,iVar3,0);
      FUN_089f43d4(0x3f000000,iVar3);
      iVar3 = *(int *)(param_1 + 0x1c);
    }
    else {
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
      iVar3 = *(int *)(param_1 + 0x1c);
    }
    iVar6 = iVar6 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar6 < 7);
  FUN_089f46dc(*(undefined4 *)(iVar3 + 0x50));
  FUN_089f4954(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x50),0);
  FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x50));
  fVar8 = (float)FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x50));
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x50);
  fVar9 = (float)FUN_089f494c(uVar2);
  FUN_089f4924(fVar8 * 1.1,fVar9 * 1.1,uVar2);
  FUN_08910e38(param_1,*(undefined4 *)(param_1 + 0x74));
  iVar3 = 0;
  iVar6 = *(int *)(param_1 + 0x150);
  if (0 < *(int *)(param_1 + 0x74)) {
    iVar4 = 0;
    do {
      FUN_089f4a90((float)*(int *)(&DAT_08a9b8a4 +
                                  *(int *)(&DAT_08a9b620 + iVar6 * 0x1c + iVar4) * 8),
                   (float)*(int *)(&DAT_08a9b8a8 +
                                  *(int *)(&DAT_08a9b620 + iVar6 * 0x1c + iVar4) * 8),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4 + 0x34));
      iVar6 = *(int *)(param_1 + 0x150);
      if (*(int *)(&DAT_08a9b620 + iVar6 * 0x1c + iVar4) == 0xd) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 0x34);
        *(undefined4 *)(iVar6 + 0xb0) = 0x3e99999a;
        *(undefined4 *)(iVar6 + 0xb4) = 0x3e99999a;
        *(undefined4 *)(iVar6 + 0xb8) = 0x3e99999a;
        *(undefined4 *)(iVar6 + 0xbc) = 0x3f800000;
        iVar6 = *(int *)(param_1 + 0x150);
        iVar7 = *(int *)(param_1 + 0x74);
      }
      else {
        iVar7 = *(int *)(param_1 + 0x74);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < iVar7);
  }
  if ((5 < iVar6) && (iVar6 < 10)) {
    FUN_089f4a90(0,0x40400000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x30));
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 100);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x6c);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    iVar6 = FUN_0880d354();
    if ((iVar6 != 0) && ((iVar6 = FUN_0880d36c(), iVar6 != 0 && (iVar6 == 1)))) {
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x60);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x68);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    }
  }
  if (DAT_08ac0e78 == 0x12d) {
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x74)) {
      piVar5 = (int *)(&DAT_08a9b620 + *(int *)(param_1 + 0x150) * 0x1c);
      do {
        if (*piVar5 == 0xe) {
          *(int *)(param_1 + 0x78) = iVar6;
          break;
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x74));
    }
  }
  switch(*(int *)(param_1 + 0x150)) {
  case 0:
  case 1:
  case 3:
  case 10:
    iVar3 = param_1 + 0x278;
    strcpy(iVar3,&DAT_08a9b92c);
    iVar6 = FUN_0882c13c();
    if (iVar6 != 0) {
      iVar6 = FUN_0882c15c(iVar3);
      strcpy(iVar3,iVar6 + 0x7a4);
    }
    iVar6 = strcmp(iVar3,&DAT_08a9b92c);
    if (iVar6 != 0) {
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x54);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
      goto switchD_08911aa4_caseD_5;
    }
    iVar6 = *(int *)(param_1 + 0x2c);
    break;
  case 2:
    iVar6 = FUN_0880dc00("DMPauseEnd");
    iVar3 = FUN_088cc354(iVar6);
    if (10 < iVar3) {
      strcpy(param_1 + 0x278,*(undefined4 *)(iVar6 + 0x28));
    }
    iVar6 = strcmp(param_1 + 0x278,&DAT_08a9b92c);
    if (iVar6 != 0) {
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x88);
      *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
      goto switchD_08911aa4_caseD_5;
    }
    iVar6 = *(int *)(param_1 + 0x2c);
    break;
  case 4:
    iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x5c);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
    iVar6 = FUN_089bfa40(500);
    if (iVar6 != 0) {
      uVar2 = FUN_0880dd54();
      FUN_089b4c84(auStack_80,"mes_Adventure_hint_%s.bin",uVar2);
      iVar3 = FUN_089be054(DAT_08ac520c,auStack_80);
      iVar4 = FUN_088cc354(iVar3);
      local_40 = 0xffffffff;
      local_3c[0] = 0;
      FUN_088c248c(iVar6,&local_40,local_3c);
      if ((int)(uint)local_3c[0] < iVar4) {
        strcpy(param_1 + 0x278,*(undefined4 *)(iVar3 + (uint)local_3c[0] * 4));
      }
    }
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
switchD_08911aa4_caseD_5:
    iVar6 = *(int *)(param_1 + 0x2c);
    break;
  default:
    iVar6 = *(int *)(param_1 + 0x2c);
  }
  *(int *)(param_1 + 0x2c) = iVar6 + 1;
LAB_08911c24:
  FUN_089110dc(param_1);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}

