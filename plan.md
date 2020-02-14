# Project Plan
Created according to [this description.](https://github.com/gwu-iot/collaboration/blob/master/project_criteria.md#timeline)

## Components of Project
1. Location Determination: add sensing capabilities to a physical globe and writing software to use these sensors to determine the latitude and longitude of the location that is currently facing upward on the globe. Latitude and longitude are sent to Computing I.
2. Time Determination: construct a physical interface with dials and disks which can be used to select a time, as well as "scrub" forward and backward from the selected time. This component is also responsible for writing software to provide time (with a low latency) to Computing I.
3. Computing I: in charge of the "internet" aspect. This role is in charge of using existing APIs or writing new APIs to gather information about the viewable night sky, air pollution, noise pollution, global temperature, and constellations based on the input coordinates and time.
4. Computing II: in charge of creating the image to be projected on the screen. Will use the star positions and light pollution data produced Computing I to create an image of the night sky over the selected location, lightened or darkened depending on light pollution data gathered from the Internet. This image will need to be digitally formatted to match the shape of the projection surface before sending this image to the projector. This computation should be done efficiently so it can be projected with a high refresh rate.
5. Pollution Visualization: this component will be in charge of actuation. Using data on pollution gathered by Computing I, fog will be produced to represent air pollution. Warm lights will be projected on the globe to represent heat pollution. City sounds will be played through speakers to represent noise pollution.
6. Construction: building the projection surface and curtain frame to create a controlled environment for the user so that the experience is as immersive as possible.

## Timeline
**Checkpoint 1**
1. Have software written to map an input angle (probably via terminal) to a longitude, based on an intial longitude value
2. Have a definite schematic of how the clock interface will be built/function
3. Make a list of all existing APIs for the project and determine what needs to be written from scratch
4. Determine an API to get constellations online, and what kind of digital manipulation can be done to an image to create realistic brightening effects based on light pollution
5. Have a definite schematic of how all the actuators will connect to the main controller

**Checkpoint 2**
1. Have the globe done
2. Have the clock done
3. Have data moving from Computing I to Pollution Visualization and creating some actuation (only one type of pollution is not accounted for yet)
4. Projector works but image is not necessarily warped to match the projection surface
5. See 3)

## Interfaces

![Image of our anticpacted overall interface](interface.png)
## Security
How will security be considered? What specifically are we ignoring? This references a paper we haven't read yet reeeeeeeeee

## Component Assignment
1. Rick
2. Becky
3. Lily
4. Rachell
5. Tuhina
6. We will all meet up for a couple hours very soon after Checkpoint II to knock this out
