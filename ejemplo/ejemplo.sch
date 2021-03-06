EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "Tutorial 1"
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Device:R R1
U 1 1 6261BE93
P 3350 2150
F 0 "R1" V 3557 2150 50  0000 C CNN
F 1 "1k" V 3466 2150 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P1.90mm_Vertical" V 3280 2150 50  0001 C CNN
F 3 "~" H 3350 2150 50  0001 C CNN
	1    3350 2150
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R2
U 1 1 6261C216
P 4200 3000
F 0 "R2" V 3993 3000 50  0000 C CNN
F 1 "100" V 4084 3000 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P1.90mm_Vertical" V 4130 3000 50  0001 C CNN
F 3 "~" H 4200 3000 50  0001 C CNN
	1    4200 3000
	0    1    1    0   
$EndComp
$Comp
L MCU_Microchip_PIC12:PIC12C508A-ISN U1
U 1 1 6261CBCA
P 1750 2550
F 0 "U1" H 1750 3331 50  0000 C CNN
F 1 "PIC12C508A-ISN" H 1750 3240 50  0000 C CNN
F 2 "Package_DIP:DIP-8_W7.62mm" H 2350 3200 50  0001 C CNN
F 3 "http://ww1.microchip.com/downloads/en/devicedoc/40139e.pdf" H 1750 2550 50  0001 C CNN
	1    1750 2550
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D1
U 1 1 6261E38E
P 2700 2150
F 0 "D1" H 2693 2366 50  0000 C CNN
F 1 "LED" H 2693 2275 50  0000 C CNN
F 2 "LED_THT:LED_D5.0mm" H 2700 2150 50  0001 C CNN
F 3 "~" H 2700 2150 50  0001 C CNN
	1    2700 2150
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x03 J1
U 1 1 626348D8
P 3250 3000
F 0 "J1" H 3250 3200 50  0000 C CNN
F 1 "MYCONN3" H 3168 2766 50  0000 C CNN
F 2 "Connector:Banana_Jack_3Pin" H 3250 3000 50  0001 C CNN
F 3 "~" H 3250 3000 50  0001 C CNN
	1    3250 3000
	-1   0    0    -1  
$EndComp
$Comp
L power:VCC #PWR0101
U 1 1 6263579F
P 3850 1950
F 0 "#PWR0101" H 3850 1800 50  0001 C CNN
F 1 "VCC" H 3867 2123 50  0000 C CNN
F 2 "" H 3850 1950 50  0001 C CNN
F 3 "" H 3850 1950 50  0001 C CNN
	1    3850 1950
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR0102
U 1 1 62635BDF
P 1750 1650
F 0 "#PWR0102" H 1750 1500 50  0001 C CNN
F 1 "VCC" H 1767 1823 50  0000 C CNN
F 2 "" H 1750 1650 50  0001 C CNN
F 3 "" H 1750 1650 50  0001 C CNN
	1    1750 1650
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR0103
U 1 1 62636548
P 3800 2750
F 0 "#PWR0103" H 3800 2600 50  0001 C CNN
F 1 "VCC" H 3817 2923 50  0000 C CNN
F 2 "" H 3800 2750 50  0001 C CNN
F 3 "" H 3800 2750 50  0001 C CNN
	1    3800 2750
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0104
U 1 1 62636914
P 3800 3350
F 0 "#PWR0104" H 3800 3100 50  0001 C CNN
F 1 "GND" H 3805 3177 50  0000 C CNN
F 2 "" H 3800 3350 50  0001 C CNN
F 3 "" H 3800 3350 50  0001 C CNN
	1    3800 3350
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0105
U 1 1 62636C1E
P 1750 3350
F 0 "#PWR0105" H 1750 3100 50  0001 C CNN
F 1 "GND" H 1755 3177 50  0000 C CNN
F 2 "" H 1750 3350 50  0001 C CNN
F 3 "" H 1750 3350 50  0001 C CNN
	1    1750 3350
	1    0    0    -1  
$EndComp
Wire Wire Line
	2550 2150 2550 1350
Wire Wire Line
	2550 1350 1150 1350
Wire Wire Line
	1150 1350 1150 2450
Wire Wire Line
	1150 2550 600  2550
Wire Wire Line
	1750 3150 1750 3350
Wire Wire Line
	1750 1950 1750 1650
Wire Wire Line
	3450 2900 3800 2900
Wire Wire Line
	3800 2900 3800 2750
Wire Wire Line
	3800 3350 3800 3100
Wire Wire Line
	3800 3100 3450 3100
Wire Wire Line
	3450 3000 4050 3000
Wire Wire Line
	4350 3000 5400 3000
Wire Wire Line
	3200 2150 2850 2150
Wire Wire Line
	3500 2150 3850 2150
Wire Wire Line
	3850 2150 3850 1950
Text Label 800  2550 0    50   ~ 0
INPUT
Text Label 4700 3000 0    50   ~ 0
INPUT
Text Label 1500 1350 0    50   ~ 0
uCtoLED
Text Label 2850 2150 0    50   ~ 0
LEDtoR
Text Label 3550 3000 0    50   ~ 0
INPUTtoR
NoConn ~ 2350 2650
NoConn ~ 2350 2550
NoConn ~ 2350 2450
NoConn ~ 1150 2650
$Comp
L power:PWR_FLAG #FLG0101
U 1 1 62641171
P 4450 1550
F 0 "#FLG0101" H 4450 1625 50  0001 C CNN
F 1 "PWR_FLAG" H 4450 1723 50  0000 C CNN
F 2 "" H 4450 1550 50  0001 C CNN
F 3 "~" H 4450 1550 50  0001 C CNN
	1    4450 1550
	1    0    0    -1  
$EndComp
$Comp
L power:PWR_FLAG #FLG0102
U 1 1 6264186A
P 4950 1550
F 0 "#FLG0102" H 4950 1625 50  0001 C CNN
F 1 "PWR_FLAG" H 4950 1723 50  0000 C CNN
F 2 "" H 4950 1550 50  0001 C CNN
F 3 "~" H 4950 1550 50  0001 C CNN
	1    4950 1550
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0106
U 1 1 62641D2C
P 4450 1800
F 0 "#PWR0106" H 4450 1550 50  0001 C CNN
F 1 "GND" H 4455 1627 50  0000 C CNN
F 2 "" H 4450 1800 50  0001 C CNN
F 3 "" H 4450 1800 50  0001 C CNN
	1    4450 1800
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR0107
U 1 1 626420A1
P 4950 1800
F 0 "#PWR0107" H 4950 1650 50  0001 C CNN
F 1 "VCC" H 4968 1973 50  0000 C CNN
F 2 "" H 4950 1800 50  0001 C CNN
F 3 "" H 4950 1800 50  0001 C CNN
	1    4950 1800
	-1   0    0    1   
$EndComp
Wire Wire Line
	4950 1550 4950 1800
Wire Wire Line
	4450 1550 4450 1800
$EndSCHEMATC
