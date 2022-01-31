/*
 * SPI_Driver.c
 *
 * Created: 03/06/2021 11:12:15
 * Author : Ahmed
 */ 

#include "../MCAL/SPI/SPI.h"
#include "../MCAL/Timers/Timer0.h"
#include "../ECUAL/LED/LED.h"
#define F_CPU 16000000



int main(void)
{
    uint8_t tx_data=2;
	uint8_t rx_data=1;
	LED0_Init();
	
	SPI_Slave_Init();

    while (1) 
    {
		rx_data= SPI_TransSiver(2);
		
		if(rx_data == 1)
		{
			LED0_On();
			rx_data=0;
		}
		TIMER0_u8PollingDelay(1000);
		LED0_Off();
		
    }
}

