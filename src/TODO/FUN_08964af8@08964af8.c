#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08964af8(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  
  param_2 = param_2 & 0xff;
  FUN_089a5278();
  cVar4 = *(char *)(param_1 + 0x5025);
  *(undefined4 *)(param_1 + 0x4f64) = 0;
  iVar1 = FUN_0880d354();
  iVar3 = param_2 + 1;
  if (iVar1 != 0) {
    cVar4 = *(char *)(param_1 + *(int *)(param_1 + 0x52a0) + 0x5026);
  }
  if (cVar4 < '\x01') {
    if (cVar4 < '\0') {
      uVar2 = (uint)*(ushort *)(param_1 + 0x51a0);
    }
    else {
      FUN_089620bc(param_1,*(undefined4 *)
                            (*(int *)(param_1 + 0x1c) +
                            (*(ushort *)(param_1 + 0x51be) + param_2) * 4),param_2);
      FUN_089a535c(param_1 + (*(ushort *)(param_1 + 0x51be) + param_2) * 0x28 + 0x78);
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51be) + param_2) * 4) + 0x128)
           = 0x10;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51be) + param_2) * 4);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      FUN_089f46dc(*(undefined4 *)
                    (*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51be) + param_2) * 4));
      FUN_089a51fc(0x3f800000,0x3f800000,0,
                   *(undefined4 *)
                    (*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51be) + param_2) * 4));
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51be) + param_2) * 4) + 0xbc) =
           0x3f800000;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51be) + param_2) * 4);
      *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0xc0) = 0x3e99999a;
      *(undefined4 *)(iVar1 + 0xc4) = 0x3e99999a;
      *(undefined4 *)(iVar1 + 200) = 0x3e99999a;
      iVar1 = (*(ushort *)(param_1 + 0x51be) + param_2) * 4;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) =
           *(undefined4 *)(param_1 + iVar1 + 0x3b38);
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51be) + param_2) * 4) + 0x60) =
           *(undefined4 *)
            (*(int *)(*(int *)(param_1 + 0x1c) +
                     ((uint)*(ushort *)(param_1 + 0x51aa) + *(ushort *)(param_1 + 0x51ac) * param_2
                     + (int)*(char *)(param_1 + 0x5024)) * 4) + 0x60);
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51be) + param_2) * 4) + 100) =
           *(undefined4 *)
            (*(int *)(*(int *)(param_1 + 0x1c) +
                     ((uint)*(ushort *)(param_1 + 0x51aa) + *(ushort *)(param_1 + 0x51ac) * param_2
                     + (int)*(char *)(param_1 + 0x5024)) * 4) + 100);
      FUN_089a5794(*(undefined4 *)
                    (*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51be) + param_2) * 4),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x4fb4) * 4),
                   param_1 + *(int *)(param_1 + 0x4fb4) * 0x28 + 0x78);
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51a6) + param_2) * 4);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
      FUN_08960210(param_1,*(undefined4 *)
                            (*(int *)(param_1 + 0x1c) +
                            (*(ushort *)(param_1 + 0x519e) + param_2) * 4),0);
      FUN_089a522c(*(undefined4 *)
                    (*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x519e) + param_2) * 4),0);
      uVar2 = (uint)*(ushort *)(param_1 + 0x51a0);
    }
  }
  else if (cVar4 < '\x02') {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51be) + param_2) * 4);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    FUN_089a535c(param_1 + (*(ushort *)(param_1 + 0x51a6) + param_2) * 0x28 + 0x78);
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51a6) + param_2) * 4) + 0x128) =
         0x10;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51a6) + param_2) * 4);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    FUN_089f46dc(*(undefined4 *)
                  (*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51a6) + param_2) * 4));
    FUN_089a51fc(0x3f800000,0x3f800000,0,
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51a6) + param_2) * 4));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51a6) + param_2) * 4) + 0xbc) =
         0x3f800000;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51a6) + param_2) * 4);
    *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xc0) = 0x3e99999a;
    *(undefined4 *)(iVar1 + 0xc4) = 0x3e99999a;
    *(undefined4 *)(iVar1 + 200) = 0x3e99999a;
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51a6) + param_2) * 4) + 0x68) =
         0xc3480000;
    FUN_089a5794(*(undefined4 *)
                  (*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51a6) + param_2) * 4),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x4fb4) * 4),
                 param_1 + *(int *)(param_1 + 0x4fb4) * 0x28 + 0x78);
    FUN_08960210(param_1,*(undefined4 *)
                          (*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x519e) + param_2) * 4)
                 ,1);
    FUN_089a522c(*(undefined4 *)
                  (*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x519e) + param_2) * 4),1);
    uVar2 = (uint)*(ushort *)(param_1 + 0x51a0);
  }
  else {
    uVar2 = (uint)*(ushort *)(param_1 + 0x51a0);
  }
  uVar6 = (uint)*(ushort *)(param_1 + 0x519e) + uVar2 * param_2;
  iVar1 = uVar6 * 4;
  if (uVar6 < (uint)*(ushort *)(param_1 + 0x519e) + uVar2 * iVar3) {
    iVar5 = param_1 + iVar1;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) =
           *(undefined4 *)(iVar5 + 0x3b38);
      uVar6 = uVar6 + 1;
      iVar1 = iVar1 + 4;
      iVar5 = iVar5 + 4;
    } while ((int)uVar6 <
             (int)((uint)*(ushort *)(param_1 + 0x519e) + (uint)*(ushort *)(param_1 + 0x51a0) * iVar3
                  ));
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x51a2) + *(ushort *)(param_1 + 0x51a4) * param_2;
  iVar1 = uVar2 * 4;
  if (uVar2 < (uint)*(ushort *)(param_1 + 0x51a2) + (uint)*(ushort *)(param_1 + 0x51a4) * iVar3) {
    iVar5 = param_1 + iVar1;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) =
           *(undefined4 *)(iVar5 + 0x3b38);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 4;
      iVar5 = iVar5 + 4;
    } while ((int)uVar2 <
             (int)((uint)*(ushort *)(param_1 + 0x51a2) + (uint)*(ushort *)(param_1 + 0x51a4) * iVar3
                  ));
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x51aa) + *(ushort *)(param_1 + 0x51ac) * param_2;
  iVar1 = uVar2 * 4;
  if (uVar2 < (uint)*(ushort *)(param_1 + 0x51aa) + (uint)*(ushort *)(param_1 + 0x51ac) * iVar3) {
    iVar5 = param_1 + iVar1;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) =
           *(undefined4 *)(iVar5 + 0x3b38);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 4;
      iVar5 = iVar5 + 4;
    } while ((int)uVar2 <
             (int)((uint)*(ushort *)(param_1 + 0x51aa) + (uint)*(ushort *)(param_1 + 0x51ac) * iVar3
                  ));
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x51ae) + *(ushort *)(param_1 + 0x51b0) * param_2;
  iVar1 = uVar2 * 4;
  if (uVar2 < (uint)*(ushort *)(param_1 + 0x51ae) + (uint)*(ushort *)(param_1 + 0x51b0) * iVar3) {
    iVar5 = param_1 + iVar1;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) =
           *(undefined4 *)(iVar5 + 0x3b38);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 4;
      iVar5 = iVar5 + 4;
    } while ((int)uVar2 <
             (int)((uint)*(ushort *)(param_1 + 0x51ae) + (uint)*(ushort *)(param_1 + 0x51b0) * iVar3
                  ));
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x51ba) + *(ushort *)(param_1 + 0x51bc) * param_2;
  iVar1 = uVar2 * 4;
  if (uVar2 < (uint)*(ushort *)(param_1 + 0x51ba) + (uint)*(ushort *)(param_1 + 0x51bc) * iVar3) {
    iVar5 = param_1 + iVar1;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) =
           *(undefined4 *)(iVar5 + 0x3b38);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 4;
      iVar5 = iVar5 + 4;
    } while ((int)uVar2 <
             (int)((uint)*(ushort *)(param_1 + 0x51ba) + (uint)*(ushort *)(param_1 + 0x51bc) * iVar3
                  ));
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x51ce) + *(ushort *)(param_1 + 0x51d0) * param_2;
  iVar1 = uVar2 * 4;
  if (uVar2 < (uint)*(ushort *)(param_1 + 0x51ce) + (uint)*(ushort *)(param_1 + 0x51d0) * iVar3) {
    iVar5 = param_1 + iVar1;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) =
           *(undefined4 *)(iVar5 + 0x3b38);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 4;
      iVar5 = iVar5 + 4;
    } while ((int)uVar2 <
             (int)((uint)*(ushort *)(param_1 + 0x51ce) + (uint)*(ushort *)(param_1 + 0x51d0) * iVar3
                  ));
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x51de) + *(ushort *)(param_1 + 0x51e0) * param_2;
  iVar1 = uVar2 * 4;
  if (uVar2 < (uint)*(ushort *)(param_1 + 0x51de) + (uint)*(ushort *)(param_1 + 0x51e0) * iVar3) {
    iVar5 = param_1 + iVar1;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) =
           *(undefined4 *)(iVar5 + 0x3b38);
      FUN_08962100(param_1,param_2,
                   uVar2 - ((uint)*(ushort *)(param_1 + 0x51de) +
                           *(ushort *)(param_1 + 0x51e0) * param_2) & 0xff);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 4;
      iVar5 = iVar5 + 4;
    } while ((int)uVar2 <
             (int)((uint)*(ushort *)(param_1 + 0x51de) + (uint)*(ushort *)(param_1 + 0x51e0) * iVar3
                  ));
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x51e6) + *(ushort *)(param_1 + 0x51e8) * param_2;
  iVar1 = uVar2 * 4;
  if (uVar2 < (uint)*(ushort *)(param_1 + 0x51e6) + (uint)*(ushort *)(param_1 + 0x51e8) * iVar3) {
    iVar5 = param_1 + iVar1;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) =
           *(undefined4 *)(iVar5 + 0x3b38);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 4;
      iVar5 = iVar5 + 4;
    } while ((int)uVar2 <
             (int)((uint)*(ushort *)(param_1 + 0x51e6) + (uint)*(ushort *)(param_1 + 0x51e8) * iVar3
                  ));
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x51fa) + *(ushort *)(param_1 + 0x51fc) * param_2;
  iVar1 = uVar2 * 4;
  if (uVar2 < (uint)*(ushort *)(param_1 + 0x51fa) + (uint)*(ushort *)(param_1 + 0x51fc) * iVar3) {
    iVar5 = param_1 + iVar1;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) =
           *(undefined4 *)(iVar5 + 0x3b38);
      FUN_089624c8(param_1,param_2,
                   uVar2 - ((uint)*(ushort *)(param_1 + 0x51fa) +
                           *(ushort *)(param_1 + 0x51fc) * param_2) & 0xff);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 4;
      iVar5 = iVar5 + 4;
    } while ((int)uVar2 <
             (int)((uint)*(ushort *)(param_1 + 0x51fa) + (uint)*(ushort *)(param_1 + 0x51fc) * iVar3
                  ));
  }
  return;
}

