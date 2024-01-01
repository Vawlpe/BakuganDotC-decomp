#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a043d0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *local_100;
  undefined local_fc;
  undefined auStack_f8 [92];
  undefined *local_9c;
  undefined4 local_98;
  undefined2 local_94;
  undefined4 local_90;
  undefined local_8c;
  undefined2 local_7c;
  undefined4 local_20;
  undefined local_1c [4];
  undefined4 local_18;
  
  local_7c = DAT_08af1208;
  local_90 = DAT_08af120c;
  local_8c = 1;
  DAT_08af1208 = 0xffff;
  local_100 = &local_90;
  local_fc = 0;
  local_9c = &DAT_08af121c;
  local_98 = 0;
  local_94 = 0xffff;
  DAT_08af120c = &local_100;
  iVar1 = FUN_08a0f7bc(auStack_f8);
  if (iVar1 == 0) {
    FUN_08a04588();
  }
  else {
    FUN_08a03bec();
    FUN_08a03ef0(&local_20,local_1c,&local_18);
    iVar1 = FUN_08a03f1c(local_20,local_1c[0],local_18);
    if (iVar1 == 0) {
      iVar1 = FUN_08a03f1c(&PTR_DAT_08af5ac4,0,0);
      if (iVar1 == 0) {
        FUN_08a04520();
      }
      else {
        uVar2 = FUN_08a03e00(&PTR_DAT_08af5ac4,4,0);
        FUN_08a03188(uVar2);
        FUN_08a03fbc();
      }
    }
    else {
      FUN_08a03d68();
    }
    FUN_08a03e70();
  }
  DAT_08af120c = (undefined4 **)local_100;
  FUN_08a0f8d0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}

