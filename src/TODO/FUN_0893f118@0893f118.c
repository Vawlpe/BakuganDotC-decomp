#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0893f118(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 in_V7C;
  
  bVar1 = *(byte *)(param_1 + 0x7ea);
  if (4 < bVar1) {
    return 1;
  }
  if (bVar1 == 1) {
    iVar4 = 0xe;
    iVar3 = 0x38;
    do {
      iVar4 = iVar4 + 1;
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 0x14);
    if (*(char *)(param_1 + 0x7dc) == '\0') {
      iVar3 = _DONE_NotZero_DAT_08AC5874();
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x1c);
      }
      else {
        uVar7 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar7,0x2c0001f,0,0);
        iVar3 = *(int *)(param_1 + 0x1c);
      }
      iVar3 = *(int *)(iVar3 + 0x7c);
      *(undefined4 *)(iVar3 + 0xc0) = 0;
      *(undefined4 *)(iVar3 + 0xc4) = 0x3f800000;
      *(undefined4 *)(iVar3 + 200) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0xcc) = 0x3f800000;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x7dc) * 4 + 0x8c);
    }
    else {
      iVar3 = _DONE_NotZero_DAT_08AC5874();
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x1c);
      }
      else {
        uVar7 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar7,0x2c0001d,0,0);
        iVar3 = *(int *)(param_1 + 0x1c);
      }
      iVar3 = *(int *)(iVar3 + 0x78);
      *(undefined4 *)(iVar3 + 0xc0) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0xc4) = 0;
      *(undefined4 *)(iVar3 + 200) = 0;
      *(undefined4 *)(iVar3 + 0xcc) = 0x3f800000;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x7dc) * 4 + 0x8c);
    }
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
    FUN_089f46dc(*(undefined4 *)
                  (*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x7dc) * 4 + 0x8c));
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x7dc) * 4 + 0x8c);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 0x20;
    FUN_089a51fc(0x3f800000,0x3f800000,0,
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x7dc) * 4 + 0x8c));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x7dc) * 4 + 0x8c) + 0xbc) =
         0x3f800000;
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x7dc) * 4 + 0x8c) + 0x60) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 0x60);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x7dc) * 4 + 0x8c) +
              100) = *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 100) + 1.0;
    bVar1 = *(byte *)(param_1 + 0x7dc);
    iVar3 = *(int *)(param_1 + 0x1c);
    iVar4 = param_1 + (uint)bVar1 * 0x28;
    *(undefined4 *)(iVar4 + 0x60c) = 0;
    cVar2 = *(char *)(param_1 + 0x7ea);
    *(undefined4 *)(iVar4 + 0x614) =
         *(undefined4 *)(*(int *)(iVar3 + (uint)bVar1 * 4 + 0x8c) + 0x90);
    *(char *)(param_1 + 0x7ea) = cVar2 + '\x01';
  }
  else if (bVar1 == 2) {
    bVar1 = *(byte *)(param_1 + 0x7dc);
    iVar3 = param_1 + (uint)bVar1 * 0x28;
    fVar6 = *(float *)(iVar3 + 0x60c) + 0.125;
    *(float *)(iVar3 + 0x60c) = fVar6;
    uVar7 = vmul_s(fVar6 * 3.141593,in_V7C);
    fVar6 = (float)vcos_s(uVar7);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + (uint)bVar1 * 4 + 0x8c) + 0x90) =
         *(float *)(iVar3 + 0x614) + (1.0 - fVar6) * 0.5 * 0.2;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x7dc) * 4 + 0x8c);
    *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(iVar3 + 0x90);
    iVar4 = *(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x7dc) * 4;
    iVar3 = *(int *)(iVar4 + 0x8c);
    if (2.0 <= *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x7dc) * 0x28 + 0x60c)) {
      *(undefined4 *)(iVar3 + 0x90) = 0x3f800000;
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x7dc) * 4 + 0x8c) + 0x94) =
           0x3f800000;
      *(undefined2 *)(param_1 + 0x7e8) = 0x1e;
      *(char *)(param_1 + 0x7ea) = *(char *)(param_1 + 0x7ea) + '\x01';
      iVar4 = *(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x7dc) * 4;
      iVar3 = *(int *)(iVar4 + 0x8c);
    }
    iVar4 = *(int *)(iVar4 + 0x8c);
    FUN_089f4954(*(undefined4 *)(iVar4 + 0x90),*(undefined4 *)(iVar4 + 0x94),
                 *(undefined4 *)(iVar4 + 0x9c),iVar3,0);
  }
  else if (bVar1 == 3) {
    if (*(short *)(param_1 + 0x7e8) == 0) {
      *(undefined *)(param_1 + 0x7ea) = 4;
    }
    else {
      *(short *)(param_1 + 0x7e8) = *(short *)(param_1 + 0x7e8) + -1;
    }
  }
  else if (bVar1 == 4) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x7dc) * 4 + 0x8c);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
    *(char *)(param_1 + 0x7ea) = *(char *)(param_1 + 0x7ea) + '\x01';
  }
  else if (*(short *)(param_1 + 0x7e8) == 0xf) {
    *(undefined2 *)(param_1 + 0x7e8) = 0;
    *(byte *)(param_1 + 0x7ea) = bVar1 + 1;
  }
  else {
    *(short *)(param_1 + 0x7e8) = *(short *)(param_1 + 0x7e8) + 1;
  }
  return 0;
}

