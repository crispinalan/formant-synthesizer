# Formant Speech Synthesizer

This is the development code for the formant speech synthesizer which I was developing for the [Talk Calendar](https://github.com/crispinalan/talkcalendar) project.


The code generates formant frames from text for a Klatt synthesizer. A Klatt Synthesizer is a software synthesizer for generating speech designed by Dennis Klatt in [1980](https://www.fon.hum.uva.nl/david/ma_ssp/2010/Klatt-1980-JAS000971.pdf). With the help of [Peter Miller's](https://en.wikipedia.org/wiki/Peter_Miller_(software_engineer)) Recite project I was able generate frames of Klatt parameters with each frame consisting of forty parameters describing formant frequencies, amplitudes, bandwidths, voicing, frication etc. This required code to model vowels, sonorants, fricatives, plosives.The generated frames were used to produce speech using an implementation of the Klatt Cascade-Parallel Formant Speech Synthesizer by Reece H. Dunn found on [github](https://github.com/rhdunn/klatt). 


## Compile

Use the MAKEFILE to compile.

```
make
./speak
```
You should hear the formant speech synthesizer saying "Hello world I am a speech synthesizer"

## Summary

Unfortunately, I could not get get statisfactory results in terms of audible speech with this approach to speech synthesis. This was dissapointing. [Talk Calendar](https://github.com/crispinalan/talkcalendar) uses a phoneme based synthesizer. 
