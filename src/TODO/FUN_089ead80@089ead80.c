#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089ead80(undefined *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = *param_2;
  iVar3 = 0;
  iVar4 = 0;
  while (cVar1 != '\0') {
    iVar2 = FUN_089ea914(param_1,param_2 + iVar3);
    if (iVar2 == 0) {
      switch(cVar1) {
      case 'b':
        *param_1 = 0xf6;
        break;
      case 'c':
        *param_1 = 0xf0;
        break;
      case 'd':
        *param_1 = 0xfb;
        break;
      case 'e':
      case 'i':
      case 'j':
      case 'm':
      case 'o':
      case 'p':
      case 'q':
      case 't':
      case 'u':
      case 'v':
        *param_1 = 0xfd;
        break;
      case 'f':
        *param_1 = 0xf2;
        break;
      case 'g':
        *param_1 = 0xf7;
        break;
      case 'h':
        *param_1 = 0xef;
        break;
      case 'k':
        *param_1 = 0xf9;
        break;
      case 'l':
        *param_1 = 0xf3;
        break;
      case 'n':
        *param_1 = 0xf1;
        break;
      case 'r':
        *param_1 = 0xf8;
        break;
      case 's':
        *param_1 = 0xf4;
        break;
      case 'w':
        *param_1 = 0xfa;
        break;
      default:
        if (cVar1 == '\n') {
          *param_1 = 0xfe;
        }
        else {
          *param_1 = 0xfd;
        }
      }
      iVar3 = iVar3 + 1;
      cVar1 = param_2[iVar3];
      param_1 = param_1 + 1;
    }
    else {
      iVar3 = iVar3 + iVar2;
      iVar4 = iVar4 + 1;
      cVar1 = param_2[iVar3];
      param_1 = param_1 + iVar2;
    }
  }
  *param_1 = 0;
  return iVar4;
}

