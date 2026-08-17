#ifndef INC_ERROR_HANDLER_TASK_H_
#define INC_ERROR_HANDLER_TASK_H_

typedef enum
{
  // System Health Analog Watchdog threshold error
  EVT_SYS_HEALTH_AWDG_THRESHOLD_EXCEEDED,

  // Sensor read error
  EVT_SENSOR_READ_FAIL,

  // FRAM initialization error
  EVT_FRAM_INIT_FAIL,

  // Modbus Mutex errors
  EVT_MODBUS_MUTEX_NOT_CREATED,
  EVT_MODBUS_MUTEX_TIMEOUT,

  // Modbus Middleware UART Tx error
  EVT_MODBUS_UART_TX_ERROR,

  // Modbus Slave errors
  EVT_MODBUS_SLAVE_WRITE_HOLDING_REGS_FAIL,
  EVT_MODBUS_SLAVE_WRITE_COILS_FAIL,
  EVT_MODBUS_SLAVE_CRC_MISMATCH,

  // Modbus internal data update errors
  EVT_MODBUS_DATA_UPDATE_COILS_FAIL,
  EVT_MODBUS_DATA_UPDATE_HOLDING_REGS_FAIL,
  EVT_MODBUS_DATA_UPDATE_INPUT_REGS_FAIL,

  // Total number of error codes
  EVT_MAX

} event_id_t;

// to count the number of errors when occur.
//static uint32_t error_counter[EVT_MAX] = { 0 };
//
//static QueueHandle_t errors_queue = NULL;
//
//void error_handler_start(void);
//
//void error_handler_task(void* param);
//
//void error_handler_send_msg(uint32_t event_id);
//
//void error_handler_send_msg_from_isr(uint32_t event_id);


#endif /* INC_ERROR_HANDLER_TASK_H_ */
