#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896acb8(int param_1,uint param_2,char param_3)

{
  char cVar1;
  undefined uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  param_2 = param_2 & 0xff;
  FUN_089a5278();
  *(undefined4 *)(param_1 + 0x2a54) = 0;
  if (param_2 == 0) {
    uVar6 = 0;
    if (*(char *)(param_1 + 0x2a59) != '\0') {
      cVar1 = *(char *)(param_1 + 0x74);
      while( true ) {
        bVar4 = false;
        if (uVar6 == (int)cVar1) {
          if (param_3 == '\0') {
            iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x2b68) * 4);
            *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
          }
          else {
            FUN_089a535c(param_1 + (*(byte *)(param_1 + 0x2b72) + uVar6) * 0x28 + 0x7c);
            iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + (*(byte *)(param_1 + 0x2b72) + uVar6) * 4);
            *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
            FUN_089f46dc(*(undefined4 *)
                          (*(int *)(param_1 + 0x1c) + (*(byte *)(param_1 + 0x2b72) + uVar6) * 4));
            FUN_089a51fc(0x3f800000,0x3f800000,0,
                         *(undefined4 *)
                          (*(int *)(param_1 + 0x1c) + (*(byte *)(param_1 + 0x2b72) + uVar6) * 4));
            *(undefined4 *)
             (*(int *)(*(int *)(param_1 + 0x1c) + (*(byte *)(param_1 + 0x2b72) + uVar6) * 4) + 0xbc)
                 = 0x3f800000;
            iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + (*(byte *)(param_1 + 0x2b72) + uVar6) * 4);
            *(undefined4 *)(iVar5 + 0xc0) = 0x3e99999a;
            *(undefined4 *)(iVar5 + 0xc4) = 0x3e99999a;
            *(undefined4 *)(iVar5 + 200) = 0x3e99999a;
            *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
            iVar5 = (*(byte *)(param_1 + 0x2b72) + uVar6) * 4;
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x68) =
                 *(undefined4 *)(param_1 + iVar5 + 0x25fc);
            FUN_08969fe0(param_1,*(undefined4 *)
                                  (*(int *)(param_1 + 0x1c) +
                                  (*(byte *)(param_1 + 0x2b74) + uVar6) * 4),1,uVar6 & 0xff);
            FUN_089a51fc(0x3f800000,0x3f800000,0,
                         *(undefined4 *)
                          (*(int *)(param_1 + 0x1c) + (*(byte *)(param_1 + 0x2b74) + uVar6) * 4));
            iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + (*(byte *)(param_1 + 0x2b74) + uVar6) * 4);
            *(undefined4 *)(iVar5 + 0xc0) = 0x3e99999a;
            *(undefined4 *)(iVar5 + 0xc4) = 0x3e99999a;
            *(undefined4 *)(iVar5 + 200) = 0x3e99999a;
            *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
            iVar5 = (*(byte *)(param_1 + 0x2b74) + uVar6) * 4;
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x68) =
                 *(undefined4 *)(param_1 + iVar5 + 0x25fc);
            FUN_089a51fc(0x3f800000,0x3f800000,0,
                         *(undefined4 *)
                          (*(int *)(param_1 + 0x1c) + (*(byte *)(param_1 + 0x2b76) + uVar6) * 4));
            iVar5 = (*(byte *)(param_1 + 0x2b76) + uVar6) * 4;
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x68) =
                 *(undefined4 *)(param_1 + iVar5 + 0x25fc);
            FUN_089a5794(*(undefined4 *)
                          (*(int *)(param_1 + 0x1c) + (*(byte *)(param_1 + 0x2b72) + uVar6) * 4),
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x2b68) * 4),
                         param_1 + *(int *)(param_1 + 0x2b68) * 0x28 + 0x7c);
            bVar4 = true;
          }
        }
        if (bVar4) {
          bVar3 = *(byte *)(param_1 + 0x2a59);
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + (*(byte *)(param_1 + 0x2b72) + uVar6) * 4);
          *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
          FUN_08969fe0(param_1,*(undefined4 *)
                                (*(int *)(param_1 + 0x1c) +
                                (*(byte *)(param_1 + 0x2b74) + uVar6) * 4),0,uVar6 & 0xff);
          FUN_089a51fc(0x3f800000,0x3f800000,0,
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c) + (*(byte *)(param_1 + 0x2b74) + uVar6) * 4));
          iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + (*(byte *)(param_1 + 0x2b74) + uVar6) * 4);
          *(undefined4 *)(iVar5 + 0xc0) = 0;
          *(undefined4 *)(iVar5 + 0xc4) = 0;
          *(undefined4 *)(iVar5 + 200) = 0;
          *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
          iVar5 = (*(byte *)(param_1 + 0x2b74) + uVar6) * 4;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x68) =
               *(undefined4 *)(param_1 + iVar5 + 0x25fc);
          FUN_089a51fc(0x3f800000,0x3f800000,0,
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x1c) + (*(byte *)(param_1 + 0x2b76) + uVar6) * 4));
          iVar5 = (*(byte *)(param_1 + 0x2b76) + uVar6) * 4;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x68) =
               *(undefined4 *)(param_1 + iVar5 + 0x25fc);
          bVar3 = *(byte *)(param_1 + 0x2a59);
        }
        uVar6 = uVar6 + 1;
        if ((int)(uint)bVar3 <= (int)uVar6) break;
        cVar1 = *(char *)(param_1 + 0x74);
      }
    }
  }
  else if (param_2 < 2) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) +
                    ((uint)*(byte *)(param_1 + 0x2b82) + (int)*(char *)(param_1 + 0x29be)) * 4);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) +
                    ((uint)*(byte *)(param_1 + 0x2b84) + (int)*(char *)(param_1 + 0x29be)) * 4);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
    if (param_3 == '\0') {
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x2b90) * 4);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
      FUN_0896a2ec(0x3f000000,param_1,0,*(undefined *)(param_1 + 0x29be));
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x2b68) * 4);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) +
                      ((uint)*(byte *)(param_1 + 0x2b8a) + *(char *)(param_1 + 0x29be) * 2) * 4);
    }
    else {
      FUN_089a535c(param_1 + (uint)*(byte *)(param_1 + 0x2b90) * 0x28 + 0x7c);
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x2b90) * 4);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
      FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x2b90) * 4)
                  );
      FUN_089a51fc(0x3f800000,0x3f800000,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x2b90) * 4)
                  );
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x2b90) * 4) + 0xbc) =
           0x3f800000;
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x2b90) * 4);
      *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0xc0) = 0x3e99999a;
      *(undefined4 *)(iVar5 + 0xc4) = 0x3e99999a;
      *(undefined4 *)(iVar5 + 200) = 0x3e99999a;
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x2b90) * 4) + 0x60) =
           *(undefined4 *)
            (*(int *)(*(int *)(param_1 + 0x1c) +
                     ((uint)*(byte *)(param_1 + 0x2b7c) + *(char *)(param_1 + 0x29be) * 4 +
                     (int)*(char *)(param_1 + param_2 + 0x74)) * 4) + 0x60);
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x2b90) * 4) + 100) =
           *(undefined4 *)
            (*(int *)(*(int *)(param_1 + 0x1c) +
                     ((uint)*(byte *)(param_1 + 0x2b7c) + *(char *)(param_1 + 0x29be) * 4 +
                     (int)*(char *)(param_1 + param_2 + 0x74)) * 4) + 100);
      iVar5 = (uint)*(byte *)(param_1 + 0x2b90) * 4;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x68) =
           *(undefined4 *)(param_1 + iVar5 + 0x25fc);
      FUN_0896a2ec(0x3f000000,param_1,1,*(undefined *)(param_1 + 0x29be));
      FUN_0896a478(param_1,*(undefined *)(param_1 + 0x29be));
      FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x2b90) * 4)
                   ,*(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x2b68) * 4),
                   param_1 + *(int *)(param_1 + 0x2b68) * 0x28 + 0x7c);
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) +
                      ((uint)*(byte *)(param_1 + 0x2b8a) + *(char *)(param_1 + 0x29be) * 2) * 4);
    }
    *(undefined4 *)(iVar5 + 0xbc) = 0x3f800000;
    FUN_0896a56c(param_1);
    FUN_0896a76c(param_1);
    FUN_0896a8c8(param_1);
    FUN_0896aa28(param_1);
    FUN_0896ab84(param_1);
  }
  else if (param_2 < 3) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) +
                    ((uint)*(byte *)(param_1 + 0x2b82) + (int)*(char *)(param_1 + 0x29be)) * 4);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) +
                    ((uint)*(byte *)(param_1 + 0x2b84) + (int)*(char *)(param_1 + 0x29be)) * 4);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) +
              ((uint)*(byte *)(param_1 + 0x2b8a) + *(char *)(param_1 + 0x29be) * 2) * 4) + 0xbc) =
         0x3f800000;
    if (param_3 == '\0') {
      FUN_0896a2ec(0x3f000000,param_1,1,*(undefined *)(param_1 + 0x29be));
      uVar2 = *(undefined *)(param_1 + 0x29be);
    }
    else {
      FUN_0896a2ec(param_1,1,*(undefined *)(param_1 + 0x29be));
      uVar2 = *(undefined *)(param_1 + 0x29be);
    }
    FUN_0896a478(param_1,uVar2);
    memset_jak((undefined *)(param_1 + 0x2a5c),0,0x14);
  }
  return;
}

