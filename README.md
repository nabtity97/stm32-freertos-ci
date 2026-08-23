A hands-on STM32F411RE project for learning FreeRTOS concepts and building
an embedded firmware development workflow.

The project is developed using STM32CubeIDE and targets the
NUCLEO-F411RE development board.

In addition to FreeRTOS experiments, the repository demonstrates how an
STM32CubeIDE project can be built automatically in a Linux environment
using Docker and GitHub Actions.



\## CI Build Environment



The CI pipeline uses the STM32CubeIDE Docker image maintained by

\[xanderhendriks/docker-stm32cubeide](https://github.com/xanderhendriks/docker-stm32cubeide).



The image provides STM32CubeIDE and its headless build environment for

reproducible firmware builds in GitHub Actions.

