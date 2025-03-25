# eps32_dht11_ByAli
To import the DHT11 sensor libraries into your project, follow these steps:
Download Libraries: Ensure you have the necessary libraries for the DHT11 sensor. These typically include a C source file (dht11.c) and a header file (dht11.h). You can obtain these libraries from reliable sources such as the manufacturer's website or trusted repositories like GitHub.
Create Components Folder: Within your project directory, create a folder named components if it doesn't already exist. This folder will hold all the external components' libraries and source files.
Place Libraries in Components Folder: Move the dht11.c and dht11.h files into the components folder you created in the previous step.
Include Libraries in Your Project: In your project source code files where you intend to use the DHT11 sensor functionalities, include the dht11.h header file.
Compile and Link: Ensure that your build system is configured to compile and link the dht11.c source file along with your project files. (CMakeLists.txt enables you to specify dependencies on external libraries and components, including the DHT11 sensor library in this case. This makes it easier to manage dependencies and ensures that your project can be built consistently across different environments.) import the DHT11 sensor libraries into your project, follow these steps:

Task Statement
Design a system to measure temperature using the DHT11 sensor, providing accurate and reliable temperature readings.
Steps to be Followed
i.	Set Up ESP-IDF Project
ii.	Include Required Libraries:
iii.	Define Configuration Constants
iv.	Implement dht_test Function
v.	Implement app_main Function
vi.	Compile and Flash
vii.	Monitor Output
Implement the dht_test function as provided. This function reads temperature and humidity data from the DHT11 sensor. Ensure to include the necessary setup code such as enabling pull-up resistors if required (based on CONFIG_EXAMPLE_INTERNAL_PULLUP). Initialize DHT11 sensor by gpio_set_direction Use the dht_read_float_data function to read data from the DHT11 sensor.Print the temperature and humidity readings to the console.Add a delay using vTaskDelay to control the frequency of sensor readings
Expected Output
![image](https://github.com/user-attachments/assets/f47e94ff-e5da-4d34-9d4f-322eb931670b)
