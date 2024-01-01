#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_08a27d34(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined uStack_40;
  char local_3f;
  undefined2 local_3a;
  undefined2 local_32;
  undefined2 local_30;
  undefined local_2e;
  
  if ((param_1 != 0) && (param_5 != 0)) {
    iVar1 = FUN_08a275d4(param_2,param_3);
    if (iVar1 != 0) {
      FUN_08a27808(param_2,&uStack_40);
      if (local_3f != '\0') {
        FUN_08a129e0(1,param_5);
        FUN_08a11f10(0,3,0,local_3a,1,0x10,1,1,1,2,3,1,0x10,0,0,param_5);
      }
      uVar2 = FUN_08a27600(local_2e);
      FUN_08a12984(1,param_5);
      FUN_08a11f10(0,uVar2,0,local_32,local_30,0x10,1,1,1,1,3,1,0x80,0,0,param_5);
      return 1;
    }
  }
  return 0;
}

