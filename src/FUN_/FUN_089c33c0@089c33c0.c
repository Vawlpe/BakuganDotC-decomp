#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089c33c0(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = false;
  FUN_089bb728(param_1[1]);
  iVar2 = param_1[0x2c];
  if (iVar2 != param_2) {
    uVar3 = param_1[9];
    if ((((uVar3 < 5) && (uVar3 != 1)) && (uVar3 != 2)) && ((uVar3 != 3 && (uVar3 != 4)))) {
      if (param_1[0x2d] == iVar2) {
        param_1[0x2c] = 0;
      }
      else if (*(char *)((int)param_1 + 0x1b) == '\0') {
        param_1[0x2d] = iVar2;
        param_1[0x2c] = 0;
      }
      else {
        param_1[0x2c] = 0;
      }
      iVar2 = FUN_089c2b60(param_2);
      if (iVar2 == 0) {
        iVar2 = FUN_089c2b60(param_1[0x2c]);
      }
      else {
        param_1[0x2c] = param_2;
      }
      strncpy(param_1 + 0xb,iVar2,0x80);
      bVar1 = true;
      param_1[9] = 1;
      param_1[8] = 1;
      *(undefined *)((int)param_1 + 0x1a) = 0;
      *(undefined *)((int)param_1 + 0x17) = 0;
    }
  }
  FUN_089bb790(param_1[1]);
  if (bVar1) {
    FUN_089bbf78(*param_1 + 9);
  }
  return bVar1;
}

