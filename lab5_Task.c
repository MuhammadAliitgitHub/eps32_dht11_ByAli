#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "dht.h"
#include <esp_idf_lib_helpers.h>
// Removed #include "dht.c" - never include .c files directly

void sensor_task(void *pvParameters) {
    float humidity, temperature;
    
    while(1) {
        // Corrected function call - using defined constants instead of magic numbers
        esp_err_t result = dht_read_float_data(DHT_TYPE_DHT11, GPIO_NUM_5, &humidity, &temperature);
        
        if (result == ESP_OK) {
            printf("Humidity: %.2f%%\n", humidity);
            printf("Temperature: %.2f°C\n", temperature);
        } else {
            printf("Error reading sensor: %d\n", result);
        }
        
        vTaskDelay(pdMS_TO_TICKS(2000)); // 2 second delay between readings
    }
}

void app_main() {
    xTaskCreate(sensor_task, "sensor_task", 2048, NULL, 5, NULL);
}