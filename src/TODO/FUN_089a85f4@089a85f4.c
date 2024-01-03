#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a85f4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  FUN_089a5c54(2,0);
  if (*(char *)(param_1 + 0x672) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x74);
    if (bVar1 < 5) {
      if (bVar1 == 1) {
        if (*(char *)(param_1 + 0xe2d) == '\x01') {
          FUN_0890a598(param_1,6);
        }
        else {
          FUN_0890a598(param_1,2);
        }
      }
      else if (bVar1 == 2) {
        FUN_0890a598(param_1,4);
      }
      else if (bVar1 == 3) {
        FUN_0890a598(param_1,5);
      }
      else if (bVar1 == 4) {
        FUN_0890a598(param_1,3);
      }
      else {
        FUN_0890a598(param_1,1);
        FUN_088c2ab0();
        FUN_088c2858();
      }
    }
    uVar2 = DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar2,0x17,(int)*(char *)(param_1 + 0x74));
  }
  else {
    FUN_0890a598(param_1,0);
  }
  return;
}

