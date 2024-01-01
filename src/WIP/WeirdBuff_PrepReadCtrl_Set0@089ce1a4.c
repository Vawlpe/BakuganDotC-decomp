#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined2 _WIP_WeirdBuff_PrepReadCtrl_Set0(unknown_buffer *weird_buff,undefined2 val)

{
  undefined2 old;
  
  old = *(undefined2 *)((int)&weird_buff->field36_0x2b + 1);
  *(undefined2 *)((int)&weird_buff->field36_0x2b + 1) = val;
  return old;
}

