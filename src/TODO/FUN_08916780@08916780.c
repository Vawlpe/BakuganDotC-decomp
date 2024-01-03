#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08916780(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_089a5278();
  *(undefined4 *)(param_1 + 0x169c) = 0;
  if (*(int *)(param_1 + 0x1698) == 6) {
    FUN_089a535c(param_1 + 0x8b4);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0xd4);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xd4));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xd4) + 0xbc) = 0x3f800000;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0xd4);
    *(undefined4 *)(iVar2 + 0xc0) = 0x3e99999a;
    *(undefined4 *)(iVar2 + 0xc4) = 0x3e99999a;
    *(undefined4 *)(iVar2 + 200) = 0x3e99999a;
    *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xd4) + 0x68) =
         *(undefined4 *)(param_1 + 0x1158);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xd4) + 0x60) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xcc) + 0x60);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xd4) + 100) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xcc) + 100);
    FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xd4),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x198),param_1 + 0x105c);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 200);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
  }
  else {
    FUN_089a535c(param_1 + 0x83c);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 200);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 200));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 200) + 0xbc) = 0x3f800000;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 200);
    *(undefined4 *)(iVar2 + 0xc0) = 0x3e99999a;
    *(undefined4 *)(iVar2 + 0xc4) = 0x3e99999a;
    *(undefined4 *)(iVar2 + 200) = 0x3e99999a;
    *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 200) + 0x68) =
         *(float *)(param_1 + 0x114c) - 1000.0;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 200) + 0x60) =
         *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x1698) * 4 + 0xb0) + 0x60);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 200) + 100) =
         *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x1698) * 4 + 0xb0) + 100);
    FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 200),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x198),param_1 + 0x105c);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0xd4);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
  }
  iVar5 = 0x2c;
  iVar4 = 0xb0;
  iVar2 = param_1 + 0xb0;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
         *(undefined4 *)(iVar2 + 0x1084);
    iVar3 = *(int *)(param_1 + 0x1698);
    if (iVar5 + -0x2c == iVar3) {
      if (iVar3 < 1) {
        iVar3 = *(int *)(param_1 + 0x1c);
      }
      else if ((&DAT_08a9bb4c)[*(int *)(&DAT_08a9baf8 + *(int *)(param_1 + 0x16a8) * 4) * 6 + iVar3]
               == '\0') {
        iVar3 = *(int *)(param_1 + 0x1c);
      }
      else {
        piVar1 = (int *)DONE_Get_DAT_08AAC9E0();
        if (*(char *)(*piVar1 + *(int *)(param_1 + 0x16a8) * 6 + *(int *)(param_1 + 0x1698) + 0x53f)
            == '\0') goto LAB_08916af4;
        iVar3 = *(int *)(param_1 + 0x1c);
      }
      iVar3 = *(int *)(iVar3 + iVar4);
      *(undefined4 *)(iVar3 + 0xc0) = 0x3e99999a;
      *(undefined4 *)(iVar3 + 0xc4) = 0x3e99999a;
      *(undefined4 *)(iVar3 + 200) = 0x3e99999a;
      *(undefined4 *)(iVar3 + 0xcc) = 0x3f800000;
      FUN_0891467c(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),1);
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(undefined4 *)(iVar3 + 0xc0) = 0;
      *(undefined4 *)(iVar3 + 0xc4) = 0;
      *(undefined4 *)(iVar3 + 200) = 0;
      *(undefined4 *)(iVar3 + 0xcc) = 0x3f800000;
      FUN_0891467c(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),0);
    }
LAB_08916af4:
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
    iVar2 = iVar2 + 4;
    if (0x31 < iVar5) {
      iVar5 = 0x3c;
      iVar4 = 0xf0;
      iVar2 = param_1 + 0xf0;
      do {
        FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
        iVar5 = iVar5 + 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
             *(undefined4 *)(iVar2 + 0x1084);
        iVar4 = iVar4 + 4;
        iVar2 = iVar2 + 4;
      } while (iVar5 < 0x42);
      iVar5 = 0x42;
      iVar4 = 0x108;
      iVar2 = param_1 + 0x108;
      do {
        FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
        iVar5 = iVar5 + 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
             *(undefined4 *)(iVar2 + 0x1084);
        iVar4 = iVar4 + 4;
        iVar2 = iVar2 + 4;
      } while (iVar5 < 0x48);
      iVar5 = 0x33;
      iVar4 = 0xcc;
      iVar2 = param_1 + 0xcc;
      do {
        FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
             *(undefined4 *)(iVar2 + 0x1084);
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        if (*(int *)(param_1 + 0x1698) == 6) {
          *(undefined4 *)(iVar3 + 0xc0) = 0x3e99999a;
          *(undefined4 *)(iVar3 + 0xc4) = 0x3e99999a;
          *(undefined4 *)(iVar3 + 200) = 0x3e99999a;
          *(undefined4 *)(iVar3 + 0xcc) = 0x3f800000;
          FUN_08914620(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),1);
        }
        else {
          *(undefined4 *)(iVar3 + 0xc0) = 0;
          *(undefined4 *)(iVar3 + 0xc4) = 0;
          *(undefined4 *)(iVar3 + 200) = 0;
          *(undefined4 *)(iVar3 + 0xcc) = 0x3f800000;
          FUN_08914620(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),0);
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 4;
        iVar2 = iVar2 + 4;
      } while (iVar5 < 0x34);
      iVar2 = 0x34;
      iVar4 = 0xd0;
      iVar5 = param_1 + 0xd0;
      do {
        FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
        iVar2 = iVar2 + 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
             *(undefined4 *)(iVar5 + 0x1084);
        iVar4 = iVar4 + 4;
        iVar5 = iVar5 + 4;
      } while (iVar2 < 0x35);
      return;
    }
  } while( true );
}

