# Heart-Monitoring-With-Custom-Server
   

1.[Integrate arduino IDE with esp32 library](https://github.com/faysaltaysir/ESP32-integating-in-Arduino-IDE/blob/main/readme.md#adding-esp32-sketch-data-upload).<br>
2.  download the file and Unzip it. Open the `.ino` file with arduino IDE. <br>
3. change your wifi credentials in code.
4. select the right board and port from `tools` > `boards`.
5. goto `Tools` > `ESP32 sketch data upload` and press and hold `BOOT` button of esp32 untill the code is uploaded.
6. then upload the ino file to esp32 board and keep holding the `boot` button while uploading.
7. open the serial monitor with Bug rate "115200" and press `EN` button of ESP32.
8. copy the displayed IP address in serial monitor and browse it in any web browser which is connected to the same wifi network that your ESP32 is.
9. the values will be displayed.

