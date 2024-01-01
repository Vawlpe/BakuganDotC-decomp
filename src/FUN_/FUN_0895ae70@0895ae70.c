#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895ae70(int param_1)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  FUN_089a5278();
  *(undefined4 *)(param_1 + 0x4f64) = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516c) * 4);
  if (*(char *)(param_1 + 0x75) == '\0') {
    FUN_0895ade8(param_1,iVar2,*(undefined *)(param_1 + 0x4cdb));
    FUN_089a535c(param_1 + (uint)*(ushort *)(param_1 + 0x516c) * 0x28 + 0x78);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516c) * 4);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516c) * 4)
                );
    FUN_089a51fc(0x3f800000,0x3f800000,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516c) * 4)
                );
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516c) * 4) + 0xbc) =
         0x3f800000;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516c) * 4);
    *(undefined4 *)(iVar2 + 0xc0) = 0x3e99999a;
    *(undefined4 *)(iVar2 + 0xc4) = 0x3e99999a;
    *(undefined4 *)(iVar2 + 200) = 0x3e99999a;
    *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516c) * 4) + 0x60) =
         *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x1c) +
                   ((uint)*(ushort *)(param_1 + 0x5162) + (int)*(char *)(param_1 + 0x74)) * 4) +
          0x60);
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516c) * 4) + 100) =
         *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x1c) +
                   ((uint)*(ushort *)(param_1 + 0x5162) + (int)*(char *)(param_1 + 0x74)) * 4) + 100
          );
    iVar2 = (uint)*(ushort *)(param_1 + 0x516c) * 4;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x68) =
         *(undefined4 *)(param_1 + iVar2 + 0x3b38);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x517a) * 4);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
    FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516c) * 4)
                 ,*(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x4fb4) * 4),
                 param_1 + *(int *)(param_1 + 0x4fb4) * 0x28 + 0x78);
    cVar3 = *(char *)(param_1 + 0x75);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516e) * 4);
  }
  else {
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
    FUN_0895ae2c(param_1,*(undefined4 *)
                          (*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x517a) * 4),
                 *(undefined *)(param_1 + 0x4cdb));
    FUN_089a535c(param_1 + (uint)*(ushort *)(param_1 + 0x517a) * 0x28 + 0x78);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x517a) * 4);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x517a) * 4)
                );
    FUN_089a51fc(0x3f800000,0x3f800000,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x517a) * 4)
                );
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x517a) * 4) + 0xbc) =
         0x3f800000;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x517a) * 4);
    *(undefined4 *)(iVar2 + 0xc0) = 0x3e99999a;
    *(undefined4 *)(iVar2 + 0xc4) = 0x3e99999a;
    *(undefined4 *)(iVar2 + 200) = 0x3e99999a;
    *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
    iVar2 = (uint)*(ushort *)(param_1 + 0x517a) * 4;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x68) =
         *(undefined4 *)(param_1 + iVar2 + 0x3b38);
    FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x517a) * 4)
                 ,*(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x4fb4) * 4),
                 param_1 + *(int *)(param_1 + 0x4fb4) * 0x28 + 0x78);
    cVar3 = *(char *)(param_1 + 0x75);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516e) * 4);
  }
  if (cVar3 == '\0') {
    FUN_089f4a90(0,(float)(uint)*(byte *)(param_1 + *(char *)(param_1 + 0x4cdb) + 0x4f74));
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516e) * 4);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516e) * 4)
                );
    FUN_089a51fc(0x3f800000,0x3f800000,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516e) * 4)
                );
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516e) * 4) + 0xbc) =
         0x3f800000;
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516e) * 4) + 0x60) =
         *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x1c) +
                   ((uint)*(ushort *)(param_1 + 0x5162) + (int)*(char *)(param_1 + 0x74)) * 4) +
          0x60);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516e) * 4);
    *(float *)(iVar2 + 100) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) +
                            ((uint)*(ushort *)(param_1 + 0x5162) + (int)*(char *)(param_1 + 0x74)) *
                            4) + 100) - *(float *)(param_1 + 0x5158) * *(float *)(iVar2 + 0x94);
    iVar2 = (uint)*(ushort *)(param_1 + 0x516e) * 4;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x68) =
         *(undefined4 *)(param_1 + iVar2 + 0x3b38);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x517c) * 4);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
    uVar1 = *(ushort *)(param_1 + 0x5162);
    iVar2 = *(int *)(param_1 + 0x1c);
  }
  else {
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
    FUN_089f4a90(0,(float)(uint)*(byte *)(param_1 + *(char *)(param_1 + 0x4cdb) + 0x4f74),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x517c) * 4)
                );
    FUN_089a535c(param_1 + (uint)*(ushort *)(param_1 + 0x517c) * 0x28 + 0x78);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x517c) * 4);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x517c) * 4)
                );
    FUN_089a51fc(0x3f800000,0x3f800000,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x517c) * 4)
                );
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x517c) * 4) + 0xbc) =
         0x3f800000;
    iVar2 = (uint)*(ushort *)(param_1 + 0x517c) * 4;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x68) =
         *(undefined4 *)(param_1 + iVar2 + 0x3b38);
    uVar1 = *(ushort *)(param_1 + 0x5162);
    iVar2 = *(int *)(param_1 + 0x1c);
  }
  uVar4 = (uint)uVar1;
  iVar6 = uVar4 * 4;
  if (uVar4 < uVar4 + 0x14) {
    iVar5 = param_1 + iVar6;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(iVar2 + iVar6));
      uVar4 = uVar4 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x68) =
           *(undefined4 *)(iVar5 + 0x3b38);
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 4;
      iVar2 = *(int *)(param_1 + 0x1c);
    } while ((int)uVar4 < (int)(*(ushort *)(param_1 + 0x5162) + 0x14));
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0x5164);
  iVar6 = uVar4 * 4;
  if (uVar4 < uVar4 + 0x14) {
    iVar5 = param_1 + iVar6;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(iVar2 + iVar6));
      uVar4 = uVar4 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x68) =
           *(undefined4 *)(iVar5 + 0x3b38);
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 4;
      iVar2 = *(int *)(param_1 + 0x1c);
    } while ((int)uVar4 < (int)(*(ushort *)(param_1 + 0x5164) + 0x14));
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0x5166);
  iVar6 = uVar4 * 4;
  if (uVar4 < uVar4 + 0x14) {
    iVar5 = param_1 + iVar6;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(iVar2 + iVar6));
      uVar4 = uVar4 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x68) =
           *(undefined4 *)(iVar5 + 0x3b38);
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 4;
      iVar2 = *(int *)(param_1 + 0x1c);
    } while ((int)uVar4 < (int)(*(ushort *)(param_1 + 0x5166) + 0x14));
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0x51f6);
  iVar6 = uVar4 * 4;
  if (uVar4 < uVar4 + *(ushort *)(param_1 + 0x51f8)) {
    iVar5 = param_1 + iVar6;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(iVar2 + iVar6));
      uVar4 = uVar4 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x68) =
           *(undefined4 *)(iVar5 + 0x3b38);
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 4;
      iVar2 = *(int *)(param_1 + 0x1c);
    } while ((int)uVar4 <
             (int)((uint)*(ushort *)(param_1 + 0x51f6) + (uint)*(ushort *)(param_1 + 0x51f8)));
  }
  FUN_089a51fc(0x3f800000,0x3f800000,0,
               *(undefined4 *)(iVar2 + (uint)*(ushort *)(param_1 + 0x5168) * 4));
  iVar2 = (uint)*(ushort *)(param_1 + 0x5168) * 4;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x68) =
       *(undefined4 *)(param_1 + iVar2 + 0x3b38);
  FUN_089a51fc(0x3f800000,0x3f800000,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516a) * 4));
  iVar2 = (uint)*(ushort *)(param_1 + 0x516a) * 4;
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x68) =
       *(float *)(param_1 + iVar2 + 0x3b38) - 1.0;
  return;
}

