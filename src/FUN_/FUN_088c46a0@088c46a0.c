#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Restarted to delay deadcode elimination for space: ram

bool FUN_088c46a0(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  piVar1 = (int *)FUN_0880cc48();
  iVar4 = (int)*(char *)(*piVar1 + 0x410);
  if (99 < iVar4) {
    iVar4 = 99;
  }
  if (param_2 != '\0') {
    DAT_08abe9d4 = 0;
  }
  iVar2 = DAT_08abe9d0;
  if (DAT_08abe9d4 < 6) {
    if (DAT_08abe9d4 == 1) {
      fVar6 = (float)DAT_08abe9d0 * 0.1 + 0.1;
      if (1.0 < fVar6) {
        fVar6 = 1.0;
      }
      *(float *)(*(int *)(param_1 + 0x6b0) + 0x60) = (1.0 - fVar6) * 26.0 + fVar6 * 192.0;
      *(float *)(*(int *)(param_1 + 0x6b0) + 100) = (1.0 - fVar6) * 121.0 + fVar6 * 24.0;
      FUN_089f4954(fVar6,fVar6,0,*(undefined4 *)(param_1 + 0x6b0),0);
      iVar2 = DAT_08abe9dc;
      *(float *)(DAT_08abe9e0 + 0xbc) = fVar6;
      iVar4 = DAT_08abe9d8;
      *(float *)(iVar2 + 0xbc) = fVar6;
      *(float *)(iVar4 + 0xbc) = fVar6;
      *(float *)(*(int *)(param_1 + 0x6b0) + 0xbc) = fVar6;
      iVar2 = DAT_08abe9d0 + 1;
      if (9 < DAT_08abe9d0) {
        *(undefined4 *)(*(int *)(param_1 + 0x6b0) + 0x60) = 0x43400000;
        *(undefined4 *)(*(int *)(param_1 + 0x6b0) + 100) = 0x41c00000;
        FUN_089f4954(0x3f800000,0x3f800000,0,*(undefined4 *)(param_1 + 0x6b0),0);
        iVar4 = DAT_08abe9e0;
        *(undefined4 *)(*(int *)(param_1 + 0x6b0) + 0xbc) = 0x3f800000;
        iVar2 = DAT_08abe9dc;
        *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
        iVar4 = DAT_08abe9d8;
        *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
        *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
        DAT_08abe9d0 = 0;
        DAT_08abe9d4 = DAT_08abe9d4 + 1;
        iVar2 = DAT_08abe9d0;
      }
    }
    else if (DAT_08abe9d4 == 2) {
      if (DAT_08abe9d0 == 4) {
        iVar4 = FUN_089edb80();
        *(undefined4 *)(iVar4 + 0x30) = 0;
        *(undefined4 *)(iVar4 + 0x34) = 0;
        *(undefined4 *)(iVar4 + 0x38) = 0;
        *(undefined4 *)(iVar4 + 0x3c) = 0;
        iVar4 = FUN_089edb80();
        *(undefined4 *)(iVar4 + 0x40) = 0x3f800000;
        *(undefined4 *)(iVar4 + 0x44) = 0x3f800000;
        *(undefined4 *)(iVar4 + 0x48) = 0x3f800000;
        *(undefined4 *)(iVar4 + 0x4c) = 0x3f800000;
        uVar3 = FUN_089edb80();
        FUN_089edf24(uVar3,8);
      }
      else if (DAT_08abe9d0 == 0xe) {
        iVar4 = FUN_089edb80();
        *(undefined4 *)(iVar4 + 0x30) = 0x3f800000;
        *(undefined4 *)(iVar4 + 0x34) = 0x3f800000;
        *(undefined4 *)(iVar4 + 0x38) = 0x3f800000;
        *(undefined4 *)(iVar4 + 0x3c) = 0x3f800000;
        iVar4 = FUN_089edb80();
        *(undefined4 *)(iVar4 + 0x40) = 0;
        *(undefined4 *)(iVar4 + 0x44) = 0;
        *(undefined4 *)(iVar4 + 0x48) = 0;
        *(undefined4 *)(iVar4 + 0x4c) = 0;
        uVar3 = FUN_089edb80();
        FUN_089edf24(uVar3,5);
      }
      iVar2 = DAT_08abe9d0 + 1;
      if (0x13 < DAT_08abe9d0) {
        DAT_08abe9d4 = DAT_08abe9d4 + 1;
        DAT_08abe9d0 = 0;
        iVar2 = DAT_08abe9d0;
      }
    }
    else if (DAT_08abe9d4 == 3) {
      if (DAT_08abe9d0 == 6) {
        uVar3 = FUN_089c59f0();
        FUN_089c6350(uVar3,0x2c00041,0,0);
      }
      if (5 < DAT_08abe9d0) {
        fVar6 = (float)(DAT_08abe9d0 + -6) * 0.1666667;
        if (1.0 < fVar6) {
          fVar6 = 1.0;
        }
        if (iVar4 % 10 == 0) {
          *(float *)(DAT_08abe9dc + 100) = *(float *)(DAT_08abe9dc + 100) - 0.5;
          *(float *)(DAT_08abe9dc + 0xbc) = 1.0 - fVar6;
          *(float *)(DAT_08abe9e4 + 0xbc) = fVar6;
        }
        if (iVar4 != 0) {
          *(float *)(DAT_08abe9e0 + 100) = *(float *)(DAT_08abe9e0 + 100) - 0.5;
          *(float *)(DAT_08abe9e0 + 0xbc) = 1.0 - fVar6;
          *(float *)(DAT_08abe9e8 + 0xbc) = fVar6;
        }
      }
      if (DAT_08abe9d0 < 0x14) {
        iVar2 = DAT_08abe9d0 + 1;
      }
      else {
        DAT_08abe9d4 = DAT_08abe9d4 + 1;
        DAT_08abe9d0 = 0;
        iVar2 = DAT_08abe9d0;
      }
    }
    else if (DAT_08abe9d4 == 4) {
      fVar6 = 1.0 - (float)DAT_08abe9d0 * 0.2;
      if (fVar6 < 0.0) {
        fVar6 = 0.0;
      }
      fVar5 = fVar6;
      if (*(float *)(DAT_08abe9dc + 0xbc) < fVar6) {
        fVar5 = *(float *)(DAT_08abe9dc + 0xbc);
      }
      *(float *)(DAT_08abe9dc + 0xbc) = fVar5;
      fVar5 = fVar6;
      if (*(float *)(DAT_08abe9e0 + 0xbc) < fVar6) {
        fVar5 = *(float *)(DAT_08abe9e0 + 0xbc);
      }
      *(float *)(DAT_08abe9e0 + 0xbc) = fVar5;
      fVar5 = fVar6;
      if (*(float *)(DAT_08abe9e4 + 0xbc) < fVar6) {
        fVar5 = *(float *)(DAT_08abe9e4 + 0xbc);
      }
      *(float *)(DAT_08abe9e4 + 0xbc) = fVar5;
      fVar5 = fVar6;
      if (*(float *)(DAT_08abe9e8 + 0xbc) < fVar6) {
        fVar5 = *(float *)(DAT_08abe9e8 + 0xbc);
      }
      *(float *)(DAT_08abe9e8 + 0xbc) = fVar5;
      iVar4 = DAT_08abe9d8;
      *(float *)(*(int *)(param_1 + 0x6b0) + 0xbc) = fVar6;
      *(float *)(iVar4 + 0xbc) = fVar6;
      iVar4 = 5;
      if (DAT_08abe9d0 < 5) {
        iVar4 = DAT_08abe9d0;
      }
      DAT_08abe9d0 = iVar4;
      if (4 < iVar4) {
        *(uint *)(*(int *)(param_1 + 0x6b0) + 0xd0) =
             *(uint *)(*(int *)(param_1 + 0x6b0) + 0xd0) & 0xfffffffe;
        *(uint *)(DAT_08abe9d8 + 0xd0) = *(uint *)(DAT_08abe9d8 + 0xd0) & 0xfffffffe;
        *(uint *)(DAT_08abe9dc + 0xd0) = *(uint *)(DAT_08abe9dc + 0xd0) & 0xfffffffe;
        *(uint *)(DAT_08abe9e0 + 0xd0) = *(uint *)(DAT_08abe9e0 + 0xd0) & 0xfffffffe;
        *(uint *)(DAT_08abe9e4 + 0xd0) = *(uint *)(DAT_08abe9e4 + 0xd0) & 0xfffffffe;
        *(uint *)(DAT_08abe9e8 + 0xd0) = *(uint *)(DAT_08abe9e8 + 0xd0) & 0xfffffffe;
        FUN_089f5124(*(undefined4 *)(param_1 + 0x5f4),*(undefined4 *)(param_1 + 0x6b0));
        *(undefined4 *)(param_1 + 0x6b0) = 0;
        FUN_089f5124(*(undefined4 *)(param_1 + 0x5f4),DAT_08abe9d8);
        DAT_08abe9d8 = 0;
        FUN_089f5124(*(undefined4 *)(param_1 + 0x5f4),DAT_08abe9dc);
        DAT_08abe9dc = 0;
        FUN_089f5124(*(undefined4 *)(param_1 + 0x5f4),DAT_08abe9e0);
        DAT_08abe9e0 = 0;
        FUN_089f5124(*(undefined4 *)(param_1 + 0x5f4),DAT_08abe9e4);
        DAT_08abe9e4 = 0;
        FUN_089f5124(*(undefined4 *)(param_1 + 0x5f4),DAT_08abe9e8);
        DAT_08abe9e8 = 0;
        DAT_08abe9d4 = DAT_08abe9d4 + 1;
      }
      iVar2 = DAT_08abe9d0 + 1;
    }
    else if (DAT_08abe9d4 != 5) {
      iVar2 = FUN_089c59d4();
      if (iVar2 != 0) {
        uVar3 = FUN_089c59f0();
        FUN_089c6588(uVar3,*(undefined4 *)(param_1 + 0x6f4));
      }
      if (*(int *)(param_1 + 0x6b0) != 0) {
        FUN_089f5124(*(undefined4 *)(param_1 + 0x5f4),*(int *)(param_1 + 0x6b0));
        *(undefined4 *)(param_1 + 0x6b0) = 0;
      }
      uVar3 = FUN_0881a300(0x11,0xe);
      uVar3 = FUN_088c1680(param_1,uVar3);
      *(undefined4 *)(param_1 + 0x6b0) = uVar3;
      if (DAT_08abe9d8 != 0) {
        FUN_089f5124(*(undefined4 *)(param_1 + 0x5f4),DAT_08abe9d8);
        DAT_08abe9d8 = 0;
      }
      if (DAT_08abe9dc != 0) {
        FUN_089f5124(*(undefined4 *)(param_1 + 0x5f4),DAT_08abe9dc);
        DAT_08abe9dc = 0;
      }
      if (DAT_08abe9e0 != 0) {
        FUN_089f5124(*(undefined4 *)(param_1 + 0x5f4),DAT_08abe9e0);
        DAT_08abe9e0 = 0;
      }
      if (DAT_08abe9e4 != 0) {
        FUN_089f5124(*(undefined4 *)(param_1 + 0x5f4),DAT_08abe9e4);
        DAT_08abe9e4 = 0;
      }
      if (DAT_08abe9e8 != 0) {
        FUN_089f5124(*(undefined4 *)(param_1 + 0x5f4),DAT_08abe9e8);
        DAT_08abe9e8 = 0;
      }
      uVar3 = FUN_0881a300(0xc,8);
      DAT_08abe9d8 = FUN_088c1680(param_1,uVar3);
      uVar3 = FUN_0881a300(0xc,9);
      DAT_08abe9dc = FUN_088c1680(param_1,uVar3);
      DAT_08abe9e4 = FUN_088c1680(param_1,uVar3);
      uVar3 = FUN_0881a300(0xc,10);
      DAT_08abe9e0 = FUN_088c1680(param_1,uVar3);
      DAT_08abe9e8 = FUN_088c1680(param_1,uVar3);
      FUN_088be144(DAT_08abe9dc,DAT_08abe9e0,iVar4);
      FUN_088be144(DAT_08abe9e4,DAT_08abe9e8,iVar4 + -1);
      *(undefined4 *)(*(int *)(param_1 + 0x6b0) + 0x60) = 0x41d00000;
      *(undefined4 *)(*(int *)(param_1 + 0x6b0) + 100) = 0x42f20000;
      FUN_089f4954(0x3dcccccd,0x3dcccccd,0,*(undefined4 *)(param_1 + 0x6b0),0);
      iVar2 = DAT_08abe9dc;
      *(undefined4 *)(DAT_08abe9e0 + 0xbc) = 0;
      iVar4 = DAT_08abe9d8;
      *(undefined4 *)(iVar2 + 0xbc) = 0;
      *(undefined4 *)(iVar4 + 0xbc) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x6b0) + 0xbc) = 0;
      iVar4 = DAT_08abe9e4;
      *(undefined4 *)(DAT_08abe9e8 + 0xbc) = 0;
      *(undefined4 *)(iVar4 + 0xbc) = 0;
      *(undefined4 *)(DAT_08abe9d8 + 0x60) = 0x43900000;
      *(undefined4 *)(DAT_08abe9d8 + 100) = 0x43020000;
      FUN_089f4954(0x40000000,0x40000000,0,DAT_08abe9d8,0);
      FUN_089f4954(0x40000000,0x40000000,0,DAT_08abe9dc,0);
      FUN_089f4954(0x40000000,0x40000000,0,DAT_08abe9e0,0);
      FUN_089f4954(0x40000000,0x40000000,0,DAT_08abe9e4,0);
      FUN_089f4954(0x40000000,0x40000000,0,DAT_08abe9e8,0);
      DAT_08abe9d0 = 0;
      DAT_08abe9d4 = DAT_08abe9d4 + 1;
      iVar2 = DAT_08abe9d0;
    }
  }
  DAT_08abe9d0 = iVar2;
  return (int)DAT_08abe9d4 < 5;
}

