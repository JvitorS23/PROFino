#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>
#include "comm/uart.h"

// void __cyg_profile_func_enter(void *this_fn, void *call_site)__attribute__((no_instrument_function));
// void __cyg_profile_func_exit(void *this_fn, void *call_site)__attribute__((no_instrument_function)); 

// void __cyg_profile_func_enter(void *this_fn, void *call_site) {
//   printf("--> %p %p\n", this_fn, call_site);
//   printf("==> %s\n", __func__);
// }

// void __cyg_profile_func_exit(void *this_fn, void *call_site) {
//   printf("<-- %p %p\n", this_fn, call_site);
//   printf("<== %s\n", __func__);
// }

void teste(){
  int a = 0; 
}

int main(void) { 
  uart_init();
  stdout = &uart_output;
  _delay_ms(2000);   

    while(1) {      
      printf("%p\n", main);
      _delay_ms(1000);     
    }

    
    
    return 0;
}