/*
 * LED is connected to PA5 (Refer User LD2 in User Guide Pg 22)
 * PA5 is connected to GPIO PORT A (refer Block Diagram in Datasheet Pg 17/236)
 * GPIO PORT A is getting clock from AHB2 (refer Block Diagram in Datasheet Pg 17/236)
 * Addresses of Peripherals (refer Memory Map in Reference Manual Page 82/2124)
 * Enabling Clock for GPIO A (RCC is connected to AHB1)

`

*/
// Peripheral + Reserved (0x4000 0000 - 0x5FFF FFFF)
#define PERIPHERAL_BASE         0x40000000UL

// Advanced High Performance Bus 1 (0x4002 03FF - 0x4002 3400) (Refer Page 84/2124)
#define AHB1_PERIPHERAL_OFFSET	0x00020000UL
#define AHB1_BASE 				      (PERIPHERAL_BASE + AHB1_PERIPHERAL_OFFSET)

// Register and Clock Control (0X4002 1000 - 0x4002 13FF) (Refer Page 84/2124)
#define RCC_OFFSET				0x00021000UL
#define RCC_BASE				  (PERIPHERAL_BASE + RCC_OFFSET)

// Advanced High Performance Bus 2 ( 0x4800 03FF - 0x5006 0C00) (Refer Page 83/2124)
#define AHB2_PERIPHERAL_OFFSET	0x08000000UL
#define AHB2_BASE 				      (PERIPHERAL_BASE + AHB2_PERIPHERAL_OFFSET)

// GPIO A (0x4800 0000 - 0x4800 03FF) (Refer Page 83/2124)
#define GPIOA_OFFSET			0x00000000UL
#define GPIOA_BASE				(AHB2_BASE + GPIOA_OFFSET)
