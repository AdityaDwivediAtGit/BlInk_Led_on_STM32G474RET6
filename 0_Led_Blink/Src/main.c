/* 
 * LED is connected to PA5 (Refer User LD2 in User Guide Pg 22)
 * PA5 is connected to GPIO PORT A (refer Block Diagram in Datasheet Pg 17/236)
 * GPIO PORT A is getting clock from AHB2 (refer Block Diagram in Datasheet Pg 17/236)
 * Addresses of Peripherals (refer Memory Map in Reference Manual Page 82/2124)
 * Enabling Clock for GPIO A (RCC is connected to AHB1)

`

*/
#define PERIPHERAL_BASE         0x40000000UL
#define AHB1_PERIPHERAL_OFFSET	0x00020000UL
#define AHB1_BASE (PERIPHERAL_BASE + AHB1_PERIPHERAL_OFFSET)
