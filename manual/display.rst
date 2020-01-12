.. _display-sample:

st7789 display 
==============


Display    example
~~~~~~~~~~~~~~~~~~~

**Note: I think you need to connect the 5V, just connecting the SWD cable (3.3V) is likely not enough to light up the leds**
**While connecting 5V, do not connect 3.3V**

::

    The watch has background leds for the LCD. 
    
    They need to be on (LOW) to visualize the display.


.. code-block:: console


     replace the display sample with the one in this repo 
     $ cp (this repo)st7789  ~/zephyrproject/zephyr/samples/display





`building an image, which can be found under the build directory`

.. code-block:: console

    $  west build -p -b pinetime samples/display/st7789v 

once the compilation is completed you can upload the firmware
~/zephyrproject/zephyr/build/zephyr/zephyr.bin 

if all goes well, you should see some coloured squares on your screen



