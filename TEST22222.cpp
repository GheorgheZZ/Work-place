#include <iostream>
#include <AL/al.h>
#include <AL/alc.h>
#include <vector>
#include <cstdio>

int main() {
   ALCdevice *device;
   ALCcontext *context;
   device = alcOpenDevice(NULL);
   if (!device) {
      std::cerr << "Failed to open OpenAL device." << std::endl;
      return 1;
   }
   context = alcCreateContext(device, NULL);
   if (!alcMakeContextCurrent(context)) {
      std::cerr << "Failed to make OpenAL context current." << std::endl;
      return 1;
   }

   ALuint source, buffer;
   alGenSources(1, &source);
   alGenBuffers(1, &buffer);

   std::vector<char> data;
   FILE *fp = fopen("D:\\Work_place\\D++\\src\\Main_Menu.wav", "rb");
   if (!fp) {
      std::cerr << "Failed to open WAV file." << std::endl;
      return 1;
   }
   fseek(fp, 0, SEEK_END);
   data.resize(ftell(fp));
   rewind(fp);
   fread(data.data(), 1, data.size(), fp);
   fclose(fp);

   ALenum format;
   ALsizei size, freq;
   alutLoadWAVFile(reinterpret_cast<ALbyte *>(data.data()), &format, &data[0], &size, &freq, NULL);
   alBufferData(buffer, format, &data[0], size, freq);
   alSourcei(source, AL_BUFFER, buffer);
   alSourcePlay(source);

   int n;
   std::cin >> n;

   alDeleteSources(1, &source);
   alDeleteBuffers(1, &buffer);
   alcDestroyContext(context);
   alcCloseDevice(device);

   return 0;
}