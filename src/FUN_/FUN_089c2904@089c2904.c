#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined * FUN_089c2904(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 1;
  iVar1 = FUN_0880d2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_0880cc48();
    iVar3 = FUN_0880dba8(uVar2);
  }
  strcpy(&DAT_08ac53a4,"voice/");
  strcat(&DAT_08ac53a4,(&PTR_DAT_08ac5838)[iVar3]);
  strcat(&DAT_08ac53a4,&DAT_08aa1244);
  strcat(&DAT_08ac53a4,(&PTR_DAT_08ac5424)[param_1]);
  strcat(&DAT_08ac53a4,&DAT_08aa1248);
  return &DAT_08ac53a4;
}

