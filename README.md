# UASM-SDK

UASM SDK is a collection of include files, libraries and binary tools required for working with the [UASM](http://www.terraspace.co.uk/uasm.html) assembler, for  x86 or x64 coding. It includes v2.46 of UASM. You may need to update UASM and other files from time to time.

[![](https://img.shields.io/badge/Assembler-UASM%20v2.5x-green.svg?style=flat-square&logo=visual-studio-code&logoColor=white&colorB=1CC887)](http://www.terraspace.co.uk/uasm.html) [![](https://img.shields.io/badge/RadASM%20-v2.2.2.x%20-red.svg?style=flat-square&colorB=C94C1E&logo=data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABQAAAAgCAYAAAASYli2AAACcklEQVR42tWVXWiPURzHz/FyQZOiVuatuFEoKzfKSCs35EJeCqFcEEa5s2heNrXiApuXFDYveUlKSywlIRfczM0WjZvJlGKTRLb5fHvOU6fT+T/PY3bj1Kff8z8vn+f8znPO+dshihnBYv8L4awRcl2FRTarBy8bQzgEjdbabzl9nxCW2IwOFYTrsBTKEH7PET4lLLYlGpcTrkC5qxqL8HeO8CVhoQ0qRxMOw34Y5TVVIPyYI+whTLVehZ9iWgZAL1mN8G6GbArhA/TZEilqKx2HCbADXkAV0oESwhOEfdChbXOUh1ovxS+wlcH3aNvC82VX3wx7Qyl9NhEugXZEU7ixX8E6Br13nTVDPU927R3QCl0wTX2h2rUNQqUv/ATLkHUGM1hLuBF8pFipZ+zBcIZKpw1O0vjYk24mnIXxEZHGNMIBxgxJ2M2P2PF7DafhGh1/0G8Gzzv1cWASfIZn0EJ7VzpIQqWyUguulFUXiDXwApxhYE9O2ibc2PMJNbAxkp5Oyh3NGvHzQkJPrK/aANtLjNNuOAU3kf/KFTrpGsJtaIdxbu3C0gvn4Dzi3qLCI3Su4/cCnnfDBvcCv/yEW0a7o6gwWI5tJvniMwutYZbQa9elsUqzgun/JKStjKAzvAvmDXuG1M1xqerkTAyG6Cy3FREeM8k2kag6MomvcBGaefG7LOF6k1wK6SUbFl0iOpqt/v+NjYjmEva4NQpPi9K6b5JN/UiXQTg+vbF1nlc4USytPpNcok1Iuk1G0eWgS0Hnd3akXbeIbuqWvP9lXxhOW2k9cOvzMJZWUWG/Sf4/lNbbv5GEwjeSSIaof7iitPwBoSgbVud1Jo0AAAAASUVORK5CYII=)](http://www.softpedia.com/get/Programming/File-Editors/RadASM.shtml)

# UASM-SDK Setup

* Download the latest release. The latest release can be found via the [releases](https://github.com/mrfearless/UASM-SDK/releases) section of this Github repository as
  `Source code (zip)`

* Extract the contents, and rename any folders required so that it matches the following folder structure:
  
  ```
  \UASM\bin
  \UASM\include
  \UASM\lib
  \UASM\lib\x64
  ```
  
  If you are using the RadASM IDE, you may wish to also download: [UASM-with-RadASM](https://github.com/mrfearless/UASM-with-RadASM)

# Includes & Libraries

**Note:** The includes and libraries provided here as part of the SDK may be outdated or some files may not work. To ensure you have the best and most recent versions, I recommend using the libraries from the Windows SDKs.

Includes for both x86 and x64 can be obtained from using the [WinInc](http://www.terraspace.co.uk/uasm.html#p7) package.

Libraries for **x64** can be obtained via (assuming default installed locations):

- Installed Windows SDK: `\Program Files (x86)\Microsoft SDKs\Windows\v7.1A\Lib\x64`
- Installed Windows Kit: `\Program Files (x86)\Windows Kits\8.1\Lib\winv6.3\um\x64`
- PellesC - `\PellesC\Lib\Win64`

These **x64** libraries should be copied to the `UASM\lib\x64` folder.

# Additional Resources

* [RadASM IDE](http://www.softpedia.com/get/Programming/File-Editors/RadASM.shtml)
* [Masm32](http://www.masm32.com/download.htm)
* [UASM](http://www.terraspace.co.uk/uasm.html)
* [WinInc](http://www.terraspace.co.uk/uasm.html#p7)
* [UASM-with-RadASM](https://github.com/mrfearless/UASM-with-RadASM)
* [Windows SDK archive](https://developer.microsoft.com/en-us/windows/downloads/sdk-archive)
* [Visual Studio](https://visualstudio.microsoft.com/)
* [PellesC 8.00](http://www.pellesc.de/download_start.php?file=800/setup64.exe)