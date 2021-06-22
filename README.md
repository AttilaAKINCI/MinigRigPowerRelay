# Mining Rig Power Switch Relay
This project is developed in order to ensure continuous power delivery for mining rigs. 

## Motivation
Minig rigs contains several GPUs in order to mine mainly Etherium. Rigs should be online as much as possible to provide maximum amount of shares. 
In case of power loss (electricity cut offs), minig rigs goes offline and need to be triggered manually or via network triggers. 

Appling a Network triggers brings different questions with it. Especially in security (static ips etc.). If you are searching for an automation 
Minig Rig Power Switch Relay can provide a basic, usefull and hardware based solution for you.  

## Work Case
Arduino starts with initial power and starts to listen PSU power as input. 
If system has power and PSU not working, Arduino triggers Motherboards power switch and PC starts accordingly.
Arduino checks that situation for each 30 seconds and power up rig in case of rig is shutted down for any reason.

When minig rig become online, minig process automatically starts. 

## Circuit Design
<img src="https://github.com/AttilaAKINCI/MinigRigPowerSwitchRelay/blob/master/images/rigrelay_bb.jpg" width="1000">

## Used Components
* [Arduino Pro Mini](https://www.aliexpress.com/item/32821902128.html?spm=a2g0o.productlist.0.0.306729d40kzlDs&aem_p4p_detail=202106220039092369460712652000029269865)
* [Arduino 5V DC Relay](https://www.aliexpress.com/item/32708600505.html)

# License

The code is licensed as:

```
Copyright 2021 Attila Akıncı

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

   http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
```
