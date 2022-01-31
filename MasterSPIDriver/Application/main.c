/*
 * SPI_Driver.c
 *
 * Author : Ahmed
 */ 

#include "../MCAL/SPI/SPI.h"
#define F_CPU 16000
#include "../MCAL/Timers/Timer0.h"


int main(void)
{
	uint8_t data = 1;
	SPI_Master_Init();
	SPI_Master_InitTrans();
	TIMER0_u8PollingDelay(1000);
    while (1) 
    {
		SPI_TransSiver(data);
		TIMER0_u8PollingDelay(1000);
		SPI_Master_TermTrans();
    }
}

