/************************************************************
*
* REXLANG - Using the MCP4921 DAC via SPI
*
*************************************************************/

string parameter(0) spi_dev;

long input(0) channel0;
long input(1) channel1;
bool input(2) gain0;
bool input(3) gain1;

long channel[2];
long gain[2];
long spi_bufTx[3]; //buffer for transmitting data
long spi_bufRx[3]; //buffer for receiving data
long spi_bus_handle;
long spi_write_count;
long spi_read_count;
long spi_ret_fun;

long init(void)
{
  //spi_bus_handle = Open(SPIDEV_FNAME); // open SPI device for Rex 2.10.x
  spi_bus_handle = OpenSPI(spi_dev); // open and specify SPI device    
  // SPI data modes:
  //	SPI_MODE0 = 0,  // CPOL = 0, CPHA = 0, Clock idle low, data is clocked in on rising edge, output data (change) on falling edge
  //	SPI_MODE1 = 1,  // CPOL = 0, CPHA = 1, Clock idle low, data is clocked in on falling edge, output data (change) on rising edge
  //	SPI_MODE2 = 2,  // CPOL = 1, CPHA = 0, Clock idle high, data is clocked in on falling edge, output data (change) on rising edge
  //	SPI_MODE3 = 3,  // CPOL = 1, CPHA = 1, Clock idle high, data is clocked in on rising, edge output data (change) on falling edge

  spi_bufTx[0] = 0; //SPI data mode (0-3 mode, | 4=CS_HIGH | 8=LSB_FIRST | 16=3WIRE | 32=LOOP | 64=NO_CS | 128=READY)
  spi_bufTx[1] = 8; //bits per word
  spi_bufTx[2] = 1000000; //clock frequency [Hz]
  SetOptions(spi_bus_handle, spi_bufTx);

  // Verification of SPI bus settings
  GetOptions(spi_bus_handle, spi_bufRx);
  Trace(0, spi_bufRx[0]);  //	SPI mode
  Trace(1, spi_bufRx[1]);  //	bits per word
  Trace(2, spi_bufRx[2]);  //	clock frequency
    
	return 0;
}

int main(void){
	long i;
	spi_write_count = 2;
	spi_read_count = 0;
	channel[0] = channel0;
	channel[1] = channel1;
	gain[0] = gain0;
	gain[1] = gain1;


	for (i=0;i<2;i++){
		if (channel[i] < 4096 && channel[i] >= 0){
			spi_bufTx[0] = (i << 7) | (gain[i] << 5) | (1 << 4) | (channel[i] & 0xF00)>>8; //ID | gain | parsing DAC data
			spi_bufTx[1] = channel[i] & 0xFF; //parsing DAC data
			spi_ret_fun = SPI(spi_bus_handle, 0, spi_bufTx, spi_write_count, spi_bufRx, spi_read_count); //SPI bus data exchange
		}
	}

	
  
/*	spi_write_count = 2;
	spi_read_count = 0;
    
    spi_bufTx[0] = (0x3 << 4) | (channel0 & 0xF00)>>8; //parsing DAC data
			spi_bufTx[1] = channel0 & 0xFF; //parsing DAC data
			spi_ret_fun = SPI(spi_bus_handle, 0, spi_bufTx, spi_write_count, spi_bufRx, spi_read_count); //SPI bus data exchange
    
	spi_bufTx[0] = (0xB << 4) | (channel1 & 0xF00)>>8; //parsing DAC data
	spi_bufTx[1] = channel1 & 0xFF; //parsing DAC data
	spi_ret_fun = SPI(spi_bus_handle, 0, spi_bufTx, spi_write_count, spi_bufRx, spi_read_count); //SPI bus data exchange
  }*/  
  return 0;
}
