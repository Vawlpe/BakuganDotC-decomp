#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08805598(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined local_80;
  undefined local_7f;
  undefined2 local_7e;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined local_68;
  undefined auStack_64 [25];
  undefined auStack_4b [27];
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 < 2) {
    if (-1 < iVar2) {
      if (iVar2 < 1) {
        if (*(char *)(param_1 + 0x88) == '\0') {
          *(undefined4 *)(DAT_08ac58c4 + 0xc) = 0;
          iVar2 = FUN_089c59d4();
          if (iVar2 != 0) {
            uVar1 = FUN_089c59f0();
            FUN_089c6350(uVar1,2,0,0);
          }
          *(undefined4 *)(param_1 + 0x2c) = 2;
        }
        else {
          local_80 = 0;
          local_7f = 0;
          local_7e = 0;
          local_7c = 0;
          local_78 = 0;
          local_74 = 0;
          local_70 = 0;
          local_6c = 0;
          local_68 = 0;
          iVar3 = 0;
          iVar2 = param_1;
          do {
            if (*(int *)(iVar2 + 200) == -1) break;
            memcpy_jak(auStack_64,&local_80,0x19);
            FUN_089b4c84(&local_80,&DAT_08a33998,auStack_64,
                         *(undefined4 *)(DAT_08aac830 + *(int *)(iVar2 + 200) * 4));
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + 4;
          } while (iVar3 < 0xc);
          FUN_089eb2e0(auStack_4b,&local_80);
          uVar1 = FUN_0880cc48();
          FUN_0880d8a0(uVar1,auStack_4b);
          iVar2 = *(int *)(*(int *)(param_1 + 0x98) + 0x14);
          (**(code **)(iVar2 + 0x34))
                    (0x3f99999a,*(int *)(param_1 + 0x98) + (int)*(short *)(iVar2 + 0x30));
          FUN_08805408(param_1,9,0);
          *(undefined4 *)(DAT_08ac58c4 + 0xc) = 1;
          iVar2 = FUN_089c59d4();
          if (iVar2 != 0) {
            uVar1 = FUN_089c59f0();
            FUN_089c6350(uVar1,4,0,0);
          }
          *(undefined4 *)(param_1 + 0x2c) = 1;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0xb4) + 1;
        *(int *)(param_1 + 0xb4) = iVar2;
        if (0x2d < iVar2) {
          FUN_089c87e4(0);
          FUN_089c879c(0x3e4ccccd,0);
          *(undefined4 *)(param_1 + 0x2c) = 2;
        }
      }
    }
  }
  else if (iVar2 < 3) {
    iVar2 = FUN_089edb58();
    if (iVar2 == 0) {
      FUN_089eda24(0);
      iVar2 = FUN_089edb80();
      *(undefined4 *)(iVar2 + 0x10) = 0x469c4000;
    }
    iVar2 = FUN_089edb80();
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    iVar2 = FUN_089edb80();
    *(undefined4 *)(iVar2 + 0x40) = 0;
    *(undefined4 *)(iVar2 + 0x44) = 0;
    *(undefined4 *)(iVar2 + 0x48) = 0;
    *(undefined4 *)(iVar2 + 0x4c) = 0x3f800000;
    uVar1 = FUN_089edb80();
    FUN_089edf24(uVar1,10);
    *(undefined4 *)(param_1 + 0x2c) = 3;
  }
  else if (iVar2 < 4) {
    uVar1 = FUN_089edb80();
    iVar2 = FUN_089edf70(uVar1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      *(undefined *)(param_1 + 0x74) = 1;
    }
  }
  FUN_088054b4(param_1);
  return;
}

