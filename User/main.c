#include "gd32f10x.h"
#include "systick.h"
#include <stdio.h>
#include "systick.h"


int main()
{
    systick_config();

    rcu_periph_clock_enable(RCU_GPIOB);
    /* configure LED GPIO port */
    gpio_init(GPIOB, GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, GPIO_PIN_1);
    gpio_bit_reset(GPIOB, GPIO_PIN_1);

    
    while (1)
    {
        gpio_bit_set(GPIOB, GPIO_PIN_1);
        delay_1ms(1000);
        gpio_bit_reset(GPIOB, GPIO_PIN_1);
        delay_1ms(1000);
    }
}
