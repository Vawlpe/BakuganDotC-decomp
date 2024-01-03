#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0893fa24(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  bVar1 = *(byte *)(param_1 + 0x7ea);
  if (9 < bVar1) {
    return 1;
  }
  cVar2 = (char)((int)((uint)bVar1 * 4) >> 2);
  switch(bVar1) {
  case 0:
    *(undefined2 *)(param_1 + 0x7e8) = 0x1e;
    *(undefined *)(param_1 + 0x7eb) = 0;
    *(char *)(param_1 + 0x7ea) = cVar2 + '\x01';
    break;
  case 1:
    if (*(short *)(param_1 + 0x7e8) == 0) {
      *(char *)(param_1 + 0x7ea) = cVar2 + '\x01';
    }
    else {
      *(short *)(param_1 + 0x7e8) = *(short *)(param_1 + 0x7e8) + -1;
    }
    break;
  case 2:
    iVar7 = DONE_NotZero_DAT_08AC5874();
    if (iVar7 == 0) {
      cVar2 = *(char *)(param_1 + 0x7ea);
    }
    else {
      uVar3 = DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar3,0x2c0001a,0,0);
      cVar2 = *(char *)(param_1 + 0x7ea);
    }
    *(undefined2 *)(param_1 + 0x7e8) = 0x1e;
    *(char *)(param_1 + 0x7ea) = cVar2 + '\x01';
    break;
  case 3:
    if (*(short *)(param_1 + 0x7e8) == 0) {
      *(char *)(param_1 + 0x7eb) = *(char *)(param_1 + 0x7eb) + '\x01';
      if (*(char *)(param_1 + 0x7eb) == '\x03') {
        iVar7 = DONE_NotZero_DAT_08AC5874();
        if (iVar7 != 0) {
          uVar3 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar3,0x2c0001b,0,0);
        }
        *(undefined2 *)(param_1 + 0x7e8) = 0x1e;
        *(undefined *)(param_1 + 0x7eb) = 0;
        *(char *)(param_1 + 0x7ea) = *(char *)(param_1 + 0x7ea) + '\x01';
      }
      else {
        *(undefined *)(param_1 + 0x7ea) = 2;
      }
    }
    else {
      *(short *)(param_1 + 0x7e8) = *(short *)(param_1 + 0x7e8) + -1;
    }
    break;
  case 4:
    if (*(short *)(param_1 + 0x7e8) == 0) {
      *(char *)(param_1 + 0x7ea) = cVar2 + '\x01';
    }
    else {
      *(short *)(param_1 + 0x7e8) = *(short *)(param_1 + 0x7e8) + -1;
    }
    break;
  case 5:
    iVar7 = DONE_NotZero_DAT_08AC5874();
    if (iVar7 != 0) {
      uVar3 = DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar3,0x2c00020,0,0);
    }
    uVar9 = 0;
    iVar7 = 0;
    do {
      if (*(char *)(param_1 + iVar7 + 0x7ec) == -1) break;
      iVar7 = iVar7 + 1;
      uVar9 = uVar9 + 1 & 0xff;
    } while (iVar7 < 6);
    iVar7 = uVar9 * -9;
    iVar6 = 0;
    if (uVar9 != 0) {
      iVar8 = 0;
      do {
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x38);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
        FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x38));
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x38) + 0xbc) = 0x3f800000;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x38) + 0x60) =
             *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 0x60) + (float)iVar7;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x38) + 100) =
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 100);
        FUN_089a51fc(0x3f800000,0x3f800000,0,
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x38));
        uVar5 = (uint)*(byte *)(param_1 + iVar6 + 0x7ec);
        FUN_089f4a90((float)(uVar5 / 5),(float)(uVar5 % 5),
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8 + 0x38));
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x12;
        iVar8 = iVar8 + 4;
      } while (iVar6 < (int)uVar9);
    }
    *(undefined2 *)(param_1 + 0x7e8) = 0x1e;
    *(char *)(param_1 + 0x7ea) = *(char *)(param_1 + 0x7ea) + '\x01';
    break;
  case 6:
    if (*(short *)(param_1 + 0x7e8) == 0) {
      *(char *)(param_1 + 0x7ea) = cVar2 + '\x01';
    }
    else {
      *(short *)(param_1 + 0x7e8) = *(short *)(param_1 + 0x7e8) + -1;
    }
    break;
  case 7:
    iVar7 = 0;
    iVar6 = 0;
    do {
      iVar7 = iVar7 + 1;
      iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6 + 0x38);
      *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) & 0xfffffffe;
      iVar6 = iVar6 + 4;
    } while (iVar7 < 6);
    *(char *)(param_1 + 0x7ea) = *(char *)(param_1 + 0x7ea) + '\x01';
    break;
  case 8:
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0x88);
    *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x88));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x88) + 0xbc) = 0x3f800000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x88) + 0x60) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 0x60);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x88) + 100) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 100) + 1.0;
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x88));
    iVar7 = DONE_NotZero_DAT_08AC5874();
    if (iVar7 == 0) {
      cVar2 = *(char *)(param_1 + 0x7ea);
    }
    else {
      uVar3 = DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar3,0x2c00021,0,0);
      cVar2 = *(char *)(param_1 + 0x7ea);
    }
    *(undefined2 *)(param_1 + 0x7e8) = 0;
    *(char *)(param_1 + 0x7ea) = cVar2 + '\x01';
    break;
  case 9:
    *(short *)(param_1 + 0x7e8) = *(short *)(param_1 + 0x7e8) + 1;
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0x88);
    if (*(ushort *)(param_1 + 0x7e8) == 0x40) {
      *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
      *(undefined *)(param_1 + 0x7ea) = 10;
    }
    else if ((*(ushort *)(param_1 + 0x7e8) & 4) == 0) {
      *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
    }
    else {
      *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
    }
  }
  return 0;
}

