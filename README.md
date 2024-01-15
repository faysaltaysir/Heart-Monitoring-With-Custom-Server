# Heart-Monitoring-With-Custom-Server
<br> follow the steps to Integrate your Arduino IDE with ESP32 coding environment.<br>
1. download the file and Unzip it. Open the `.ino` file with arduino IDE. <br>
2. change your wifi credentials in code.
3. select the right board and port from `tools` > `boards`.
4. goto `Tools` > `ESP32 sketch data upload` and press and hold `BOOT` button of esp32 untill the code is uploaded.
5. then upload the ino file to esp32 board and keep holding the `boot` button while uploading.
6. open the serial monitor with Bug rate "115200" and press `EN` button of ESP32.
7. copy the displayed IP address in serial monitor and browse it in any web browser which is connected to the same wifi network that your ESP32 is.
8. the values will be displayed.

