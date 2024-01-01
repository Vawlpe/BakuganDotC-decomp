#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893601c(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == '\0') {
    iVar6 = 0xe;
    iVar5 = 0x38;
    iVar4 = param_1 + 0x2a8;
    iVar3 = param_1 + 0x70;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x128) = 2;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x60) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x38) + 0x60);
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(iVar3 + 0xac8) -
                   *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x38) + 0x60),0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,7);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0x12);
    iVar6 = 0x2a;
    iVar5 = 0xa8;
    iVar4 = param_1 + 0x708;
    iVar3 = param_1 + 0x150;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      if (*(char *)(param_1 + iVar6 + 0x19ce) == -1) {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xa8);
      }
      else {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x128) = 2;
        FUN_08932898(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),
                     *(undefined *)(param_1 + iVar6 + 0x19ce));
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xa8);
      }
      *(undefined4 *)(iVar2 + 0x60) = *(undefined4 *)(iVar1 + 0x60);
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(iVar3 + 0xac8) -
                   *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xa8) + 0x60),0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,7);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0x2e);
    iVar6 = 0x22;
    iVar5 = 0x88;
    iVar4 = param_1 + 0x5c8;
    iVar3 = param_1 + 0x110;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      if (*(char *)(param_1 + iVar6 + 0x19de) == '\0') {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x88);
      }
      else {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x128) = 2;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x88);
      }
      *(undefined4 *)(iVar2 + 0x60) = *(undefined4 *)(iVar1 + 0x60);
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(iVar3 + 0xac8) -
                   *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x88) + 0x60),0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,7);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0x26);
    iVar6 = 0x32;
    iVar5 = 200;
    iVar4 = param_1 + 0x848;
    iVar3 = param_1 + 400;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      if ((*(byte *)(param_1 + iVar6 + 0x19ca) & 1) == 0) {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 200);
      }
      else {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x128) = 2;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 200);
      }
      *(undefined4 *)(iVar2 + 0x60) = *(undefined4 *)(iVar1 + 0x60);
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(iVar3 + 0xac8) -
                   *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 200) + 0x60),0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,7);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0x36);
    iVar6 = 0x18;
    iVar5 = 0x60;
    iVar4 = param_1 + 0x438;
    iVar3 = param_1 + 0xc0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      if ((*(byte *)(param_1 + iVar6 + 0x19e4) & 1) == 0) {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x60);
      }
      else {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x128) = 2;
        FUN_089a56a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),2);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x60);
      }
      *(undefined4 *)(iVar2 + 0x60) = *(undefined4 *)(iVar1 + 0x60);
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(iVar3 + 0xac8) -
                   *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x60) + 0x60),0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,7);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0x1c);
    iVar6 = 10;
    iVar5 = 0x28;
    iVar4 = param_1 + 0x208;
    iVar3 = param_1 + 0x50;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      if ((*(byte *)(param_1 + iVar6 + 0x19f2) & 1) == 0) {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x28);
      }
      else {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x128) = 2;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x28);
      }
      *(undefined4 *)(iVar2 + 0x60) = *(undefined4 *)(iVar1 + 0x60);
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(iVar3 + 0xac8) -
                   *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x28) + 0x60),0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,7);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0xe);
    iVar6 = 0x14;
    iVar5 = 0x50;
    iVar4 = param_1 + 0x398;
    iVar3 = param_1 + 0xa0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      if (*(char *)(param_1 + iVar6 + 0x19e4) == -1) {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x128) = 2;
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x50);
      }
      else {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x50);
      }
      *(undefined4 *)(iVar1 + 0x60) = *(undefined4 *)(iVar2 + 0x60);
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(iVar3 + 0xac8) -
                   *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x50) + 0x60),0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,7);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0x18);
  }
  else {
    iVar6 = 0xe;
    iVar5 = 0x38;
    iVar4 = param_1 + 0x2a8;
    iVar3 = param_1 + 0x70;
    do {
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x38) + 0x60) -
                   *(float *)(iVar3 + 0xac8),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,7);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0x12);
    iVar6 = 0x2a;
    iVar5 = 0xa8;
    iVar4 = param_1 + 0x708;
    iVar3 = param_1 + 0x150;
    do {
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xa8) + 0x60) -
                   *(float *)(iVar3 + 0xac8),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,7);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0x2e);
    iVar6 = 0x22;
    iVar5 = 0x88;
    iVar4 = param_1 + 0x5c8;
    iVar3 = param_1 + 0x110;
    do {
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x88) + 0x60) -
                   *(float *)(iVar3 + 0xac8),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,7);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0x26);
    iVar6 = 0x32;
    iVar5 = 200;
    iVar4 = param_1 + 0x848;
    iVar3 = param_1 + 400;
    do {
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 200) + 0x60) -
                   *(float *)(iVar3 + 0xac8),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,7);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0x36);
    iVar6 = 0x18;
    iVar5 = 0x60;
    iVar4 = param_1 + 0x438;
    iVar3 = param_1 + 0xc0;
    do {
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x60) + 0x60) -
                   *(float *)(iVar3 + 0xac8),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,7);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0x1c);
    iVar6 = 10;
    iVar5 = 0x28;
    iVar4 = param_1 + 0x208;
    iVar3 = param_1 + 0x50;
    do {
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x28) + 0x60) -
                   *(float *)(iVar3 + 0xac8),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,7);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 0xe);
    iVar3 = 0x14;
    iVar4 = 0x50;
    iVar5 = param_1 + 0x398;
    iVar6 = param_1 + 0xa0;
    do {
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x50) + 0x60) -
                   *(float *)(iVar6 + 0xac8),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,7);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 0x28;
      iVar6 = iVar6 + 8;
    } while (iVar3 < 0x18);
  }
  return;
}

