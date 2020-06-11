# Audio Coffin Buzzer (Audio Buzzer library)

Audio Buzzer is an `Arduino library` that allows `makers` to  `play songs` with an Arduino board.

In the example you can find the _coffin dance_ meme song!

![coffin](https://github.com/capitanfuturo/capitanfuturo.github.io/raw/master/assets/2020-07-15/coffin.jpg)

## Prerequisites

Before you begin, ensure you have met the following requirements:

* You have installed the latest version of `Arduino IDE`
* You have an `Arduino UNO` board.

## Schema

![schema](https://github.com/capitanfuturo/capitanfuturo.github.io/raw/master/assets/2020-07-15/schema.png)

## Installing Audio Buzzer library

To install Audio Buzzer, follow these steps:

1. Download the last release .ZIP.
2. Import the library from the IDE. Selecting:
    * Sketch
    * Include Library
    * Add .ZIP library

Now, you can use the library in your Arduino projects.

## Using Audio Buzzer library

To use Audio Buzzer library, follow these snippets. With the following code you will able to play a tone:

~~~c
#include "audio_buzzer.h"

const int BUZZER_PIN = 3; // a PWM PIN

void setup() {
  //Setup pin modes
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  beep(NOTE_Gb3, BPM120_1_4, BUZZER_PIN);
}
~~~

To see a more complex example refer to _coffin-buzzer.ino_.

## Contributing to Audio Buzzer library

To contribute to Audio Buzzer library, follow these steps:

1. Fork this repository.
2. Create a branch: `git checkout -b <branch_name>`.
3. Make your changes and commit them: `git commit -m '<commit_message>'`
4. Push to the original branch: `git push origin <project_name>/<location>`
5. Create the pull request.

Alternatively see the GitHub documentation on [creating a pull request](https://help.github.com/en/github/collaborating-with-issues-and-pull-requests/creating-a-pull-request).

## Contact

If you want to contact me you can reach me at giuseppe.caliendo [AT] gmail.

## License

This project uses the following license: [MIT](LICENSE).
