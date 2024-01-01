#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0883eb30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  float local_d0;
  float local_cc;
  undefined4 local_c0;
  float local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined auStack_b0 [8];
  float local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float local_90;
  float local_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined auStack_70 [8];
  float local_68;
  
  if (*(int *)(param_1 + 0xa8c) == 0) {
LAB_0883ec20:
    iVar4 = *(int *)(param_1 + 0x14);
  }
  else {
    if (**(int **)(param_1 + 0xa8c) == 0) {
      iVar4 = *(int *)(param_1 + 0xa8c);
    }
    else if (*(char *)(param_1 + 0xae1) == '\0') {
      FUN_089f8720(**(undefined4 **)(param_1 + 0xa8c));
      iVar4 = *(int *)(param_1 + 0xa8c);
    }
    else {
      iVar4 = *(int *)(param_1 + 0xa8c);
    }
    if (*(int *)(iVar4 + 4) == 0) {
      iVar4 = *(int *)(param_1 + 0xa8c);
    }
    else if (*(char *)(param_1 + 0xae0) == '\0') {
      FUN_089f8720(*(undefined4 *)(*(int *)(param_1 + 0xa8c) + 4));
      iVar4 = *(int *)(param_1 + 0xa8c);
    }
    else {
      iVar4 = *(int *)(param_1 + 0xa8c);
    }
    if (*(int *)(iVar4 + 8) == 0) {
      iVar4 = *(int *)(param_1 + 0xa8c);
    }
    else if (*(char *)(param_1 + 0xae0) == '\0') {
      FUN_089f8720(*(undefined4 *)(*(int *)(param_1 + 0xa8c) + 8));
      iVar4 = *(int *)(param_1 + 0xa8c);
    }
    else {
      iVar4 = *(int *)(param_1 + 0xa8c);
    }
    if (*(int *)(iVar4 + 0xc) == 0) {
      iVar4 = *(int *)(param_1 + 0x14);
    }
    else {
      if (*(char *)(param_1 + 0xae0) == '\0') {
        FUN_089f8720(*(undefined4 *)(*(int *)(param_1 + 0xa8c) + 0xc));
        goto LAB_0883ec20;
      }
      iVar4 = *(int *)(param_1 + 0x14);
    }
  }
  if (iVar4 == 0) {
    return;
  }
  iVar7 = 0;
  iVar4 = 0;
  do {
    if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
      iVar1 = FUN_0883326c(param_1,iVar7);
    }
    else {
      iVar1 = FUN_088304d8(param_1,iVar7);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x2f0);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x2fc);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    }
    else {
      if (*(char *)(iVar1 + 0x4c1) == '\0') {
        local_c0 = *(undefined4 *)(iVar1 + 0x20);
        uStack_b8 = *(undefined4 *)(iVar1 + 0x28);
        uStack_b4 = *(undefined4 *)(iVar1 + 0x2c);
        local_bc = *(float *)(iVar1 + 0x24) + *(float *)(*(int *)(iVar1 + 0x4bc) + 4);
        FUN_089e3584(DAT_08ac5c90,&local_d0,&local_c0);
        FUN_089beef4(auStack_b0);
        if (local_a8 <= -3.0) {
          iVar1 = *(int *)(param_1 + 0x14);
        }
        else {
          iVar2 = FUN_0883339c(param_1,iVar1);
          if (iVar2 == 0) {
            iVar2 = *(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x2f0);
            *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
            *(float *)(*(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x2f0) + 0x60) =
                 (float)(int)(local_d0 - 64.0);
            *(float *)(*(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x2f0) + 100) =
                 (float)(int)(local_cc - 30.0);
            iVar2 = *(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x2fc);
            *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
            *(float *)(*(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x2fc) + 0x60) =
                 (float)(int)(local_d0 - 12.0);
            *(float *)(*(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x2fc) + 100) =
                 (float)(int)(local_cc - 8.0);
            iVar2 = (**(code **)(*(int *)(iVar1 + 0x14) + 0x54))
                              (iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x50));
            if ((iVar2 != 0) && (*(int *)(iVar1 + 0x554) != 0)) {
              *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x2f0) + 0xbc) =
                   *(undefined4 *)(*(int *)(iVar1 + 0x554) + 0x84);
              *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x2fc) + 0xbc) =
                   *(undefined4 *)(*(int *)(iVar1 + 0x554) + 0x84);
            }
            goto LAB_0883eec8;
          }
          iVar1 = *(int *)(param_1 + 0x14);
        }
        iVar1 = *(int *)(iVar1 + iVar4 + 0x2f0);
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
        iVar1 = *(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x2fc);
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x2f0);
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
        iVar1 = *(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x2fc);
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
      }
LAB_0883eec8:
      if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x2fc);
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
      }
    }
    iVar7 = iVar7 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar7 < 3);
  iVar1 = 0;
  iVar7 = 0;
  iVar4 = 0;
  do {
    iVar2 = FUN_088b2fa4(iVar1);
    if (iVar2 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x1e0);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
    }
    else {
      local_a0 = *(undefined4 *)(iVar2 + 0x2a0);
      uStack_9c = *(undefined4 *)(iVar2 + 0x2a4);
      uStack_98 = *(undefined4 *)(iVar2 + 0x2a8);
      uStack_94 = *(undefined4 *)(iVar2 + 0x2ac);
      local_80 = local_a0;
      uStack_7c = uStack_9c;
      uStack_78 = uStack_98;
      uStack_74 = uStack_94;
      FUN_089e3584(DAT_08ac5c90,&local_90,&local_80);
      FUN_089beef4(auStack_70);
      if (-3.0 < local_68) {
        iVar5 = FUN_0882e4c8(param_1);
        if (iVar5 != 0) {
          iVar5 = *(int *)(param_1 + 0x14);
          goto LAB_0883f054;
        }
        iVar5 = *(int *)(*(int *)(param_1 + 0x14) + iVar7 + 0x3ec);
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
        *(float *)(*(int *)(*(int *)(param_1 + 0x14) + iVar7 + 0x3ec) + 0x60) =
             (float)(int)(local_90 - 64.0);
        *(float *)(*(int *)(*(int *)(param_1 + 0x14) + iVar7 + 0x3ec) + 100) =
             (float)(int)(local_8c - 30.0);
        if (*(int *)(iVar2 + 0x290) != 0) {
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar7 + 0x3ec) + 0xbc) =
               *(undefined4 *)(*(int *)(iVar2 + 0x290) + 0x84);
          goto LAB_0883f068;
        }
        iVar5 = *(int *)(param_1 + 0x14);
      }
      else {
        iVar5 = *(int *)(param_1 + 0x14);
LAB_0883f054:
        iVar5 = *(int *)(iVar5 + iVar7 + 0x3ec);
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
LAB_0883f068:
        iVar5 = *(int *)(param_1 + 0x14);
      }
      iVar5 = *(int *)(iVar5 + iVar4 + 0x1e0);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
      if (*(int *)(iVar2 + 0x290) == 0) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x1e0) + 0xbc) = 0;
      }
      else if ((*(byte *)(iVar2 + 0x281) | DAT_08aba77d) == 0) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x1e0) + 0xbc) = 0x3f800000;
      }
      else {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar4 + 0x1e0) + 0xbc) =
             *(undefined4 *)(*(int *)(iVar2 + 0x290) + 0x84);
      }
    }
    iVar1 = iVar1 + 1;
    iVar7 = iVar7 + 4;
    iVar4 = iVar4 + 8;
  } while (iVar1 < 3);
  uVar3 = FUN_089f2178(0x40400000);
  FUN_089f5474(*(undefined4 *)(param_1 + 0x10),8);
  FUN_089f5084(*(undefined4 *)(param_1 + 0x10),uVar3);
  uVar3 = FUN_089f2178(0x42a00000);
  FUN_089f5474(*(undefined4 *)(param_1 + 0x10),0x40);
  FUN_089f5084(*(undefined4 *)(param_1 + 0x10),uVar3);
  uVar3 = FUN_089f2178(0x42c80000);
  FUN_089f5474(*(undefined4 *)(param_1 + 0x10),1);
  FUN_089f5084(*(undefined4 *)(param_1 + 0x10),uVar3);
  uVar3 = FUN_089f2178(0x42d20000);
  FUN_089f5474(*(undefined4 *)(param_1 + 0x10),0x10);
  FUN_089f5084(*(undefined4 *)(param_1 + 0x10),uVar3);
  uVar3 = FUN_089f2178(0x42e60000);
  FUN_089f5474(*(undefined4 *)(param_1 + 0x10),0x20);
  FUN_089f5084(*(undefined4 *)(param_1 + 0x10),uVar3);
  if (*(char *)(param_1 + 0xae4) != '\0') {
    FUN_089f31d4(0x43700000,0x43080000,0x42b40000,0x424c0000,0x3f000000,uVar3,&DAT_08b00190);
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    iVar4 = *(int *)(param_1 + 0x4c);
  }
  else {
    uVar3 = FUN_089f2178(0x42e60000);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x44),uVar3);
    iVar4 = *(int *)(param_1 + 0x4c);
  }
  if (iVar4 != 0) {
    uVar3 = FUN_089f2178(0x42d40000);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x4c),uVar3);
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar3 = FUN_089f2178(0x42fa0000);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x54),uVar3);
    if (DAT_08aba77d == 0) {
      iVar4 = *(int *)(param_1 + 0x5c);
      goto LAB_0883f2b0;
    }
    if (*(int *)(param_1 + 0x68c) == 0) {
      iVar4 = *(int *)(param_1 + 0x5c);
      goto LAB_0883f2b0;
    }
    uVar6 = *(undefined4 *)(param_1 + 0x68c);
    uVar3 = FUN_089f2178(*(undefined4 *)(param_1 + 0x6a0));
    FUN_089f5084(uVar6,uVar3);
  }
  iVar4 = *(int *)(param_1 + 0x5c);
LAB_0883f2b0:
  if (iVar4 != 0) {
    uVar3 = FUN_089f2178(0x43020000);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x5c),uVar3);
  }
  FUN_0883a50c(param_1);
  return;
}

