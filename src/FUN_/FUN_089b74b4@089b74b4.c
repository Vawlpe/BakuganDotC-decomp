#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

char * FUN_089b74b4(char *param_1,char *param_2,char *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  char *pcVar9;
  
  iVar2 = (int)param_3 - (int)param_2;
  iVar3 = iVar2 + 10;
  pcVar4 = &stack0xffffffe9 + (iVar3 - (iVar2 + 0x19U & 0xfffffff0)) + -10;
  iVar6 = 0;
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (param_3 == (char *)0x0)) {
    return (char *)0x0;
  }
  iVar8 = 0;
  bVar1 = param_3 < param_2;
  pcVar5 = param_2;
  pcVar9 = param_3;
  while ((!bVar1 && (iVar8 != 2))) {
    cVar7 = *pcVar5;
    if (cVar7 == 'e') {
      iVar8 = 2;
    }
    else if (cVar7 == 'E') {
      iVar8 = 2;
    }
    else if ((cVar7 == '.') && (pcVar9 = pcVar5, iVar8 == 0)) {
      iVar8 = 1;
    }
    pcVar5 = pcVar5 + 1;
    bVar1 = param_3 < pcVar5;
  }
  if (iVar8 == 2) {
    return param_2;
  }
  cVar7 = *param_3;
  if (param_2 < param_3) {
    do {
      *pcVar4 = cVar7;
      pcVar5 = pcVar4 + -1;
      if (param_3 <= pcVar9) {
        if (iVar6 % 3 == 0) {
          if (iVar6 == 0) {
            iVar6 = 1;
          }
          else {
            *pcVar5 = ',';
            pcVar5 = pcVar4 + -2;
            iVar3 = iVar3 + 1;
            iVar6 = iVar6 + 1;
          }
        }
        else {
          iVar6 = iVar6 + 1;
        }
      }
      param_3 = param_3 + -1;
      cVar7 = *param_3;
      pcVar4 = pcVar5;
    } while (param_2 < param_3);
    iVar2 = iVar3 + -10;
  }
  *pcVar4 = cVar7;
  memcpy_jak(param_1,pcVar4,iVar2);
  *param_4 = iVar2;
  return param_1;
}

