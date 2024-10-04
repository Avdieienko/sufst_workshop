# SUFT Electronics-Software Workshop

<p>To run the C script you need a compiler installed on your computer(GCC) refer to the compiler_installation.txt file for installation instructions, if you need so</p>

<h4>Your task is to complete a Car Sensors script</h4>

- Task 1: Complete sensors' structures
  1) Navigate to Inc folder and complete tasks in ControlSensor.h and PedalsSensor.h
  2) Complete tasks in CarSensors.h
- Task 2: Complete drive function
  1) Navigate to Src folder and complete tasks in drive.c file
- Task 3: Complete main function
  1) Navigate to main.c file located in Src folder
- Extra: If you get this far, look at multithreading (pthreads) and synchronisation in C. Run two functions at once, one which adds structs to an array (a queue), then one which reads from the counter and prints the struct to the terminal. (Hint: this is a producer-consumer synchronisation problem.)



  <h4>To run the script you can use either use cmake or do it directly with gcc compiler:</h4>

  The commands will probably be something like this:

    ```pwd
  $ mkdir build
  $ cd build
  $ cmake ..
  $ cmake --build .
  $ ./workshop or ./Debug
  ```

    OR
    
  ```pwd
  $ cd Src
  $ gcc main.c drive.c -o main
  ```
You completed a workshop!

<h4>If you struggle - navigate to Answers folder and look at the example of how your code could be done.</h4>
