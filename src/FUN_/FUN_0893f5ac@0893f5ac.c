#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0893f5ac(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = *(byte *)(param_1 + 0x7ea);
  if (bVar1 < 0xb) {
    cVar2 = (char)((int)((uint)bVar1 * 4) >> 2);
    switch(bVar1) {
    case 0:
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
      FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x38));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x38) + 0xbc) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x38) + 0x60) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 0x60);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x38) + 100) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 100);
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x38));
      *(undefined2 *)(param_1 + 0x7e8) = 0x1e;
      *(undefined *)(param_1 + 0x7eb) = 0;
      *(char *)(param_1 + 0x7ea) = *(char *)(param_1 + 0x7ea) + '\x01';
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
      iVar4 = FUN_089c59d4();
      if (iVar4 == 0) {
        cVar2 = *(char *)(param_1 + 0x7ea);
      }
      else {
        uVar3 = FUN_089c59f0();
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
          iVar4 = FUN_089c59d4();
          if (iVar4 != 0) {
            uVar3 = FUN_089c59f0();
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
      iVar4 = FUN_089c59d4();
      if (iVar4 == 0) {
        bVar1 = *(byte *)(param_1 + 0x7eb);
      }
      else {
        uVar3 = FUN_089c59f0();
        FUN_089c6350(uVar3,0x2c00020,0,0);
        bVar1 = *(byte *)(param_1 + 0x7eb);
      }
      uVar5 = (uint)*(byte *)(param_1 + (uint)bVar1 + 0x7ec);
      FUN_089f4a90((float)(uVar5 / 5),(float)(uVar5 % 5),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x38));
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      *(undefined2 *)(param_1 + 0x7e8) = 0xf;
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
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
      *(char *)(param_1 + 0x7eb) = *(char *)(param_1 + 0x7eb) + '\x01';
      if (*(char *)(param_1 + 0x7eb) == *(char *)(param_1 + 0x7e4)) {
        *(undefined2 *)(param_1 + 0x7e8) = 0xf;
        *(char *)(param_1 + 0x7ea) = *(char *)(param_1 + 0x7ea) + '\x01';
      }
      else {
        *(undefined2 *)(param_1 + 0x7e8) = 0xf;
        *(undefined *)(param_1 + 0x7ea) = 4;
      }
      break;
    case 8:
      if (*(short *)(param_1 + 0x7e8) == 0) {
        *(char *)(param_1 + 0x7ea) = cVar2 + '\x01';
      }
      else {
        *(short *)(param_1 + 0x7e8) = *(short *)(param_1 + 0x7e8) + -1;
      }
      break;
    case 9:
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x88);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x88));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x88) + 0xbc) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x88) + 0x60) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 0x60);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x88) + 100) =
           *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 100) + 1.0;
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x88));
      iVar4 = FUN_089c59d4();
      if (iVar4 == 0) {
        cVar2 = *(char *)(param_1 + 0x7ea);
      }
      else {
        uVar3 = FUN_089c59f0();
        FUN_089c6350(uVar3,0x2c00021,0,0);
        cVar2 = *(char *)(param_1 + 0x7ea);
      }
      *(undefined2 *)(param_1 + 0x7e8) = 0;
      *(char *)(param_1 + 0x7ea) = cVar2 + '\x01';
      break;
    case 10:
      *(short *)(param_1 + 0x7e8) = *(short *)(param_1 + 0x7e8) + 1;
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x88);
      if (*(ushort *)(param_1 + 0x7e8) == 0x40) {
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
        *(undefined *)(param_1 + 0x7ea) = 0xb;
      }
      else if ((*(ushort *)(param_1 + 0x7e8) & 4) == 0) {
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      }
      else {
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
      }
    }
    return 0;
  }
  return 1;
}

