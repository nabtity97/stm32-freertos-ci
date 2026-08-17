//#include "error_handler_task.h"
//
//void error_handler_task(void* param)
//{
//  uint32_t received_event_id;
//  while(1)
//  {
//    if(pdPASS == xQueueReceive(
//        errors_queue,
//        &received_event_id,
//        portMAX_DELAY))
//    {
//
//      if(received_event_id >= EVT_MAX)
//      {
//        // accessing element out of boundries.
//        continue;
//      }
//
//      error_counter[received_event_id]++;
//      switch (received_event_id)
//      {
//      case EVT_SYS_HEALTH_AWDG_THRESHOLD_EXCEEDED:
//      case EVT_SENSOR_READ_FAIL:
//        // just placeholder, will tackle them later.
//        break;
//
//      default:
//        break;
//      }
//    }
//  }
//}
//
//
//// we create the task here
//void error_handler_start(void)
//{
//  errors_queue = xQueueCreate(100, sizeof(uint32_t));
//
//  if(errors_queue == NULL)
//  {
//      /* Queue was not created and must not be used. */
//  }
//
//  BaseType_t ret = xTaskCreate(error_handler_task,
//                               "Error Handler Task" ,
//                               ERROR_HANDLER_TASK_STACK_SIZE,
//                               NULL,
//                               ERROR_HANDLER_TASK_PRIORITY,
//                               NULL);
//
//  if(ret == pdFAIL)
//  {
//    // freeze the system
//    while(1);
//  }
//}
//
//
//void error_handler_send_msg(uint32_t event_id)
//{
//  BaseType_t ret = xQueueSend(errors_queue,
//                              &event_id,
//                              portTICK_PERIOD_MS);
//
//  if(ret == pdPASS)
//  {
//    // message sent to the queue successfully.
//  }
//  else if(ret == errQUEUE_FULL)
//  {
//    // errors queue is full
//  }
//  else if(ret == pdFAIL)
//  {
//    // failed to post to the errors queue.
//  }
//  else
//  {
//    // undefined error when posting to the queue.
//  }
//}
//
//void error_handler_send_msg_from_isr(uint32_t event_id)
//{
//  BaseType_t xHigherPriorityTaskWoken = pdFALSE;
//
//  xQueueSendFromISR(errors_queue,
//                    &event_id,
//                    &xHigherPriorityTaskWoken);
//
//  portYIELD_FROM_ISR(xHigherPriorityTaskWoken);
//}
